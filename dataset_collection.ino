#include <DHT.h>

#define DHTPIN 2         // DHT11 data pin
#define DHTTYPE DHT11    // DHT 11
#define LDRPIN 34        // LDR analog pin
#define LEDPIN 4         // LED pin

DHT dht(DHTPIN, DHTTYPE);

const int maxSamples = 1000;
int sampleCount = 0;

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(LEDPIN, OUTPUT);
  digitalWrite(LEDPIN, LOW); // LED off by default
  Serial.println("LDR,Temp,Label,Condition"); // CSV header
}

void loop() {
  if (sampleCount >= maxSamples) {
    digitalWrite(LEDPIN, LOW); // Ensure LED is OFF
    while (1); // Stop the program (infinite loop)
  }

  int ldrValue = analogRead(LDRPIN); // Read LDR value (0-4095 for ESP32)
  float temp = dht.readTemperature(); // Read temperature in Celsius

  String labelStr = "NAN";
  String condition = "NAN";
  String tempStr;

  // If DHT11 fails, print NAN for all columns
  if (isnan(temp)) {
    tempStr = "NAN";
    digitalWrite(LEDPIN, LOW);
    Serial.print("NAN,NAN,NAN,NAN\n");
    sampleCount++;
    delay(200);
    return;
  } else {
    tempStr = String(temp);

    // Label and condition depend only on LDR value
    if (ldrValue < 300) {
      labelStr = "0";
      condition = "DIM";
      digitalWrite(LEDPIN, HIGH); // LED ON
    } else if (ldrValue >= 300 && ldrValue <= 1200) {
      labelStr = "1";
      condition = "BRIGHT";
      digitalWrite(LEDPIN, LOW); // LED OFF
    } else if (ldrValue > 1200) {
      labelStr = "2";
      condition = "GLARE";
      digitalWrite(LEDPIN, LOW); // LED OFF
    } else {
      // Should not occur, but just in case
      labelStr = "NAN";
      condition = "NAN";
      digitalWrite(LEDPIN, LOW);
    }
  }

  // Print every reading
  Serial.print(ldrValue);
  Serial.print(",");
  Serial.print(tempStr);
  Serial.print(",");
  Serial.print(labelStr);
  Serial.print(",");
  Serial.println(condition);

  sampleCount++;
  delay(500); // 5 samples per second (1000ms/5 = 200ms)
}