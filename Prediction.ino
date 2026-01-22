#define BLYNK_TEMPLATE_ID "TMPL6QIkvQpDg"
#define BLYNK_TEMPLATE_NAME "AI Adaptive Lighting"
#define BLYNK_AUTH_TOKEN "6EJRcmlBNR7_PFYhqh5rtpoEYZk-PokS"

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <BlynkSimpleEsp32.h>
#include <Adafruit_Sensor.h>
#include <DHT.h>
#include "ldrclassifier.h" 

char ssid[] = "Reno12F5G";
char pass[] = "87654321";

#define DHTPIN     4
#define DHTTYPE    DHT11
#define LDRPIN     34
#define RELAY_PIN  26

DHT dht(DHTPIN, DHTTYPE);

int MODE = 1;

const int N_CONSEC = 3;
bool lightOn = false;
int onCount = 0;
int offCount = 0;

const float LAMP_WATT   = 12.0;
const float SUPPLY_VOLT = 12.0;

float energyWh = 0.0;
unsigned long lastEnergyTime = 0;

unsigned long lastControlTime = 0;
unsigned long lastCloudTime   = 0;

const unsigned long CONTROL_INTERVAL = 1000;   
const unsigned long CLOUD_INTERVAL   = 1000;   

const char* classNames[] = {"DIM", "BRIGHT", "GLARE"};

int   lastLDR = 0;
float lastTemp = 25.0;
int   lastPredictedClass = 1;

float lastCurrentA = 0.0;
float lastPowerW   = 0.0;
float lastLatencyMs = 0.0;

void setup() {
  Serial.begin(115200);

  pinMode(RELAY_PIN, OUTPUT);
  digitalWrite(RELAY_PIN, LOW);

  dht.begin();

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("BLYNK AI ADAPTIVE LIGHTING STARTED");
}

void loop() {
  Blynk.run();

  unsigned long now = millis();

  if (now - lastControlTime >= CONTROL_INTERVAL) {
    lastControlTime = now;

    lastLDR = analogRead(LDRPIN);

    float t = dht.readTemperature();
    if (!isnan(t)) lastTemp = t;

    float features[RF_NUM_FEATURES];
    features[0] = lastLDR;
    features[1] = lastTemp;

    unsigned long t0 = micros();
    lastPredictedClass = rf_predict(features);
    lastLatencyMs = (micros() - t0) / 1000.0;

    lastPredictedClass = constrain(lastPredictedClass, 0, 2);

    if (lastPredictedClass == 0) {
      onCount++;
      offCount = 0;
    } else {
      offCount++;
      onCount = 0;
    }

    if (!lightOn && onCount >= N_CONSEC) lightOn = true;
    if (lightOn && offCount >= N_CONSEC) lightOn = false;

    digitalWrite(RELAY_PIN, lightOn ? HIGH : LOW);

    lastPowerW   = lightOn ? LAMP_WATT : 0.0;
    lastCurrentA = lightOn ? (LAMP_WATT / SUPPLY_VOLT) : 0.0;

    if (lastEnergyTime == 0) lastEnergyTime = now;
    float deltaH = (now - lastEnergyTime) / 3600000.0;
    energyWh += lastPowerW * deltaH;
    lastEnergyTime = now;

    Serial.print("LDR="); Serial.print(lastLDR);
    Serial.print(" Temp="); Serial.print(lastTemp);
    Serial.print(" AI="); Serial.print(classNames[lastPredictedClass]);
    Serial.print(" Relay="); Serial.print(lightOn ? "ON" : "OFF");
    Serial.print(" I="); Serial.print(lastCurrentA, 3); Serial.print("A");
    Serial.print(" P="); Serial.print(lastPowerW, 2); Serial.print("W");
    Serial.print(" Lat="); Serial.print(lastLatencyMs, 3); Serial.print("ms");
    Serial.print(" E="); Serial.print(energyWh, 4);
    Serial.println("Wh");
  }

  if (now - lastCloudTime >= CLOUD_INTERVAL) {
    lastCloudTime = now;

    Blynk.virtualWrite(V0, lastLDR);
    Blynk.virtualWrite(V1, lastTemp);
    Blynk.virtualWrite(V2, lastPredictedClass);
    Blynk.virtualWrite(V3, lightOn ? 1 : 0);
    Blynk.virtualWrite(V4, energyWh);
    Blynk.virtualWrite(V5, MODE);
    Blynk.virtualWrite(V6, lastCurrentA);
    Blynk.virtualWrite(V7, lastLatencyMs);
    Blynk.virtualWrite(V8, lastPowerW);
  }
}