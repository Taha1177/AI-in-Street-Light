#include <string.h>
void add_vectors(double *v1, double *v2, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] + v2[i];
}
void mul_vector_number(double *v1, double num, int size, double *result) {
    for(int i = 0; i < size; ++i)
        result[i] = v1[i] * num;
}
void score(double * input, double * output) {
    double var0[3];
    double var1[3];
    double var2[3];
    double var3[3];
    if (input[1] <= 0.8094137012958527) {
        if (input[0] <= -0.32739274203777313) {
            if (input[1] <= -0.8472571969032288) {
                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
            } else {
                if (input[1] <= 0.5288825631141663) {
                    if (input[1] <= -0.5390572249889374) {
                        if (input[0] <= -0.4897904545068741) {
                            if (input[0] <= -0.4931216835975647) {
                                if (input[1] <= -0.6239851415157318) {
                                    if (input[1] <= -0.8088282644748688) {
                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[0] <= -0.6088820993900299) {
                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= -0.5872290730476379) {
                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                            }
                        } else {
                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                        }
                    } else {
                        if (input[1] <= -0.018729603849351406) {
                            if (input[0] <= -1.015292763710022) {
                                if (input[0] <= -1.2717978358268738) {
                                    if (input[1] <= -0.37611859291791916) {
                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= -1.159368634223938) {
                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.20933707058429718) {
                                            memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= -0.4897904545068741) {
                                    if (input[0] <= -0.8287436068058014) {
                                        if (input[0] <= -0.9328446984291077) {
                                            memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= -0.43068768084049225) {
                                            if (input[1] <= -0.5306028723716736) {
                                                if (input[0] <= -0.49895134568214417) {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= -0.49832257628440857) {
                                                    memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= -0.4975539892911911) {
                                                        if (input[0] <= -0.5056138336658478) {
                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[0] <= -0.5780681669712067) {
                                                memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.42530763149261475) {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[0] <= -0.4931216835975647) {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[0] <= -0.34488172829151154) {
                                        if (input[0] <= -0.3523769974708557) {
                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[0] <= -0.3490457683801651) {
                                                if (input[1] <= -0.402250275015831) {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= -0.2062627598643303) {
                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= -0.08444306254386902) {
                                                    if (input[1] <= -0.38265150785446167) {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= -0.13901213556528091) {
                                                            if (input[1] <= -0.24507597088813782) {
                                                                if (input[1] <= -0.3177066296339035) {
                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= -0.16437522321939468) {
                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= -0.041786957532167435) {
                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[0] <= -0.34071768820285797) {
                                            if (input[1] <= -0.22739866748452187) {
                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.0767572782933712) {
                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[1] <= -0.3949487805366516) {
                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.037175487726926804) {
                                                    if (input[1] <= -0.11672335863113403) {
                                                        if (input[0] <= -0.33072397112846375) {
                                                            if (input[0] <= -0.33738645911216736) {
                                                                if (input[1] <= -0.20434129983186722) {
                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= -0.13747497648000717) {
                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= -0.1655280888080597) {
                                                                    if (input[1] <= -0.1839739754796028) {
                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= -0.13862784206867218) {
                                                                        if (input[1] <= -0.14900365471839905) {
                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= -0.14285502582788467) {
                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.14285714285714285, 0.8571428571428571, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= -0.17244530469179153) {
                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= -0.14439218491315842) {
                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= -0.1270991675555706) {
                                                                        if (input[1] <= -0.13939642161130905) {
                                                                            memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[0] <= -0.33738645911216736) {
                                                            if (input[1] <= -0.07176151685416698) {
                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= -0.08674880117177963) {
                                                                if (input[0] <= -0.33238959312438965) {
                                                                    if (input[1] <= -0.11441762372851372) {
                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= -0.11134330928325653) {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= -0.09904605522751808) {
                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= -0.044476984068751335) {
                                                                    if (input[1] <= -0.06100142002105713) {
                                                                        if (input[0] <= -0.33072397112846375) {
                                                                            if (input[0] <= -0.33405521512031555) {
                                                                                if (input[1] <= -0.07368296384811401) {
                                                                                    memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= -0.0767572782933712) {
                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= -0.06484431028366089) {
                                                                                if (input[1] <= -0.0767572782933712) {
                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= -0.06830291450023651) {
                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= -0.05331563390791416) {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[0] <= -0.33238959312438965) {
                                                                                if (input[1] <= -0.05177847854793072) {
                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.1749521717429161) {
                                if (input[0] <= -0.5655760318040848) {
                                    if (input[1] <= 0.09156141057610512) {
                                        if (input[0] <= -0.8370716869831085) {
                                            if (input[1] <= 0.060049690306186676) {
                                                if (input[1] <= 0.028537972830235958) {
                                                    if (input[0] <= -1.0386114120483398) {
                                                        if (input[1] <= -0.004510901402682066) {
                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= -1.1743592023849487) {
                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[0] <= -1.1577030420303345) {
                                                                    memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= -0.4331594556570053) {
                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.007200926309451461) {
                                            if (input[1] <= -0.010275240056216717) {
                                                if (input[0] <= -0.33405521512031555) {
                                                    if (input[1] <= -0.01796102523803711) {
                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= -0.3415504992008209) {
                                                            if (input[1] <= -0.014118132647126913) {
                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[0] <= -0.3523769974708557) {
                                                if (input[0] <= -0.36237071454524994) {
                                                    if (input[0] <= -0.40234553813934326) {
                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.13344893604516983) {
                                                            if (input[1] <= 0.05582251027226448) {
                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[0] <= -0.3740300387144089) {
                                                                    if (input[0] <= -0.382358118891716) {
                                                                        if (input[1] <= 0.09117712080478668) {
                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[0] <= -0.3665347546339035) {
                                                                        if (input[1] <= 0.0688883438706398) {
                                                                            if (input[1] <= 0.05966540053486824) {
                                                                                if (input[1] <= 0.05889682285487652) {
                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.1311432048678398) {
                                                                            if (input[1] <= 0.1234574131667614) {
                                                                                if (input[1] <= 0.05889682285487652) {
                                                                                    if (input[1] <= 0.05697537772357464) {
                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.07157836854457855) {
                                                                                        if (input[1] <= 0.06235542520880699) {
                                                                                            memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.07926415279507637) {
                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.09617287665605545) {
                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.11769307404756546) {
                                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.12537886202335358) {
                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.12845318019390106) {
                                                                                        memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.13268035650253296) {
                                                                                memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.13998185098171234) {
                                                                if (input[0] <= -0.3665347546339035) {
                                                                    if (input[1] <= 0.13806040585041046) {
                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[0] <= -0.3557082414627075) {
                                                        if (input[1] <= 0.05236390605568886) {
                                                            memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= -0.3590394854545593) {
                                                                if (input[1] <= 0.08848709240555763) {
                                                                    if (input[1] <= 0.07772699370980263) {
                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.11231302842497826) {
                                                                        if (input[1] <= 0.10001577064394951) {
                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.12730030715465546) {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.11077587306499481) {
                                                                    if (input[1] <= 0.08425991609692574) {
                                                                        if (input[1] <= 0.05697537772357464) {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.06273971684277058) {
                                                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.07772699743509293) {
                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.1330646499991417) {
                                                                        if (input[1] <= 0.12960604578256607) {
                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.09809432551264763) {
                                                            if (input[1] <= 0.07042550295591354) {
                                                                if (input[1] <= 0.05390106327831745) {
                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.05697537772357464) {
                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.05889682285487652) {
                                                                            memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.06427687406539917) {
                                                                                memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.07503697276115417) {
                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.08003273233771324) {
                                                                        if (input[1] <= 0.0784955769777298) {
                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.08272275701165199) {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.08579707145690918) {
                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.1257631480693817) {
                                                                if (input[1] <= 0.12153596803545952) {
                                                                    if (input[1] <= 0.11615591868758202) {
                                                                        if (input[1] <= 0.11192873865365982) {
                                                                            memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.14151901006698608) {
                                                                    if (input[1] <= 0.13652325421571732) {
                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.1384446993470192) {
                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.17226215451955795) {
                                                    if (input[1] <= 0.1372918263077736) {
                                                        if (input[1] <= -0.0018208768451586366) {
                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= -0.33072397112846375) {
                                                                if (input[0] <= -0.33405521512031555) {
                                                                    if (input[1] <= 0.02930655237287283) {
                                                                        if (input[1] <= 0.003943461691960692) {
                                                                            if (input[0] <= -0.34071768820285797) {
                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.00125343702165992) {
                                                                                    memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.022389345802366734) {
                                                                                if (input[1] <= 0.018930742517113686) {
                                                                                    if (input[1] <= 0.016625006683170795) {
                                                                                        if (input[0] <= -0.34488172829151154) {
                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.009707800345495343) {
                                                                                                if (input[1] <= 0.0058649079874157906) {
                                                                                                    memcpy(var3, (double[]){0.16666666666666666, 0.8333333333333334, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.013934982009232044) {
                                                                                                    memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.021236477419734) {
                                                                                        if (input[0] <= -0.33738645911216736) {
                                                                                            if (input[1] <= 0.020083609968423843) {
                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.048905303701758385) {
                                                                            if (input[1] <= 0.030843709595501423) {
                                                                                memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.03238086588680744) {
                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.033918023109436035) {
                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[0] <= -0.3415504992008209) {
                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.04121951945126057) {
                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.05390106327831745) {
                                                                                if (input[1] <= 0.051595328375697136) {
                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.07196265831589699) {
                                                                                    if (input[0] <= -0.3490457683801651) {
                                                                                        if (input[1] <= 0.0635082945227623) {
                                                                                            if (input[1] <= 0.05774395540356636) {
                                                                                                if (input[1] <= 0.0565910879522562) {
                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.06273971684277058) {
                                                                                                    if (input[1] <= 0.059281112626194954) {
                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.061202557757496834) {
                                                                                                            memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[0] <= -0.34071768820285797) {
                                                                                            if (input[0] <= -0.34488172829151154) {
                                                                                                if (input[1] <= 0.07042549923062325) {
                                                                                                    if (input[1] <= 0.061971137300133705) {
                                                                                                        if (input[1] <= 0.06120255962014198) {
                                                                                                            if (input[1] <= 0.05620679818093777) {
                                                                                                                if (input[1] <= 0.05505393072962761) {
                                                                                                                    memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.05774395540356636) {
                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.06043398007750511) {
                                                                                                                        if (input[1] <= 0.05966540053486824) {
                                                                                                                            if (input[1] <= 0.05889682285487652) {
                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.06273971684277058) {
                                                                                                            memcpy(var3, (double[]){0.7647058823529411, 0.23529411764705882, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.06619831919670105) {
                                                                                                                if (input[1] <= 0.0635082945227623) {
                                                                                                                    memcpy(var3, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.06504544988274574) {
                                                                                                                        if (input[1] <= 0.06427687034010887) {
                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.06811976805329323) {
                                                                                                                    if (input[1] <= 0.06735118851065636) {
                                                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.0688883438706398) {
                                                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.06965691968798637) {
                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.07119407877326012) {
                                                                                                        memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.0688883438706398) {
                                                                                                    if (input[1] <= 0.06043398007750511) {
                                                                                                        if (input[1] <= 0.058128245174884796) {
                                                                                                            if (input[1] <= 0.05697537772357464) {
                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.059281112626194954) {
                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){0.5625, 0.4375, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.06312400288879871) {
                                                                                                            if (input[1] <= 0.061971137300133705) {
                                                                                                                if (input[1] <= 0.06120255962014198) {
                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.06735118851065636) {
                                                                                                                if (input[1] <= 0.06619831919670105) {
                                                                                                                    if (input[1] <= 0.06427687034010887) {
                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.06504544988274574) {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.4444444444444444, 0.5555555555555556, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.06811976805329323) {
                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.06965691968798637) {
                                                                                                        memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.06619831919670105) {
                                                                                                if (input[1] <= 0.061971137300133705) {
                                                                                                    if (input[1] <= 0.058128245174884796) {
                                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[0] <= -0.33738645911216736) {
                                                                                                            if (input[1] <= 0.05889682285487652) {
                                                                                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.06043398007750511) {
                                                                                                                    if (input[1] <= 0.05966540053486824) {
                                                                                                                        memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.06120255962014198) {
                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.06043398007750511) {
                                                                                                                if (input[1] <= 0.05966540053486824) {
                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.8125, 0.1875, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.06120255962014198) {
                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[0] <= -0.33738645911216736) {
                                                                                                        if (input[1] <= 0.06504544988274574) {
                                                                                                            if (input[1] <= 0.0635082945227623) {
                                                                                                                if (input[1] <= 0.06273971684277058) {
                                                                                                                    memcpy(var3, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.06427687034010887) {
                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.06273971684277058) {
                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[0] <= -0.33738645911216736) {
                                                                                                    if (input[1] <= 0.07119407877326012) {
                                                                                                        if (input[1] <= 0.07042549923062325) {
                                                                                                            if (input[1] <= 0.06811976805329323) {
                                                                                                                memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.36363636363636365, 0.6363636363636364, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.06811976805329323) {
                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.0688883438706398) {
                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.07042549923062325) {
                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.07119407877326012) {
                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[0] <= -0.34071768820285797) {
                                                                                        if (input[0] <= -0.34488172829151154) {
                                                                                            if (input[0] <= -0.3490457683801651) {
                                                                                                if (input[1] <= 0.13498609513044357) {
                                                                                                    if (input[1] <= 0.1330646499991417) {
                                                                                                        if (input[1] <= 0.1276845932006836) {
                                                                                                            if (input[1] <= 0.08502849191427231) {
                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.09540430083870888) {
                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.10155292972922325) {
                                                                                                                        if (input[1] <= 0.09732574597001076) {
                                                                                                                            if (input[1] <= 0.09655716642737389) {
                                                                                                                                memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.11346589401364326) {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.11846165731549263) {
                                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.12268883734941483) {
                                                                                                                                    memcpy(var3, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[1] <= 0.1257631480693817) {
                                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){0.8571428571428571, 0.14285714285714285, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.08233846724033356) {
                                                                                                    if (input[1] <= 0.07580554857850075) {
                                                                                                        if (input[1] <= 0.07503696903586388) {
                                                                                                            if (input[1] <= 0.07388410344719887) {
                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.08041701838374138) {
                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.13652324676513672) {
                                                                                                        if (input[1] <= 0.08579706773161888) {
                                                                                                            if (input[1] <= 0.08425991609692574) {
                                                                                                                memcpy(var3, (double[]){0.45454545454545453, 0.5454545454545454, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.08502849191427231) {
                                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.10040006414055824) {
                                                                                                                if (input[1] <= 0.08733422681689262) {
                                                                                                                    if (input[1] <= 0.08656564727425575) {
                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.09963148459792137) {
                                                                                                                        if (input[1] <= 0.0881028063595295) {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.08963996544480324) {
                                                                                                                                if (input[1] <= 0.08887138590216637) {
                                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.09079283103346825) {
                                                                                                                                    memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[1] <= 0.09271427616477013) {
                                                                                                                                        if (input[1] <= 0.09194569662213326) {
                                                                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.09578859061002731) {
                                                                                                                                            if (input[1] <= 0.09502001479268074) {
                                                                                                                                                if (input[1] <= 0.093482855707407) {
                                                                                                                                                    memcpy(var3, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[1] <= 0.09425143525004387) {
                                                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[1] <= 0.0988629050552845) {
                                                                                                                                                if (input[1] <= 0.09655716642737389) {
                                                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[1] <= 0.09732574597001076) {
                                                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        if (input[1] <= 0.09809432551264763) {
                                                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                                        } else {
                                                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.11000729352235794) {
                                                                                                                    if (input[1] <= 0.10385866463184357) {
                                                                                                                        if (input[1] <= 0.10232150554656982) {
                                                                                                                            if (input[1] <= 0.10116863995790482) {
                                                                                                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.10501153394579887) {
                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.10731726512312889) {
                                                                                                                                if (input[1] <= 0.10616439953446388) {
                                                                                                                                    memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.1084701344370842) {
                                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.6111111111111112, 0.3888888888888889, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.11192873865365982) {
                                                                                                                        if (input[1] <= 0.11116016283631325) {
                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.1257631480693817) {
                                                                                                                            if (input[1] <= 0.11846165359020233) {
                                                                                                                                if (input[1] <= 0.11692449823021889) {
                                                                                                                                    if (input[1] <= 0.11423447355628014) {
                                                                                                                                        if (input[1] <= 0.1126973144710064) {
                                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[1] <= 0.11346589401364326) {
                                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.11538734287023544) {
                                                                                                                                            memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var3, (double[]){0.5555555555555556, 0.4444444444444444, 0.0}, 3 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.11961452290415764) {
                                                                                                                                    memcpy(var3, (double[]){0.8571428571428571, 0.14285714285714285, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[1] <= 0.12038310244679451) {
                                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.12153597176074982) {
                                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[1] <= 0.1234574131667614) {
                                                                                                                                                if (input[1] <= 0.12268883734941483) {
                                                                                                                                                    memcpy(var3, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var3, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                if (input[1] <= 0.1246102824807167) {
                                                                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.13114319741725922) {
                                                                                                                                if (input[1] <= 0.1299903318285942) {
                                                                                                                                    if (input[1] <= 0.1288374662399292) {
                                                                                                                                        if (input[1] <= 0.12653172761201859) {
                                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[1] <= 0.1276846006512642) {
                                                                                                                                                memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        memcpy(var3, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.13344893604516983) {
                                                                                                                                    if (input[1] <= 0.1319117769598961) {
                                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.13268035650253296) {
                                                                                                                                            memcpy(var3, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[1] <= 0.1342175155878067) {
                                                                                                                                        memcpy(var3, (double[]){0.48148148148148145, 0.5185185185185185, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.13498609513044357) {
                                                                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[1] <= 0.13575467467308044) {
                                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.13575467467308044) {
                                                                                                if (input[1] <= 0.09386714547872543) {
                                                                                                    if (input[1] <= 0.0742683932185173) {
                                                                                                        if (input[1] <= 0.07273123785853386) {
                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.07349981740117073) {
                                                                                                                memcpy(var3, (double[]){0.3, 0.7, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.09194569662213326) {
                                                                                                            if (input[1] <= 0.08771851658821106) {
                                                                                                                if (input[1] <= 0.08502849191427231) {
                                                                                                                    if (input[1] <= 0.07503696903586388) {
                                                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.07618983834981918) {
                                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.08156988769769669) {
                                                                                                                                if (input[1] <= 0.07734270766377449) {
                                                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[1] <= 0.07926415279507637) {
                                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var3, (double[]){0.5555555555555556, 0.4444444444444444, 0.0}, 3 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.08349133655428886) {
                                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.09002425149083138) {
                                                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.11654021218419075) {
                                                                                                        if (input[1] <= 0.10155292972922325) {
                                                                                                            if (input[1] <= 0.09809432551264763) {
                                                                                                                if (input[1] <= 0.09655716642737389) {
                                                                                                                    if (input[1] <= 0.09578859061002731) {
                                                                                                                        memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.10808584466576576) {
                                                                                                                if (input[1] <= 0.10616439953446388) {
                                                                                                                    if (input[1] <= 0.10462724417448044) {
                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.10731726512312889) {
                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.4444444444444444, 0.5555555555555556, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.10885442420840263) {
                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.11077587306499481) {
                                                                                                                        if (input[1] <= 0.1096230037510395) {
                                                                                                                            memcpy(var3, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.11231302842497826) {
                                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.11423447355628014) {
                                                                                                                                if (input[1] <= 0.11346589401364326) {
                                                                                                                                    memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.11538734287023544) {
                                                                                                                                    memcpy(var3, (double[]){0.36363636363636365, 0.6363636363636364, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.1246102824807167) {
                                                                                                            if (input[1] <= 0.1180773675441742) {
                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.12192026153206825) {
                                                                                                                    if (input[1] <= 0.11961452290415764) {
                                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.12076739221811295) {
                                                                                                                            memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.12268883734941483) {
                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.1234574131667614) {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.13268035650253296) {
                                                                                                                if (input[1] <= 0.1276846006512642) {
                                                                                                                    if (input[1] <= 0.12614744156599045) {
                                                                                                                        memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.13460180908441544) {
                                                                                                                    if (input[1] <= 0.13344893604516983) {
                                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.5454545454545454, 0.45454545454545453, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.13652324676513672) {
                                                                                                    memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[0] <= -0.33738645911216736) {
                                                                                            if (input[1] <= 0.13652324676513672) {
                                                                                                if (input[1] <= 0.12268883734941483) {
                                                                                                    if (input[1] <= 0.11730878800153732) {
                                                                                                        if (input[1] <= 0.1096230037510395) {
                                                                                                            if (input[1] <= 0.0784955769777298) {
                                                                                                                if (input[1] <= 0.07349981740117073) {
                                                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.07503696903586388) {
                                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.07734270766377449) {
                                                                                                                            if (input[1] <= 0.07580554857850075) {
                                                                                                                                memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.07657412812113762) {
                                                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.08502849191427231) {
                                                                                                                    if (input[1] <= 0.08349133655428886) {
                                                                                                                        if (input[1] <= 0.08272275701165199) {
                                                                                                                            if (input[1] <= 0.08003273233771324) {
                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.08118559792637825) {
                                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[1] <= 0.08195417746901512) {
                                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var3, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.08425991609692574) {
                                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.09194569662213326) {
                                                                                                                        if (input[1] <= 0.0881028063595295) {
                                                                                                                            if (input[1] <= 0.08733422681689262) {
                                                                                                                                if (input[1] <= 0.08656564727425575) {
                                                                                                                                    if (input[1] <= 0.08579706773161888) {
                                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.0892556756734848) {
                                                                                                                                memcpy(var3, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.09079283103346825) {
                                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.093482855707407) {
                                                                                                                            if (input[1] <= 0.09271427616477013) {
                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.09963148459792137) {
                                                                                                                                if (input[1] <= 0.09847861528396606) {
                                                                                                                                    if (input[1] <= 0.09502001479268074) {
                                                                                                                                        if (input[1] <= 0.09425143525004387) {
                                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var3, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.09732574597001076) {
                                                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.10116863995790482) {
                                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[1] <= 0.10385866463184357) {
                                                                                                                                        if (input[1] <= 0.10193721577525139) {
                                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.10616439953446388) {
                                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[1] <= 0.10808584466576576) {
                                                                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var3, (double[]){0.46153846153846156, 0.5384615384615384, 0.0}, 3 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.11269731819629669) {
                                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.11538734287023544) {
                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.11846165359020233) {
                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.12192026153206825) {
                                                                                                                if (input[1] <= 0.12038310244679451) {
                                                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.12730030715465546) {
                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.12922175973653793) {
                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.13575467467308044) {
                                                                                                                if (input[1] <= 0.1342175155878067) {
                                                                                                                    if (input[1] <= 0.1311432048678398) {
                                                                                                                        memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.13268035650253296) {
                                                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.13344893604516983) {
                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var3, (double[]){0.625, 0.375, 0.0}, 3 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.13498609513044357) {
                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.08272275701165199) {
                                                                                                if (input[1] <= 0.07580555230379105) {
                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[1] <= 0.08118559792637825) {
                                                                                                        if (input[1] <= 0.07926415279507637) {
                                                                                                            memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.08733422681689262) {
                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[1] <= 0.13575467467308044) {
                                                                                                        if (input[1] <= 0.10578010976314545) {
                                                                                                            if (input[1] <= 0.10155292972922325) {
                                                                                                                if (input[1] <= 0.08848709613084793) {
                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.09194570034742355) {
                                                                                                                        if (input[1] <= 0.08963996544480324) {
                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.09502001479268074) {
                                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.09617288038134575) {
                                                                                                                                memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.09963148459792137) {
                                                                                                                                    if (input[1] <= 0.09732574597001076) {
                                                                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.09809432551264763) {
                                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.1030900850892067) {
                                                                                                                    memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.13344893604516983) {
                                                                                                                if (input[1] <= 0.13268035650253296) {
                                                                                                                    if (input[1] <= 0.12960604578256607) {
                                                                                                                        if (input[1] <= 0.12806888669729233) {
                                                                                                                            if (input[1] <= 0.11192873865365982) {
                                                                                                                                if (input[1] <= 0.1096230037510395) {
                                                                                                                                    if (input[1] <= 0.1084701344370842) {
                                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.11615591868758202) {
                                                                                                                                    if (input[1] <= 0.1138501837849617) {
                                                                                                                                        if (input[1] <= 0.1126973144710064) {
                                                                                                                                            memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    if (input[1] <= 0.11961452290415764) {
                                                                                                                                        if (input[1] <= 0.11846165359020233) {
                                                                                                                                            memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                        }
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.12115168198943138) {
                                                                                                                                            if (input[1] <= 0.12038310244679451) {
                                                                                                                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        } else {
                                                                                                                                            if (input[1] <= 0.12614744156599045) {
                                                                                                                                                if (input[1] <= 0.12268883734941483) {
                                                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                                                } else {
                                                                                                                                                    if (input[1] <= 0.1246102824807167) {
                                                                                                                                                        memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                                                    } else {
                                                                                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                            } else {
                                                                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.13498609513044357) {
                                                                                                                    if (input[1] <= 0.1342175155878067) {
                                                                                                                        memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.059281112626194954) {
                                                                        if (input[1] <= 0.04390954226255417) {
                                                                            if (input[1] <= 0.017009295988827944) {
                                                                                if (input[1] <= 0.012397825252264738) {
                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.09617288038134575) {
                                                                            if (input[1] <= 0.09079283103346825) {
                                                                                if (input[1] <= 0.07811128720641136) {
                                                                                    if (input[1] <= 0.06850405409932137) {
                                                                                        if (input[1] <= 0.06273971498012543) {
                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.08195418119430542) {
                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.08541278168559074) {
                                                                                            memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.10232150927186012) {
                                                                                if (input[1] <= 0.0988629050552845) {
                                                                                    memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.12192026153206825) {
                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.1330646499991417) {
                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.1096230037510395) {
                                                                    if (input[1] <= 0.10808584466576576) {
                                                                        if (input[1] <= 0.10731726512312889) {
                                                                            if (input[1] <= 0.09540430083870888) {
                                                                                if (input[1] <= 0.07388410344719887) {
                                                                                    if (input[1] <= 0.07273123785853386) {
                                                                                        if (input[1] <= 0.017777875065803528) {
                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.02046789973974228) {
                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.07042549923062325) {
                                                                                                    if (input[1] <= 0.06466116011142731) {
                                                                                                        if (input[1] <= 0.061971135437488556) {
                                                                                                            if (input[1] <= 0.048905303701758385) {
                                                                                                                if (input[1] <= 0.040450939908623695) {
                                                                                                                    if (input[1] <= 0.02315792441368103) {
                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.03007513005286455) {
                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.05851253308355808) {
                                                                                                                    if (input[1] <= 0.05620679818093777) {
                                                                                                                        if (input[1] <= 0.053516773506999016) {
                                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.05966540053486824) {
                                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.46153846153846156, 0.5384615384615384, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.06735118478536606) {
                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.07196265831589699) {
                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.08771851658821106) {
                                                                                        if (input[1] <= 0.08425991609692574) {
                                                                                            if (input[1] <= 0.08041702210903168) {
                                                                                                if (input[1] <= 0.07657412812113762) {
                                                                                                    if (input[1] <= 0.07542125880718231) {
                                                                                                        memcpy(var3, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.08502849191427231) {
                                                                                                memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.093482855707407) {
                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.0988629013299942) {
                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.1042429506778717) {
                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.12384170666337013) {
                                                                        if (input[1] <= 0.12038310244679451) {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.13344893604516983) {
                                                                            if (input[1] <= 0.1299903318285942) {
                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.13575466722249985) {
                                                                                if (input[1] <= 0.1342175155878067) {
                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.17034070193767548) {
                                                            if (input[1] <= 0.1641920804977417) {
                                                                if (input[1] <= 0.15112624317407608) {
                                                                    if (input[0] <= -0.3490457683801651) {
                                                                        if (input[1] <= 0.14459332078695297) {
                                                                            if (input[1] <= 0.14344045519828796) {
                                                                                if (input[1] <= 0.1426718756556511) {
                                                                                    if (input[1] <= 0.1407504305243492) {
                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.2727272727272727, 0.7272727272727273, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.1480519250035286) {
                                                                            if (input[0] <= -0.34488172829151154) {
                                                                                if (input[1] <= 0.14190329611301422) {
                                                                                    if (input[1] <= 0.14113472402095795) {
                                                                                        if (input[1] <= 0.13998185843229294) {
                                                                                            if (input[1] <= 0.13806040585041046) {
                                                                                                memcpy(var3, (double[]){0.36363636363636365, 0.6363636363636364, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.13882898539304733) {
                                                                                                    memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.08333333333333333, 0.9166666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.14344045519828796) {
                                                                                        if (input[1] <= 0.1426718756556511) {
                                                                                            memcpy(var3, (double[]){0.5454545454545454, 0.45454545454545453, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.14613047987222672) {
                                                                                            if (input[1] <= 0.1449776142835617) {
                                                                                                if (input[1] <= 0.14420903474092484) {
                                                                                                    memcpy(var3, (double[]){0.3, 0.7, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.14574619382619858) {
                                                                                    if (input[1] <= 0.1449776142835617) {
                                                                                        if (input[0] <= -0.34071768820285797) {
                                                                                            if (input[1] <= 0.13998185843229294) {
                                                                                                if (input[1] <= 0.13882898539304733) {
                                                                                                    if (input[1] <= 0.13806040585041046) {
                                                                                                        memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){0.47619047619047616, 0.5238095238095238, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.14420903474092484) {
                                                                                                    if (input[1] <= 0.1426718756556511) {
                                                                                                        if (input[1] <= 0.14190329611301422) {
                                                                                                            if (input[1] <= 0.14113472402095795) {
                                                                                                                memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.5555555555555556, 0.4444444444444444, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[0] <= -0.33405521512031555) {
                                                                                                if (input[0] <= -0.33738645911216736) {
                                                                                                    if (input[1] <= 0.14344045519828796) {
                                                                                                        if (input[1] <= 0.1426718756556511) {
                                                                                                            if (input[1] <= 0.14190329611301422) {
                                                                                                                if (input[1] <= 0.13998185843229294) {
                                                                                                                    if (input[1] <= 0.13882898539304733) {
                                                                                                                        if (input[1] <= 0.13806040585041046) {
                                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.14113472402095795) {
                                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var3, (double[]){0.3076923076923077, 0.6923076923076923, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.14420903474092484) {
                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.13806040585041046) {
                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.14190329611301422) {
                                                                                                            if (input[1] <= 0.13921327143907547) {
                                                                                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.14113472402095795) {
                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.3, 0.7, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.1426718756556511) {
                                                                                                                memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.14420903474092484) {
                                                                                                                    if (input[1] <= 0.14344045519828796) {
                                                                                                                        memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.4444444444444444, 0.5555555555555556, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[0] <= -0.33072397112846375) {
                                                                                                    if (input[1] <= 0.13806040585041046) {
                                                                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.13882898539304733) {
                                                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.13998185843229294) {
                                                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.14113472402095795) {
                                                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.14228758960962296) {
                                                                                                                        memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.1395975649356842) {
                                                                                                        memcpy(var3, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[0] <= -0.33238959312438965) {
                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.14651477336883545) {
                                                                                        if (input[0] <= -0.33405521512031555) {
                                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.15958061069250107) {
                                                                        if (input[0] <= -0.33738645911216736) {
                                                                            if (input[0] <= -0.3432161211967468) {
                                                                                memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[0] <= -0.33238959312438965) {
                                                                                if (input[1] <= 0.15496913343667984) {
                                                                                    memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.5131267011165619) {
                                    if (input[0] <= -0.8387373089790344) {
                                        if (input[0] <= -1.1860185265541077) {
                                            memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= -0.638863205909729) {
                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                } else {
                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            }
        } else {
            if (input[0] <= 0.25723899621516466) {
                if (input[0] <= -0.2207932323217392) {
                    if (input[1] <= -0.5390572249889374) {
                        if (input[1] <= -0.8391871154308319) {
                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                        } else {
                            if (input[1] <= -0.5659574866294861) {
                                if (input[1] <= -0.6282123327255249) {
                                    if (input[0] <= -0.3240615129470825) {
                                        if (input[1] <= -0.6516539752483368) {
                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= -0.643199622631073) {
                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.6289809048175812) {
                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var3, (double[]){0.13333333333333333, 0.8666666666666667, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[0] <= -0.3240615129470825) {
                                        if (input[1] <= -0.6070764362812042) {
                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= -0.6059235632419586) {
                                                memcpy(var3, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.5920891463756561) {
                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= -0.5909362733364105) {
                                                        memcpy(var3, (double[]){0.1111111111111111, 0.8888888888888888, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[1] <= -0.5651889145374298) {
                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    if (input[1] <= -0.5421315431594849) {
                                        if (input[1] <= -0.5429001152515411) {
                                            if (input[1] <= -0.5540445148944855) {
                                                if (input[1] <= -0.5578874051570892) {
                                                    if (input[1] <= -0.5601931512355804) {
                                                        if (input[1] <= -0.5636517405509949) {
                                                            if (input[0] <= -0.3240615129470825) {
                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[0] <= -0.3240615129470825) {
                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= -0.5567345321178436) {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= -0.3240615129470825) {
                                                            if (input[1] <= -0.5551973879337311) {
                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var3, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= -0.5482801795005798) {
                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= -0.5467430055141449) {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= -0.544821560382843) {
                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= -0.31989747285842896) {
                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= -0.3240615129470825) {
                            if (input[1] <= 0.18302225321531296) {
                                if (input[1] <= -0.3565198481082916) {
                                    if (input[1] <= -0.5379043519496918) {
                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.49909114837646484) {
                                            if (input[1] <= -0.5298343002796173) {
                                                if (input[1] <= -0.5306028723716736) {
                                                    memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var3, (double[]){0.09090909090909091, 0.0, 0.9090909090909091}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= -0.4633522629737854) {
                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.08156988769769669) {
                                        if (input[1] <= 0.05966540053486824) {
                                            if (input[1] <= 0.04544669948518276) {
                                                if (input[1] <= -0.14477647095918655) {
                                                    if (input[1] <= -0.17398245632648468) {
                                                        if (input[1] <= -0.26890189945697784) {
                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= -0.2008827030658722) {
                                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= -0.08252161741256714) {
                                                        if (input[1] <= -0.11941338330507278) {
                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= -0.004895190708339214) {
                                                            if (input[1] <= -0.023341073654592037) {
                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.015472139231860638) {
                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.02930655237287283) {
                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.04083522967994213) {
                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.04928959161043167) {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.055438218638300896) {
                                                        if (input[1] <= 0.050826748833060265) {
                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var3, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.12422599643468857) {
                                            if (input[1] <= 0.09694145992398262) {
                                                if (input[1] <= 0.0838756263256073) {
                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.08618135750293732) {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.0881028063595295) {
                                                            memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.10578010976314545) {
                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.11116015911102295) {
                                                        if (input[1] <= 0.10808584466576576) {
                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.1138501837849617) {
                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= -0.2982444316148758) {
                                if (input[1] <= -0.08521164208650589) {
                                    if (input[1] <= -0.331541046500206) {
                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.2427702248096466) {
                                            if (input[0] <= -0.3124021887779236) {
                                                if (input[1] <= -0.30118219554424286) {
                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[0] <= -0.3124021887779236) {
                                                if (input[0] <= -0.31989747285842896) {
                                                    if (input[1] <= -0.12210341170430183) {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= -0.18358968943357468) {
                                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= -0.1732138767838478) {
                                                        memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[0] <= -0.3157334327697754) {
                                        if (input[1] <= 0.08195417746901512) {
                                            if (input[0] <= -0.31989747285842896) {
                                                if (input[1] <= 0.05812824331223965) {
                                                    if (input[1] <= -0.06446002423763275) {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= -0.05177847854793072) {
                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= -0.03640690911561251) {
                                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= -0.011812396813184023) {
                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.03929807245731354) {
                                                                        if (input[1] <= 0.027000817470252514) {
                                                                            if (input[1] <= 0.009323511039838195) {
                                                                                if (input[1] <= 0.0050963296089321375) {
                                                                                    if (input[1] <= 0.0008691479451954365) {
                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var3, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.04775243438780308) {
                                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 0.07119407877326012) {
                                                        memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var3, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= 0.12499457597732544) {
                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= 0.14190330356359482) {
                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[1] <= -0.06253857724368572) {
                                            if (input[0] <= -0.3107365667819977) {
                                                memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= 0.12806888297200203) {
                                                if (input[1] <= 0.054669640958309174) {
                                                    if (input[1] <= 0.046215277165174484) {
                                                        if (input[0] <= -0.3090709447860718) {
                                                            if (input[0] <= -0.3124021887779236) {
                                                                if (input[1] <= -0.016808157321065664) {
                                                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.01278211479075253) {
                                                                        if (input[1] <= -0.008738083066418767) {
                                                                            if (input[1] <= -0.013733843341469765) {
                                                                                memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var3, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= -0.04063409008085728) {
                                                                    memcpy(var3, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.008554932661354542) {
                                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var3, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[0] <= -0.3124021887779236) {
                                                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= -0.3090709447860718) {
                                                            if (input[1] <= 0.07926415652036667) {
                                                                memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var3, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var3, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= -0.2840866893529892) {
                                    memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] <= -0.5386729538440704) {
                        if (input[1] <= -0.8491786420345306) {
                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        }
                    } else {
                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= -0.5386729538440704) {
                    if (input[1] <= -0.8468728959560394) {
                        if (input[1] <= -1.1466185450553894) {
                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var3, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                        }
                    } else {
                        memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= 1.0900477170944214) {
                        if (input[1] <= -0.5213799178600311) {
                            if (input[1] <= -0.5236856639385223) {
                                if (input[1] <= -0.5306028723716736) {
                                    memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                } else {
                                    if (input[1] <= -0.5298343002796173) {
                                        if (input[0] <= 0.9234859347343445) {
                                            memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[0] <= 0.9234859347343445) {
                                    memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var3, (double[]){0.0, 0.6666666666666666, 0.3333333333333333}, 3 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[0] <= 0.7569242119789124) {
                                if (input[0] <= 0.5903624892234802) {
                                    memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                } else {
                                    if (input[1] <= -0.4987068623304367) {
                                        if (input[1] <= -0.5029340386390686) {
                                            memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[0] <= -0.7662829458713531) {
            memcpy(var3, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
        } else {
            memcpy(var3, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
        }
    }
    double var4[3];
    if (input[0] <= -0.32739274203777313) {
        if (input[0] <= -1.159368634223938) {
            if (input[0] <= -1.285955548286438) {
                if (input[0] <= -1.4083784818649292) {
                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[1] <= -0.8468728959560394) {
                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        if (input[1] <= -0.44682782143354416) {
                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
            }
        } else {
            if (input[0] <= -0.4914560765028) {
                if (input[1] <= -0.8472571969032288) {
                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[0] <= -0.8262451887130737) {
                        if (input[1] <= -0.5390572249889374) {
                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        } else {
                            if (input[0] <= -1.110232949256897) {
                                if (input[0] <= -1.1577030420303345) {
                                    memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= -0.9903084933757782) {
                                    if (input[0] <= -0.99363973736763) {
                                        if (input[1] <= 0.1830222476273775) {
                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.126531720161438) {
                                            memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                }
                            }
                        }
                    } else {
                        if (input[0] <= -0.8245795667171478) {
                            if (input[1] <= -0.5751804113388062) {
                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                            } else {
                                memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= -0.7038222849369049) {
                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                            } else {
                                if (input[1] <= -0.5390572249889374) {
                                    if (input[0] <= -0.4931216835975647) {
                                        if (input[1] <= -0.6604926288127899) {
                                            if (input[0] <= -0.5805665850639343) {
                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[0] <= -0.5838978290557861) {
                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= -0.16283806413412094) {
                                        if (input[1] <= -0.42838193476200104) {
                                            if (input[0] <= -0.5056138336658478) {
                                                if (input[1] <= -0.49371109902858734) {
                                                    if (input[1] <= -0.501396894454956) {
                                                        memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[0] <= -0.4931216835975647) {
                                                if (input[0] <= -0.5905602872371674) {
                                                    memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[1] <= -0.18896973878145218) {
                    if (input[0] <= -0.3523769974708557) {
                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        if (input[0] <= -0.34488172829151154) {
                            if (input[0] <= -0.3490457683801651) {
                                if (input[1] <= -0.38265152275562286) {
                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var4, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= -0.36727993190288544) {
                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                        }
                    }
                } else {
                    if (input[0] <= -0.3756956458091736) {
                        if (input[1] <= 0.06581402942538261) {
                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                        } else {
                            if (input[0] <= -0.39734868705272675) {
                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                            } else {
                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[0] <= -0.33072397112846375) {
                            if (input[1] <= 0.15496913343667984) {
                                if (input[0] <= -0.3490457683801651) {
                                    if (input[1] <= -0.11595477908849716) {
                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.0565910879522562) {
                                            if (input[1] <= 0.026616526301950216) {
                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[0] <= -0.3557082414627075) {
                                                    if (input[1] <= 0.04928959161043167) {
                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[0] <= -0.3523769974708557) {
                                                        if (input[1] <= 0.04736814461648464) {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= 0.05390106327831745) {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[0] <= -0.3590394854545593) {
                                                if (input[1] <= 0.05889682285487652) {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.13998185098171234) {
                                                        if (input[0] <= -0.3665347546339035) {
                                                            if (input[1] <= 0.11116016283631325) {
                                                                if (input[1] <= 0.08310704678297043) {
                                                                    if (input[1] <= 0.0688883438706398) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.13613896071910858) {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[0] <= -0.36237071454524994) {
                                                                if (input[1] <= 0.13344893604516983) {
                                                                    if (input[1] <= 0.09847861528396606) {
                                                                        if (input[1] <= 0.08156989142298698) {
                                                                            if (input[1] <= 0.06235542520880699) {
                                                                                memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.07157836854457855) {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.11846165359020233) {
                                                                            if (input[1] <= 0.11308160424232483) {
                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.1234574131667614) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.12691602110862732) {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.1311432048678398) {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.13268035650253296) {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.13498609513044357) {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.1372918263077736) {
                                                                            memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.07772699370980263) {
                                                                    if (input[1] <= 0.06466116011142731) {
                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.08848709240555763) {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.12730030715465546) {
                                                                            if (input[1] <= 0.11231302842497826) {
                                                                                if (input[1] <= 0.10001577064394951) {
                                                                                    memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.057359665632247925) {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[0] <= -0.3523769974708557) {
                                                        if (input[0] <= -0.3557082414627075) {
                                                            if (input[1] <= 0.07926415279507637) {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.13767611980438232) {
                                                                    if (input[1] <= 0.12960604578256607) {
                                                                        if (input[1] <= 0.09040854126214981) {
                                                                            if (input[1] <= 0.08502849191427231) {
                                                                                memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.1234574168920517) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.13498609513044357) {
                                                                            if (input[1] <= 0.1330646499991417) {
                                                                                memcpy(var4, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.09809432551264763) {
                                                                if (input[1] <= 0.07926415279507637) {
                                                                    if (input[1] <= 0.06312400661408901) {
                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.0731155276298523) {
                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.08272275701165199) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.08579707145690918) {
                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.11615591868758202) {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.14151901006698608) {
                                                                        if (input[1] <= 0.13498609513044357) {
                                                                            if (input[1] <= 0.12691602110862732) {
                                                                                if (input[1] <= 0.1192302331328392) {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.12307312712073326) {
                                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.1384446993470192) {
                                                                                if (input[1] <= 0.13652325421571732) {
                                                                                    memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.14459332078695297) {
                                                            if (input[1] <= 0.1407504305243492) {
                                                                if (input[1] <= 0.1246102824807167) {
                                                                    if (input[1] <= 0.09847861528396606) {
                                                                        if (input[1] <= 0.09540430083870888) {
                                                                            if (input[1] <= 0.0881028063595295) {
                                                                                if (input[1] <= 0.08233846724033356) {
                                                                                    if (input[1] <= 0.061971137300133705) {
                                                                                        if (input[1] <= 0.06081826984882355) {
                                                                                            if (input[1] <= 0.059281112626194954) {
                                                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.06273971684277058) {
                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.0635082945227623) {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.07196265459060669) {
                                                                                                    memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.093482855707407) {
                                                                                    if (input[1] <= 0.09194569662213326) {
                                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.1126973144710064) {
                                                                            if (input[1] <= 0.10654868930578232) {
                                                                                if (input[1] <= 0.103090088814497) {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.11346589401364326) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.11538734287023544) {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.11846165731549263) {
                                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.12192025780677795) {
                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.1353703811764717) {
                                                                        if (input[1] <= 0.1342175155878067) {
                                                                            if (input[1] <= 0.1330646499991417) {
                                                                                if (input[1] <= 0.1257631480693817) {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.1276845932006836) {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.13075891137123108) {
                                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.14344045519828796) {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[0] <= -0.34488172829151154) {
                                        if (input[1] <= 0.14344045519828796) {
                                            if (input[1] <= 0.05620679818093777) {
                                                if (input[1] <= -0.0536999236792326) {
                                                    if (input[1] <= -0.13901213556528091) {
                                                        if (input[1] <= -0.16437522321939468) {
                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= -0.08444306254386902) {
                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= -0.05715852789580822) {
                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= -0.006816636770963669) {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.005480618681758642) {
                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= 0.05390106327831745) {
                                                                if (input[1] <= 0.051595328375697136) {
                                                                    if (input[1] <= 0.04659956693649292) {
                                                                        if (input[1] <= 0.035839468240737915) {
                                                                            if (input[1] <= 0.02085218857973814) {
                                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.13344893604516983) {
                                                    if (input[1] <= 0.13114319741725922) {
                                                        if (input[1] <= 0.12960604578256607) {
                                                            if (input[1] <= 0.11423447355628014) {
                                                                if (input[1] <= 0.0881028063595295) {
                                                                    if (input[1] <= 0.08003273233771324) {
                                                                        if (input[1] <= 0.0784955769777298) {
                                                                            if (input[1] <= 0.07234694808721542) {
                                                                                if (input[1] <= 0.06965691968798637) {
                                                                                    if (input[1] <= 0.0688883438706398) {
                                                                                        if (input[1] <= 0.06811976805329323) {
                                                                                            if (input[1] <= 0.06273971684277058) {
                                                                                                if (input[1] <= 0.06120255962014198) {
                                                                                                    if (input[1] <= 0.05889682285487652) {
                                                                                                        if (input[1] <= 0.05774395540356636) {
                                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.06043398007750511) {
                                                                                                            if (input[1] <= 0.05966540053486824) {
                                                                                                                memcpy(var4, (double[]){0.5454545454545454, 0.45454545454545453, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var4, (double[]){0.5454545454545454, 0.45454545454545453, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var4, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.061971137300133705) {
                                                                                                        memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var4, (double[]){0.4666666666666667, 0.5333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.06389258429408073) {
                                                                                                    memcpy(var4, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[1] <= 0.06735118851065636) {
                                                                                                        if (input[1] <= 0.06504544988274574) {
                                                                                                            memcpy(var4, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.06619831919670105) {
                                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var4, (double[]){0.625, 0.375, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.07042549923062325) {
                                                                                        memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.07119407877326012) {
                                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.07657412812113762) {
                                                                                    if (input[1] <= 0.07580554857850075) {
                                                                                        if (input[1] <= 0.07503696903586388) {
                                                                                            if (input[1] <= 0.07388410344719887) {
                                                                                                memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.2727272727272727, 0.7272727272727273, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.07734270766377449) {
                                                                                        memcpy(var4, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.08733422681689262) {
                                                                            if (input[1] <= 0.08310704678297043) {
                                                                                if (input[1] <= 0.08156988769769669) {
                                                                                    memcpy(var4, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.08425991609692574) {
                                                                                    memcpy(var4, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.08656564727425575) {
                                                                                        if (input[1] <= 0.08502849191427231) {
                                                                                            memcpy(var4, (double[]){0.6153846153846154, 0.38461538461538464, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.08579706773161888) {
                                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.4444444444444444, 0.5555555555555556, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.09502001479268074) {
                                                                        if (input[1] <= 0.093482855707407) {
                                                                            if (input[1] <= 0.09271427616477013) {
                                                                                if (input[1] <= 0.08887138590216637) {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.08963996544480324) {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.09079283103346825) {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.09194569662213326) {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.09425143525004387) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.0988629050552845) {
                                                                            if (input[1] <= 0.09809432551264763) {
                                                                                if (input[1] <= 0.09732574597001076) {
                                                                                    if (input[1] <= 0.09655716642737389) {
                                                                                        if (input[1] <= 0.09578859061002731) {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.10078435018658638) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.1084701344370842) {
                                                                                    if (input[1] <= 0.10731726512312889) {
                                                                                        if (input[1] <= 0.10385866463184357) {
                                                                                            if (input[1] <= 0.10232150554656982) {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.10616439953446388) {
                                                                                                if (input[1] <= 0.10501153394579887) {
                                                                                                    memcpy(var4, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.11346589401364326) {
                                                                                        if (input[1] <= 0.1126973144710064) {
                                                                                            if (input[1] <= 0.11116016283631325) {
                                                                                                if (input[1] <= 0.1096230037510395) {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[1] <= 0.11039158329367638) {
                                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.11192873865365982) {
                                                                                                    memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.11846165359020233) {
                                                                    if (input[1] <= 0.11538734287023544) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.11692449823021889) {
                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.7272727272727273, 0.2727272727272727, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.12153597176074982) {
                                                                        if (input[1] <= 0.12038310244679451) {
                                                                            if (input[1] <= 0.11961452290415764) {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.1246102824807167) {
                                                                            if (input[1] <= 0.12268883734941483) {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.1234574131667614) {
                                                                                    memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.1288374662399292) {
                                                                                if (input[1] <= 0.12730030715465546) {
                                                                                    if (input[1] <= 0.1257631480693817) {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.13268035650253296) {
                                                            if (input[1] <= 0.1319117769598961) {
                                                                memcpy(var4, (double[]){0.7272727272727273, 0.2727272727272727, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var4, (double[]){0.625, 0.375, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var4, (double[]){0.875, 0.125, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 0.13652324676513672) {
                                                        if (input[1] <= 0.13498609513044357) {
                                                            if (input[1] <= 0.1342175155878067) {
                                                                memcpy(var4, (double[]){0.3125, 0.6875, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var4, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.13575467467308044) {
                                                                memcpy(var4, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.1372918263077736) {
                                                            memcpy(var4, (double[]){0.7, 0.3, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= 0.14190329611301422) {
                                                                if (input[1] <= 0.13998185843229294) {
                                                                    if (input[1] <= 0.13806040585041046) {
                                                                        memcpy(var4, (double[]){0.47058823529411764, 0.5294117647058824, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.13882898539304733) {
                                                                            memcpy(var4, (double[]){0.5833333333333334, 0.4166666666666667, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.6363636363636364, 0.36363636363636365, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.14113472402095795) {
                                                                        memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.4166666666666667, 0.5833333333333334, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.1426718756556511) {
                                                                    memcpy(var4, (double[]){0.625, 0.375, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[1] <= 0.1468990594148636) {
                                                if (input[1] <= 0.14420903474092484) {
                                                    memcpy(var4, (double[]){0.1, 0.9, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.1449776142835617) {
                                                        memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.14958908408880234) {
                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[0] <= -0.33738645911216736) {
                                            if (input[0] <= -0.34071768820285797) {
                                                if (input[1] <= 0.1449776142835617) {
                                                    if (input[1] <= 0.11346589401364326) {
                                                        if (input[1] <= 0.11154444888234138) {
                                                            if (input[1] <= 0.061971137300133705) {
                                                                if (input[1] <= 0.059281112626194954) {
                                                                    if (input[1] <= 0.05697537772357464) {
                                                                        if (input[1] <= 0.0024063048185780644) {
                                                                            if (input[1] <= -0.0767572782933712) {
                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= -0.03679119725711644) {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= -0.0033580338349565864) {
                                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.031227998668327928) {
                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.058128245174884796) {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.16666666666666666, 0.8333333333333334, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.06120255962014198) {
                                                                        if (input[1] <= 0.06043398007750511) {
                                                                            memcpy(var4, (double[]){0.631578947368421, 0.3684210526315789, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.07080978900194168) {
                                                                    if (input[1] <= 0.06965691968798637) {
                                                                        if (input[1] <= 0.06273971684277058) {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.0635082945227623) {
                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.0688883438706398) {
                                                                                    if (input[1] <= 0.06427687034010887) {
                                                                                        memcpy(var4, (double[]){0.2727272727272727, 0.7272727272727273, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.06619831919670105) {
                                                                                            if (input[1] <= 0.06504544988274574) {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.06735118851065636) {
                                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.06811976805329323) {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.125, 0.875, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.08349133655428886) {
                                                                        if (input[1] <= 0.07196265831589699) {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.07273123785853386) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.07887986302375793) {
                                                                                    if (input[1] <= 0.0742683932185173) {
                                                                                        if (input[1] <= 0.07349981740117073) {
                                                                                            memcpy(var4, (double[]){0.625, 0.375, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.07580554857850075) {
                                                                                            memcpy(var4, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.07734270766377449) {
                                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.08041701838374138) {
                                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.08156988769769669) {
                                                                                            memcpy(var4, (double[]){0.5555555555555556, 0.4444444444444444, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.08656564727425575) {
                                                                            if (input[1] <= 0.08579706773161888) {
                                                                                if (input[1] <= 0.08502849191427231) {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.09040854126214981) {
                                                                                if (input[1] <= 0.08887138590216637) {
                                                                                    if (input[1] <= 0.08771851658821106) {
                                                                                        memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.10193721950054169) {
                                                                                    if (input[1] <= 0.09847861528396606) {
                                                                                        if (input[1] <= 0.09732574597001076) {
                                                                                            if (input[1] <= 0.09271427616477013) {
                                                                                                if (input[1] <= 0.09194569662213326) {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.09425143525004387) {
                                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[1] <= 0.09655716642737389) {
                                                                                                        if (input[1] <= 0.09578859061002731) {
                                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var4, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.10616439953446388) {
                                                                                        if (input[1] <= 0.10462724417448044) {
                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.1096230037510395) {
                                                                                            if (input[1] <= 0.1084701344370842) {
                                                                                                if (input[1] <= 0.10731726512312889) {
                                                                                                    memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var4, (double[]){0.125, 0.875, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.1319117769598961) {
                                                            if (input[1] <= 0.1276846006512642) {
                                                                if (input[1] <= 0.12614744156599045) {
                                                                    if (input[1] <= 0.12076739221811295) {
                                                                        if (input[1] <= 0.11730878800153732) {
                                                                            if (input[1] <= 0.11538734287023544) {
                                                                                if (input[1] <= 0.11423447355628014) {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.11654021218419075) {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.11846165359020233) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.11961452290415764) {
                                                                                    memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.1234574131667614) {
                                                                            if (input[1] <= 0.12192026153206825) {
                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.12268883734941483) {
                                                                                    memcpy(var4, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.1246102824807167) {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.13344893604516983) {
                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.1426718756556511) {
                                                                    if (input[1] <= 0.13998185843229294) {
                                                                        if (input[1] <= 0.1372918263077736) {
                                                                            if (input[1] <= 0.13652324676513672) {
                                                                                if (input[1] <= 0.13460180908441544) {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.13575467467308044) {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.13806040585041046) {
                                                                                memcpy(var4, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.13882898539304733) {
                                                                                    memcpy(var4, (double[]){0.4666666666666667, 0.5333333333333333, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.14113472402095795) {
                                                                            memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.14190329611301422) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.14344045519828796) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.14420903474092484) {
                                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= 0.03238086588680744) {
                                                    if (input[1] <= -0.07176151685416698) {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.020083609968423843) {
                                                            if (input[1] <= 0.008554932661354542) {
                                                                if (input[1] <= -0.05831139534711838) {
                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= -0.037175487726926804) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= -0.007969505153596401) {
                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.01700929645448923) {
                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 0.1311432048678398) {
                                                        if (input[1] <= 0.05966540053486824) {
                                                            if (input[1] <= 0.05889682285487652) {
                                                                if (input[1] <= 0.058128245174884796) {
                                                                    if (input[1] <= 0.04544669948518276) {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.4444444444444444, 0.5555555555555556, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var4, (double[]){0.1, 0.9, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.07503696903586388) {
                                                                if (input[1] <= 0.07273123785853386) {
                                                                    if (input[1] <= 0.06619831919670105) {
                                                                        if (input[1] <= 0.06043398007750511) {
                                                                            memcpy(var4, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.061971137300133705) {
                                                                                if (input[1] <= 0.06120255962014198) {
                                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.06273971684277058) {
                                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.0635082945227623) {
                                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.06427687034010887) {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.06504544988274574) {
                                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.07042549923062325) {
                                                                            if (input[1] <= 0.06811976805329323) {
                                                                                if (input[1] <= 0.06735118851065636) {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.07196265831589699) {
                                                                                if (input[1] <= 0.07119407877326012) {
                                                                                    memcpy(var4, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.0742683932185173) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.09194569662213326) {
                                                                    if (input[1] <= 0.08733422681689262) {
                                                                        if (input[1] <= 0.08656564727425575) {
                                                                            if (input[1] <= 0.0838756263256073) {
                                                                                if (input[1] <= 0.08272275701165199) {
                                                                                    if (input[1] <= 0.08195417746901512) {
                                                                                        if (input[1] <= 0.07657412812113762) {
                                                                                            if (input[1] <= 0.07580554857850075) {
                                                                                                memcpy(var4, (double[]){0.4166666666666667, 0.5833333333333334, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.0784955769777298) {
                                                                                                if (input[1] <= 0.07734270766377449) {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.08041702210903168) {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.16666666666666666, 0.8333333333333334, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.08502849191427231) {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.08579706773161888) {
                                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.1257631480693817) {
                                                                        if (input[1] <= 0.12307312712073326) {
                                                                            if (input[1] <= 0.12192026153206825) {
                                                                                if (input[1] <= 0.09963148459792137) {
                                                                                    if (input[1] <= 0.0988629050552845) {
                                                                                        if (input[1] <= 0.09425143525004387) {
                                                                                            if (input[1] <= 0.093482855707407) {
                                                                                                if (input[1] <= 0.09271427616477013) {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.09578859061002731) {
                                                                                                if (input[1] <= 0.09502001479268074) {
                                                                                                    memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.09655716642737389) {
                                                                                                    memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[1] <= 0.0977100357413292) {
                                                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.10116863995790482) {
                                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.11846165359020233) {
                                                                                            if (input[1] <= 0.11538734287023544) {
                                                                                                if (input[1] <= 0.11077587306499481) {
                                                                                                    if (input[1] <= 0.10731726512312889) {
                                                                                                        if (input[1] <= 0.10616439953446388) {
                                                                                                            if (input[1] <= 0.10385866463184357) {
                                                                                                                if (input[1] <= 0.10193721577525139) {
                                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.1084701344370842) {
                                                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.1096230037510395) {
                                                                                                                memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.11269731819629669) {
                                                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.12038310244679451) {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.12730030715465546) {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.12922175973653793) {
                                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.13652324676513672) {
                                                            if (input[1] <= 0.13498609513044357) {
                                                                if (input[1] <= 0.1342175155878067) {
                                                                    if (input[1] <= 0.13344893604516983) {
                                                                        if (input[1] <= 0.13268035650253296) {
                                                                            memcpy(var4, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.5384615384615384, 0.46153846153846156, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.13575467467308044) {
                                                                    memcpy(var4, (double[]){0.7777777777777778, 0.2222222222222222, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.13998185843229294) {
                                                                if (input[1] <= 0.1372918263077736) {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.13882898539304733) {
                                                                        if (input[1] <= 0.13806040585041046) {
                                                                            memcpy(var4, (double[]){0.3, 0.7, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.14190329611301422) {
                                                                    if (input[1] <= 0.14113472402095795) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.14574619382619858) {
                                                                        if (input[1] <= 0.1449776142835617) {
                                                                            if (input[1] <= 0.1426718756556511) {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.14344045519828796) {
                                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.14420903474092484) {
                                                                                        memcpy(var4, (double[]){0.5555555555555556, 0.4444444444444444, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.14843621850013733) {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.15112624317407608) {
                                                                                memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[0] <= -0.33405521512031555) {
                                                if (input[1] <= 0.11692449823021889) {
                                                    if (input[1] <= 0.1138501837849617) {
                                                        if (input[1] <= 0.008170643588528037) {
                                                            if (input[1] <= -0.1217191219329834) {
                                                                if (input[1] <= -0.16168519854545593) {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= -0.1409335806965828) {
                                                                        memcpy(var4, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= -0.1336320862174034) {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= -0.05331563390791416) {
                                                                    if (input[1] <= -0.06484431214630604) {
                                                                        if (input[1] <= -0.11134330928325653) {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= -0.09789318591356277) {
                                                                                memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= -0.08290590718388557) {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= -0.07368296384811401) {
                                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= -0.05177847854793072) {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= -0.044476984068751335) {
                                                                            memcpy(var4, (double[]){0.7777777777777778, 0.2222222222222222, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= -0.014502421487122774) {
                                                                                if (input[1] <= -0.027183967642486095) {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= -0.016423868015408516) {
                                                                                        memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= -0.006432347694499185) {
                                                                                    memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.0027905940114578698) {
                                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.027385106310248375) {
                                                                if (input[1] <= 0.015087850391864777) {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.021236478351056576) {
                                                                        memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.09617288038134575) {
                                                                    if (input[1] <= 0.093482855707407) {
                                                                        if (input[1] <= 0.09117712080478668) {
                                                                            if (input[1] <= 0.05620679818093777) {
                                                                                if (input[1] <= 0.05044246092438698) {
                                                                                    if (input[1] <= 0.03314944542944431) {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.04121951945126057) {
                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.08656564727425575) {
                                                                                    if (input[1] <= 0.07119407877326012) {
                                                                                        if (input[1] <= 0.07042549923062325) {
                                                                                            if (input[1] <= 0.06965691968798637) {
                                                                                                if (input[1] <= 0.0688883438706398) {
                                                                                                    if (input[1] <= 0.06811976805329323) {
                                                                                                        if (input[1] <= 0.06735118851065636) {
                                                                                                            if (input[1] <= 0.06120255962014198) {
                                                                                                                if (input[1] <= 0.06043398007750511) {
                                                                                                                    if (input[1] <= 0.05966540053486824) {
                                                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var4, (double[]){0.45454545454545453, 0.5454545454545454, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.0635082945227623) {
                                                                                                                    if (input[1] <= 0.06273971684277058) {
                                                                                                                        if (input[1] <= 0.061971137300133705) {
                                                                                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.06427687034010887) {
                                                                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.06504544988274574) {
                                                                                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.06619831919670105) {
                                                                                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.08233846724033356) {
                                                                                            if (input[1] <= 0.07926415279507637) {
                                                                                                if (input[1] <= 0.07657412812113762) {
                                                                                                    if (input[1] <= 0.07273123785853386) {
                                                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.07503696903586388) {
                                                                                                            if (input[1] <= 0.0742683932185173) {
                                                                                                                memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.08464420214295387) {
                                                                                                memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.08579706773161888) {
                                                                                                    memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.08848709613084793) {
                                                                                        if (input[1] <= 0.08733422681689262) {
                                                                                            memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.08963996544480324) {
                                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.09502001479268074) {
                                                                            memcpy(var4, (double[]){0.875, 0.125, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.8571428571428571, 0.14285714285714285, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.09963148459792137) {
                                                                        if (input[1] <= 0.0977100357413292) {
                                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.1030900850892067) {
                                                                            if (input[1] <= 0.10155292972922325) {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.1126973144710064) {
                                                                                if (input[1] <= 0.11077587306499481) {
                                                                                    if (input[1] <= 0.1084701344370842) {
                                                                                        if (input[1] <= 0.10578010976314545) {
                                                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.1096230037510395) {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.11192873865365982) {
                                                                                        memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 0.14574619382619858) {
                                                        if (input[1] <= 0.1426718756556511) {
                                                            if (input[1] <= 0.13344893604516983) {
                                                                if (input[1] <= 0.1319117769598961) {
                                                                    if (input[1] <= 0.12960604578256607) {
                                                                        if (input[1] <= 0.12730030715465546) {
                                                                            if (input[1] <= 0.11846165359020233) {
                                                                                memcpy(var4, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.12307312712073326) {
                                                                                    if (input[1] <= 0.11961452290415764) {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.12038310244679451) {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.12153597176074982) {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.1246102824807167) {
                                                                                        memcpy(var4, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.13268035650253296) {
                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.13882898539304733) {
                                                                    if (input[1] <= 0.1342175155878067) {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.13690754026174545) {
                                                                            if (input[1] <= 0.13498609513044357) {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.13575467467308044) {
                                                                                    memcpy(var4, (double[]){0.2727272727272727, 0.7272727272727273, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.1407504305243492) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.14190329611301422) {
                                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.14344045519828796) {
                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.14420903474092484) {
                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.1449776142835617) {
                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= -0.07099293917417526) {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.07811128720641136) {
                                                        if (input[1] <= 0.05889682285487652) {
                                                            if (input[1] <= 0.050826748833060265) {
                                                                if (input[1] <= 0.017009295988827944) {
                                                                    if (input[1] <= 0.012397825252264738) {
                                                                        if (input[1] <= -0.024878231342881918) {
                                                                            if (input[1] <= -0.052162766456604004) {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= -0.0018208767287433147) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.04390954226255417) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.07503697276115417) {
                                                                if (input[1] <= 0.07234694808721542) {
                                                                    if (input[1] <= 0.06850405409932137) {
                                                                        if (input[1] <= 0.05966540053486824) {
                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.06273971498012543) {
                                                                                memcpy(var4, (double[]){0.7333333333333333, 0.26666666666666666, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.104242954403162) {
                                                            if (input[1] <= 0.0988629050552845) {
                                                                if (input[1] <= 0.08195418119430542) {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.09079283103346825) {
                                                                        if (input[1] <= 0.08541278168559074) {
                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.09617288038134575) {
                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.11346589401364326) {
                                                                if (input[1] <= 0.10885442420840263) {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.13075891137123108) {
                                                                    if (input[1] <= 0.12192026153206825) {
                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.13383322209119797) {
                                                                        memcpy(var4, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.13806040585041046) {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.14344045519828796) {
                                                                                if (input[1] <= 0.14228758960962296) {
                                                                                    if (input[1] <= 0.14036614447832108) {
                                                                                        if (input[1] <= 0.13882898539304733) {
                                                                                            memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.1449776142835617) {
                                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= -0.34071768820285797) {
                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.15650629252195358) {
                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.17994793504476547) {
                                            if (input[0] <= -0.33405521512031555) {
                                                if (input[1] <= 0.16688210517168045) {
                                                    if (input[1] <= 0.15958061069250107) {
                                                        if (input[0] <= -0.33738645911216736) {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.1030900850892067) {
                                if (input[1] <= 0.0892556719481945) {
                                    if (input[1] <= 0.0784955732524395) {
                                        if (input[1] <= -0.14439218491315842) {
                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= -0.13939642161130905) {
                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= 0.010092090058606118) {
                                                    if (input[1] <= -0.0590799730271101) {
                                                        if (input[1] <= -0.0671500451862812) {
                                                            if (input[1] <= -0.1270991675555706) {
                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= -0.09366600587964058) {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= -0.0767572782933712) {
                                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= -0.06868720427155495) {
                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= -0.03486975282430649) {
                                                            memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 0.048905303701758385) {
                                                        if (input[1] <= 0.035839468240737915) {
                                                            if (input[1] <= 0.02046789973974228) {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.03007513005286455) {
                                                                    if (input[1] <= 0.02315792441368103) {
                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.04083522967994213) {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.05620679818093777) {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= 0.07388410344719887) {
                                                                if (input[1] <= 0.07042549923062325) {
                                                                    if (input[1] <= 0.05889682285487652) {
                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.061202557757496834) {
                                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.06389258243143559) {
                                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.06735118478536606) {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.07542125880718231) {
                                                                    memcpy(var4, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[1] <= 0.08425991609692574) {
                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= 0.08502849191427231) {
                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= 0.08579706773161888) {
                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var4, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.0988629013299942) {
                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[1] <= 0.14958908408880234) {
                                    if (input[1] <= 0.1353703811764717) {
                                        if (input[1] <= 0.1342175155878067) {
                                            if (input[1] <= 0.10885442420840263) {
                                                if (input[1] <= 0.10808584466576576) {
                                                    if (input[1] <= 0.10731726512312889) {
                                                        if (input[1] <= 0.10578010976314545) {
                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= 0.12384170666337013) {
                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.13344893604516983) {
                                                        if (input[1] <= 0.1299903318285942) {
                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var4, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.14190329611301422) {
                                            if (input[1] <= 0.1395975649356842) {
                                                if (input[1] <= 0.13652324676513672) {
                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.1372918263077736) {
                                                        memcpy(var4, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                }
                            }
                        }
                    }
                }
            }
        }
    } else {
        if (input[0] <= 0.5903624892234802) {
            if (input[0] <= -0.2207932323217392) {
                if (input[1] <= -0.5386729538440704) {
                    if (input[0] <= -0.3240615129470825) {
                        if (input[1] <= -0.848025768995285) {
                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                        } else {
                            if (input[1] <= -0.6424310505390167) {
                                if (input[1] <= -0.6516539752483368) {
                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= -0.6066921353340149) {
                                    if (input[1] <= -0.6282123327255249) {
                                        if (input[1] <= -0.6289809048175812) {
                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var4, (double[]){0.05555555555555555, 0.9444444444444444, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= -0.6059235632419586) {
                                        memcpy(var4, (double[]){0.3076923076923077, 0.6923076923076923, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.5659574866294861) {
                                            if (input[1] <= -0.5990063548088074) {
                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.5982377827167511) {
                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= -0.5920891463756561) {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= -0.5909362733364105) {
                                                            memcpy(var4, (double[]){0.045454545454545456, 0.9545454545454546, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[1] <= -0.5651889145374298) {
                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.5536602139472961) {
                                                    if (input[1] <= -0.5551973879337311) {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var4, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= -0.5429001152515411) {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= -0.5421315431594849) {
                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[1] <= 0.1876337230205536) {
                        if (input[1] <= -0.5044711828231812) {
                            if (input[0] <= -0.3240615129470825) {
                                if (input[1] <= -0.5298343002796173) {
                                    if (input[1] <= -0.5317557454109192) {
                                        memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    } else {
                                        memcpy(var4, (double[]){0.1, 0.0, 0.9}, 3 * sizeof(double));
                                    }
                                } else {
                                    memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                }
                            } else {
                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= -0.3240615129470825) {
                                if (input[1] <= -0.3565198481082916) {
                                    if (input[1] <= -0.47564952075481415) {
                                        if (input[1] <= -0.49294252693653107) {
                                            memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= -0.45220786333084106) {
                                            if (input[1] <= -0.46258367598056793) {
                                                memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.08502849191427231) {
                                        if (input[1] <= 0.08156988769769669) {
                                            if (input[1] <= -0.0064323474653065205) {
                                                if (input[1] <= -0.26582758873701096) {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= -0.17398245632648468) {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= -0.11787622421979904) {
                                                            memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= -0.07291438430547714) {
                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= -0.029489701613783836) {
                                                                    if (input[1] <= -0.048319874331355095) {
                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.04083522967994213) {
                                                    if (input[1] <= 0.015472139231860638) {
                                                        if (input[1] <= 0.010092089418321848) {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 0.061971135437488556) {
                                                        if (input[1] <= 0.05582250840961933) {
                                                            if (input[1] <= 0.04544669948518276) {
                                                                memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.050826748833060265) {
                                                                    if (input[1] <= 0.04928959161043167) {
                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.06927263364195824) {
                                                            if (input[1] <= 0.06619831919670105) {
                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.07503696903586388) {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[1] <= 0.0838756263256073) {
                                                memcpy(var4, (double[]){0.8571428571428571, 0.14285714285714285, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[1] <= 0.10578010976314545) {
                                            if (input[1] <= 0.09694145992398262) {
                                                if (input[1] <= 0.08618135750293732) {
                                                    memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.0881028063595295) {
                                                        memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var4, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= 0.11116015911102295) {
                                                if (input[1] <= 0.10808584466576576) {
                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= 0.1234574168920517) {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= -0.05408421345055103) {
                                    if (input[1] <= -0.3703542649745941) {
                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[0] <= -0.31989747285842896) {
                                            if (input[1] <= -0.07406725734472275) {
                                                if (input[1] <= -0.2865792065858841) {
                                                    memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= -0.1901226043701172) {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= -0.1463136300444603) {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= -0.11441762372851372) {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= -0.08444306626915932) {
                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= -0.1732138767838478) {
                                                if (input[1] <= -0.21202708780765533) {
                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[1] <= 0.01739358576014638) {
                                        if (input[1] <= -0.020266760140657425) {
                                            if (input[0] <= -0.31989747285842896) {
                                                if (input[1] <= -0.05177847854793072) {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= -0.03640690911561251) {
                                                        memcpy(var4, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var4, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= -0.030642569065093994) {
                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[0] <= -0.3124021887779236) {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[1] <= -0.006432347698137164) {
                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= 0.01508784992620349) {
                                                    if (input[1] <= 0.013550692703574896) {
                                                        if (input[1] <= 0.0050963296089321375) {
                                                            if (input[0] <= -0.31823185086250305) {
                                                                if (input[1] <= 0.0008691479451954365) {
                                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= -0.0033580337185412645) {
                                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.009323511039838195) {
                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[1] <= 0.046215277165174484) {
                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= 0.06158684566617012) {
                                                if (input[0] <= -0.31656622886657715) {
                                                    memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.05005816929042339) {
                                                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.055438218638300896) {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.12038310244679451) {
                                                    if (input[1] <= 0.11154444888234138) {
                                                        if (input[0] <= -0.2982444316148758) {
                                                            if (input[1] <= 0.1096230037510395) {
                                                                if (input[0] <= -0.3124021887779236) {
                                                                    if (input[1] <= 0.06504544988274574) {
                                                                        memcpy(var4, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.07695841789245605) {
                                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.09963148459792137) {
                                                                            memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 0.13383322954177856) {
                                                        memcpy(var4, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.14190330356359482) {
                                                            memcpy(var4, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[1] <= -0.5363672077655792) {
                    if (input[1] <= -0.8484100699424744) {
                        memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                }
            }
        } else {
            if (input[1] <= -0.5390572249889374) {
                if (input[1] <= -0.8468728959560394) {
                    memcpy(var4, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                }
            } else {
                if (input[0] <= 0.7569242119789124) {
                    if (input[1] <= -0.49716971814632416) {
                        if (input[1] <= -0.5029340386390686) {
                            memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        }
                    } else {
                        memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[1] <= -0.5240699350833893) {
                        if (input[1] <= -0.5256071090698242) {
                            if (input[0] <= 0.9234859347343445) {
                                memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                            } else {
                                if (input[1] <= -0.5344457626342773) {
                                    memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var4, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        }
                    } else {
                        memcpy(var4, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            }
        }
    }
    add_vectors(var3, var4, 3, var2);
    double var5[3];
    if (input[0] <= -0.32739274203777313) {
        if (input[1] <= -0.8472571969032288) {
            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
        } else {
            if (input[1] <= 0.15496913343667984) {
                if (input[1] <= -0.539825826883316) {
                    if (input[0] <= -0.4914560765028) {
                        if (input[1] <= -0.8088282644748688) {
                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        } else {
                            if (input[0] <= -0.4931216835975647) {
                                if (input[0] <= -0.6088820993900299) {
                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                }
                            } else {
                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[0] <= -0.37069879472255707) {
                        if (input[0] <= -1.015292763710022) {
                            if (input[1] <= -0.2673647552728653) {
                                if (input[1] <= -0.3734285831451416) {
                                    memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                } else {
                                    if (input[1] <= -0.28734779357910156) {
                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                }
                            } else {
                                if (input[1] <= 0.09271427989006042) {
                                    if (input[1] <= -0.1955026537179947) {
                                        if (input[0] <= -1.2609713077545166) {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.002790593891404569) {
                                            if (input[1] <= -0.07637299224734306) {
                                                if (input[1] <= -0.07714156806468964) {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[0] <= -1.1635326743125916) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= -1.156037449836731) {
                                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[0] <= -1.265968143939972) {
                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                }
                            }
                        } else {
                            if (input[1] <= -0.4814138561487198) {
                                if (input[1] <= -0.5209956467151642) {
                                    if (input[0] <= -0.48645922541618347) {
                                        if (input[1] <= -0.5390572249889374) {
                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= -0.48410387337207794) {
                                        if (input[1] <= -0.49832257628440857) {
                                            if (input[1] <= -0.5006283223628998) {
                                                if (input[0] <= -0.4881248325109482) {
                                                    if (input[1] <= -0.5167684555053711) {
                                                        if (input[0] <= -0.7421315014362335) {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= -0.4994754493236542) {
                                                    if (input[0] <= -0.43732351064682007) {
                                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[0] <= -0.44815002381801605) {
                                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[1] <= -0.4944796860218048) {
                                                if (input[0] <= -0.4789639413356781) {
                                                    if (input[0] <= -0.5056138336658478) {
                                                        if (input[1] <= -0.49716970324516296) {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[0] <= -0.48645922541618347) {
                                                    memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[0] <= -0.48645922541618347) {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= -0.32270239293575287) {
                                    if (input[0] <= -0.4914560765028) {
                                        if (input[0] <= -0.5905602872371674) {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[0] <= -0.4931216835975647) {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= -0.1313263550400734) {
                                        if (input[1] <= -0.31194229423999786) {
                                            if (input[0] <= -0.4772983193397522) {
                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= -0.15937945991754532) {
                                                if (input[1] <= -0.17244529724121094) {
                                                    if (input[1] <= -0.2331629991531372) {
                                                        if (input[0] <= -0.4822951704263687) {
                                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[0] <= -0.4789639413356781) {
                                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[0] <= -0.6596834361553192) {
                                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        if (input[1] <= -0.07214580848813057) {
                                            if (input[1] <= -0.11172759905457497) {
                                                if (input[0] <= -0.5639104247093201) {
                                                    memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[0] <= -0.6563522070646286) {
                                                    if (input[0] <= -0.8287436068058014) {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[0] <= -0.4173360764980316) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[0] <= -0.5905602872371674) {
                                                if (input[1] <= 0.021620767191052437) {
                                                    if (input[1] <= -0.0440926942974329) {
                                                        if (input[1] <= -0.05216276831924915) {
                                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= -0.8495638370513916) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 0.09386714547872543) {
                                                        if (input[1] <= 0.06158684752881527) {
                                                            if (input[1] <= 0.026232237927615643) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                if (input[0] <= -0.39734868705272675) {
                                                    if (input[1] <= 0.06312400382012129) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= -0.4614749401807785) {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[0] <= -0.3898534029722214) {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= -0.3756956458091736) {
                                                            if (input[0] <= -0.382358118891716) {
                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.06888834573328495) {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[1] <= -0.35882559418678284) {
                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                        } else {
                            if (input[0] <= -0.3523769974708557) {
                                if (input[1] <= 0.026616526301950216) {
                                    if (input[1] <= -0.08982311189174652) {
                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 0.06235542520880699) {
                                        if (input[1] <= 0.05582251027226448) {
                                            if (input[0] <= -0.3665347546339035) {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= 0.05005816929042339) {
                                                    if (input[0] <= -0.3557082414627075) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[1] <= 0.05697537772357464) {
                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[0] <= -0.3665347546339035) {
                                                    if (input[1] <= 0.05889682285487652) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 0.05966540053486824) {
                                                        if (input[1] <= 0.05851253308355808) {
                                                            if (input[0] <= -0.36070509254932404) {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[0] <= -0.3557082414627075) {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[0] <= -0.35903947055339813) {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[1] <= 0.09002425149083138) {
                                            if (input[1] <= 0.08502849191427231) {
                                                if (input[1] <= 0.08118560165166855) {
                                                    if (input[1] <= 0.07811128720641136) {
                                                        if (input[0] <= -0.3665347546339035) {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= -0.36237071454524994) {
                                                                memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[0] <= -0.3590394854545593) {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[0] <= -0.3557082414627075) {
                                                                        if (input[1] <= 0.06965692341327667) {
                                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.073115523904562) {
                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.07503697276115417) {
                                                                            if (input[1] <= 0.07042550295591354) {
                                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 0.08425991609692574) {
                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[0] <= -0.3590394854545593) {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= -0.3557082414627075) {
                                                                memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.08656564727425575) {
                                                    if (input[1] <= 0.08579706773161888) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[0] <= -0.3557082414627075) {
                                                if (input[1] <= 0.11308160424232483) {
                                                    if (input[0] <= -0.3590394854545593) {
                                                        if (input[1] <= 0.10001577064394951) {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= -0.36237071454524994) {
                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[0] <= -0.36237071454524994) {
                                                        if (input[1] <= 0.12537886202335358) {
                                                            if (input[1] <= 0.1234574131667614) {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[0] <= -0.3665347546339035) {
                                                                if (input[1] <= 0.13575467467308044) {
                                                                    memcpy(var5, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.13806040585041046) {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.1372918263077736) {
                                                                    if (input[1] <= 0.1311432048678398) {
                                                                        if (input[1] <= 0.12845318019390106) {
                                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.13498609513044357) {
                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[0] <= -0.3590394854545593) {
                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= 0.1330646499991417) {
                                                                if (input[1] <= 0.1234574168920517) {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.12960604578256607) {
                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.13767611980438232) {
                                                                    if (input[1] <= 0.13498609513044357) {
                                                                        memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.12307312712073326) {
                                                    if (input[1] <= 0.1192302331328392) {
                                                        if (input[1] <= 0.11615591868758202) {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 0.1384446993470192) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.14151901006698608) {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.05966540053486824) {
                                    if (input[1] <= 0.02930655237287283) {
                                        if (input[1] <= 0.026616527698934078) {
                                            if (input[0] <= -0.33072397112846375) {
                                                if (input[0] <= -0.33405521512031555) {
                                                    if (input[0] <= -0.33738645911216736) {
                                                        if (input[0] <= -0.34071768820285797) {
                                                            if (input[1] <= -0.003742323024198413) {
                                                                if (input[1] <= -0.09750889614224434) {
                                                                    if (input[0] <= -0.3490457683801651) {
                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[0] <= -0.34488172829151154) {
                                                                            if (input[1] <= -0.3177066296339035) {
                                                                                memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= -0.008353793760761619) {
                                                                        if (input[1] <= -0.023725363425910473) {
                                                                            if (input[0] <= -0.3490457683801651) {
                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= -0.0536999236792326) {
                                                                                    if (input[0] <= -0.34488172829151154) {
                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= -0.0767572782933712) {
                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= -0.01258097542449832) {
                                                                                if (input[1] <= -0.01834531407803297) {
                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= -0.01565528940409422) {
                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[0] <= -0.34488172829151154) {
                                                                    if (input[1] <= 0.005480618681758642) {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.008554932661354542) {
                                                                if (input[1] <= -0.10327323526144028) {
                                                                    if (input[1] <= -0.15861088782548904) {
                                                                        if (input[1] <= -0.2116428017616272) {
                                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= -0.07176151685416698) {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= -0.05831139534711838) {
                                                                            memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.020083609968423843) {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= -0.06522860005497932) {
                                                            if (input[1] <= -0.09789318591356277) {
                                                                if (input[1] <= -0.1336320862174034) {
                                                                    if (input[1] <= -0.16744954138994217) {
                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= -0.12325627729296684) {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= -0.11441762372851372) {
                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= -0.11134330928325653) {
                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= -0.044476984068751335) {
                                                                if (input[1] <= -0.06253857724368572) {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= -0.05177847854793072) {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= -0.027183967642486095) {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= -0.016423868015408516) {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.01201353594660759) {
                                                                            if (input[1] <= -0.014502421487122774) {
                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.008170643588528037) {
                                                                                    if (input[1] <= -0.003742323024198413) {
                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.02046789973974228) {
                                                                                if (input[1] <= 0.016240717843174934) {
                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= -0.052162766456604004) {
                                                        if (input[1] <= -0.07099293917417526) {
                                                            if (input[1] <= -0.08021588250994682) {
                                                                if (input[1] <= -0.09904605522751808) {
                                                                    if (input[1] <= -0.12633058801293373) {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.017009295988827944) {
                                                            if (input[1] <= 0.012397825252264738) {
                                                                if (input[1] <= -0.0018208767287433147) {
                                                                    if (input[1] <= -0.024878231342881918) {
                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.02046789973974228) {
                                                    if (input[1] <= 0.008554932835977525) {
                                                        if (input[1] <= -0.09097598120570183) {
                                                            if (input[1] <= -0.14439218491315842) {
                                                                if (input[1] <= -0.17244530469179153) {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= -0.0767572782933712) {
                                                                if (input[1] <= -0.08559593185782433) {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= -0.0590799730271101) {
                                                                    if (input[1] <= -0.0671500451862812) {
                                                                        if (input[1] <= -0.06868720427155495) {
                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= -0.025262521405238658) {
                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= 0.02315792441368103) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= 0.04198809526860714) {
                                            if (input[1] <= 0.03468660078942776) {
                                                if (input[0] <= -0.33738645911216736) {
                                                    if (input[1] <= 0.03238086588680744) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= 0.044293832033872604) {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= 0.050826748833060265) {
                                                    if (input[0] <= -0.33405521512031555) {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.046215279027819633) {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[0] <= -0.33405521512031555) {
                                                        if (input[1] <= 0.05505393072962761) {
                                                            if (input[0] <= -0.3415504992008209) {
                                                                memcpy(var5, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.05582251027226448) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.058128245174884796) {
                                                                    if (input[1] <= 0.0565910879522562) {
                                                                        if (input[0] <= -0.3490457683801651) {
                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[0] <= -0.34488172829151154) {
                                                                            memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[0] <= -0.34071768820285797) {
                                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[0] <= -0.3490457683801651) {
                                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[0] <= -0.33738645911216736) {
                                                                            if (input[1] <= 0.05889682285487652) {
                                                                                if (input[0] <= -0.34071768820285797) {
                                                                                    if (input[0] <= -0.34488172829151154) {
                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[0] <= -0.3432161211967468) {
                                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.5454545454545454, 0.45454545454545453, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.05889682285487652) {
                                                            if (input[1] <= 0.05620679818093777) {
                                                                if (input[0] <= -0.33072397112846375) {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[0] <= -0.33072397112846375) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[0] <= -0.33405521512031555) {
                                        if (input[1] <= 0.14344045519828796) {
                                            if (input[0] <= -0.3490457683801651) {
                                                if (input[1] <= 0.10885442420840263) {
                                                    if (input[1] <= 0.061971137300133705) {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.0635082945227623) {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= 0.07234694436192513) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.09232999011874199) {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.09655716642737389) {
                                                                        if (input[1] <= 0.09540430083870888) {
                                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.09963148459792137) {
                                                                            if (input[1] <= 0.09732574597001076) {
                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.103090088814497) {
                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 0.13075891137123108) {
                                                        if (input[1] <= 0.1276845932006836) {
                                                            if (input[1] <= 0.11846165731549263) {
                                                                if (input[1] <= 0.1126973144710064) {
                                                                    memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.12192025780677795) {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.1257631480693817) {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.1426718756556511) {
                                                            if (input[1] <= 0.1407504305243492) {
                                                                if (input[1] <= 0.1330646499991417) {
                                                                    memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.1342175155878067) {
                                                                        memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.1353703811764717) {
                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.13767611980438232) {
                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.14036614447832108) {
                                                    if (input[1] <= 0.13806040585041046) {
                                                        if (input[0] <= -0.33738645911216736) {
                                                            if (input[1] <= 0.07119407877326012) {
                                                                if (input[1] <= 0.06504544988274574) {
                                                                    if (input[1] <= 0.0635082945227623) {
                                                                        if (input[0] <= -0.34488172829151154) {
                                                                            if (input[1] <= 0.061971137300133705) {
                                                                                if (input[1] <= 0.06043398007750511) {
                                                                                    memcpy(var5, (double[]){0.4791666666666667, 0.5208333333333334, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.06120255962014198) {
                                                                                        memcpy(var5, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.06273971684277058) {
                                                                                    memcpy(var5, (double[]){0.5238095238095238, 0.47619047619047616, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[0] <= -0.34071768820285797) {
                                                                                if (input[1] <= 0.061971137300133705) {
                                                                                    if (input[1] <= 0.06043398007750511) {
                                                                                        memcpy(var5, (double[]){0.3939393939393939, 0.6060606060606061, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.06120255962014198) {
                                                                                            memcpy(var5, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.46153846153846156, 0.5384615384615384, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.06120255962014198) {
                                                                                    if (input[1] <= 0.06043398007750511) {
                                                                                        memcpy(var5, (double[]){0.4666666666666667, 0.5333333333333333, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.06273971684277058) {
                                                                                        if (input[1] <= 0.061971137300133705) {
                                                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[0] <= -0.34071768820285797) {
                                                                            if (input[0] <= -0.34488172829151154) {
                                                                                if (input[1] <= 0.06427687034010887) {
                                                                                    memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.06427687034010887) {
                                                                                    memcpy(var5, (double[]){0.7692307692307693, 0.23076923076923078, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.06427687034010887) {
                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.06619831919670105) {
                                                                        if (input[0] <= -0.34071768820285797) {
                                                                            if (input[0] <= -0.34488172829151154) {
                                                                                memcpy(var5, (double[]){0.16666666666666666, 0.8333333333333334, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        if (input[0] <= -0.34071768820285797) {
                                                                            if (input[1] <= 0.06735118851065636) {
                                                                                if (input[0] <= -0.34488172829151154) {
                                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.06811976805329323) {
                                                                                    if (input[0] <= -0.34488172829151154) {
                                                                                        memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[0] <= -0.34488172829151154) {
                                                                                        if (input[1] <= 0.06965691968798637) {
                                                                                            if (input[1] <= 0.0688883438706398) {
                                                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.07042549923062325) {
                                                                                                memcpy(var5, (double[]){0.35714285714285715, 0.6428571428571429, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.06965691968798637) {
                                                                                            if (input[1] <= 0.0688883438706398) {
                                                                                                memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.38461538461538464, 0.6153846153846154, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.06811976805329323) {
                                                                                if (input[1] <= 0.06735118851065636) {
                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.07042549923062325) {
                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.093482855707407) {
                                                                    if (input[0] <= -0.34488172829151154) {
                                                                        if (input[1] <= 0.08041701838374138) {
                                                                            if (input[1] <= 0.0796484425663948) {
                                                                                if (input[1] <= 0.0784955769777298) {
                                                                                    if (input[1] <= 0.07580554857850075) {
                                                                                        if (input[1] <= 0.07503696903586388) {
                                                                                            if (input[1] <= 0.07388410344719887) {
                                                                                                if (input[1] <= 0.07234694808721542) {
                                                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.4444444444444444, 0.5555555555555556, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.7, 0.3, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.07695841789245605) {
                                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.08656564727425575) {
                                                                                if (input[1] <= 0.08502849191427231) {
                                                                                    if (input[1] <= 0.08310704678297043) {
                                                                                        if (input[1] <= 0.08156988769769669) {
                                                                                            memcpy(var5, (double[]){0.7777777777777778, 0.2222222222222222, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.08425991609692574) {
                                                                                            memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.7272727272727273, 0.2727272727272727, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.09194569662213326) {
                                                                                    if (input[1] <= 0.08963996544480324) {
                                                                                        if (input[1] <= 0.08771851658821106) {
                                                                                            memcpy(var5, (double[]){0.5454545454545454, 0.45454545454545453, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.08887138590216637) {
                                                                                                memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.09079283103346825) {
                                                                                            memcpy(var5, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.09271427616477013) {
                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.08272275701165199) {
                                                                            if (input[1] <= 0.08118559792637825) {
                                                                                if (input[1] <= 0.08003273233771324) {
                                                                                    if (input[0] <= -0.34071768820285797) {
                                                                                        if (input[1] <= 0.0742683932185173) {
                                                                                            if (input[1] <= 0.07234694808721542) {
                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.07349981740117073) {
                                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.07503696903586388) {
                                                                                                memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.07618983834981918) {
                                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[1] <= 0.07734270766377449) {
                                                                                                        memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.0784955769777298) {
                                                                                            if (input[1] <= 0.07388410344719887) {
                                                                                                if (input[1] <= 0.07273123785853386) {
                                                                                                    if (input[1] <= 0.07196265831589699) {
                                                                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.07503696903586388) {
                                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[1] <= 0.07734270766377449) {
                                                                                                        if (input[1] <= 0.07580554857850075) {
                                                                                                            memcpy(var5, (double[]){0.5333333333333333, 0.4666666666666667, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.07657412812113762) {
                                                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[0] <= -0.34071768820285797) {
                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[0] <= -0.34071768820285797) {
                                                                                    memcpy(var5, (double[]){0.2222222222222222, 0.7777777777777778, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    if (input[1] <= 0.08195417746901512) {
                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[0] <= -0.34071768820285797) {
                                                                                if (input[1] <= 0.09271427616477013) {
                                                                                    if (input[1] <= 0.09194569662213326) {
                                                                                        if (input[1] <= 0.08771851658821106) {
                                                                                            if (input[1] <= 0.08579707145690918) {
                                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.08887138590216637) {
                                                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.09040854126214981) {
                                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.0881028063595295) {
                                                                                    if (input[1] <= 0.08579706773161888) {
                                                                                        if (input[1] <= 0.0838756263256073) {
                                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.08502849191427231) {
                                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.08733422681689262) {
                                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.09079283103346825) {
                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.09194569662213326) {
                                                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.09425143525004387) {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[0] <= -0.34071768820285797) {
                                                                            if (input[0] <= -0.34488172829151154) {
                                                                                if (input[1] <= 0.09578859061002731) {
                                                                                    if (input[1] <= 0.09502001479268074) {
                                                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.09809432551264763) {
                                                                                        if (input[1] <= 0.09655716642737389) {
                                                                                            memcpy(var5, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.09732574597001076) {
                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.10385866463184357) {
                                                                                            if (input[1] <= 0.10001577436923981) {
                                                                                                if (input[1] <= 0.0988629050552845) {
                                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.10616439953446388) {
                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.13652324676513672) {
                                                                                                    if (input[1] <= 0.13575467467308044) {
                                                                                                        if (input[1] <= 0.13344893604516983) {
                                                                                                            if (input[1] <= 0.1234574131667614) {
                                                                                                                if (input[1] <= 0.11846165359020233) {
                                                                                                                    if (input[1] <= 0.11692449823021889) {
                                                                                                                        if (input[1] <= 0.11039158329367638) {
                                                                                                                            if (input[1] <= 0.10808584466576576) {
                                                                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.1096230037510395) {
                                                                                                                                    memcpy(var5, (double[]){0.38461538461538464, 0.6153846153846154, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.11154444888234138) {
                                                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.1126973144710064) {
                                                                                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    if (input[1] <= 0.11346589401364326) {
                                                                                                                                        memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        if (input[1] <= 0.11423447355628014) {
                                                                                                                                            memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                                        } else {
                                                                                                                                            if (input[1] <= 0.11538734287023544) {
                                                                                                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                                            } else {
                                                                                                                                                memcpy(var5, (double[]){0.4444444444444444, 0.5555555555555556, 0.0}, 3 * sizeof(double));
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        memcpy(var5, (double[]){0.2727272727272727, 0.7272727272727273, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.11961452290415764) {
                                                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.12038310244679451) {
                                                                                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.12153597176074982) {
                                                                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.12268883734941483) {
                                                                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.13268035650253296) {
                                                                                                                    if (input[1] <= 0.1246102824807167) {
                                                                                                                        memcpy(var5, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.1276846006512642) {
                                                                                                                            if (input[1] <= 0.12653172761201859) {
                                                                                                                                if (input[1] <= 0.1257631480693817) {
                                                                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            if (input[1] <= 0.12960604578256607) {
                                                                                                                                memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                            } else {
                                                                                                                                if (input[1] <= 0.1319117769598961) {
                                                                                                                                    if (input[1] <= 0.13114319741725922) {
                                                                                                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                                    } else {
                                                                                                                                        memcpy(var5, (double[]){0.36363636363636365, 0.6363636363636364, 0.0}, 3 * sizeof(double));
                                                                                                                                    }
                                                                                                                                } else {
                                                                                                                                    memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            }
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var5, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.13498609513044357) {
                                                                                                                if (input[1] <= 0.1342175155878067) {
                                                                                                                    memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var5, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.1372918263077736) {
                                                                                                        memcpy(var5, (double[]){0.7142857142857143, 0.2857142857142857, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.10885442420840263) {
                                                                                    if (input[1] <= 0.09578859061002731) {
                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.09732574597001076) {
                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.09847861528396606) {
                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.10193721950054169) {
                                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    if (input[1] <= 0.10462724417448044) {
                                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.10808584466576576) {
                                                                                                            if (input[1] <= 0.10616439953446388) {
                                                                                                                memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.10731726512312889) {
                                                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var5, (double[]){0.3, 0.7, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.1319117769598961) {
                                                                                        if (input[1] <= 0.11846165359020233) {
                                                                                            if (input[1] <= 0.11654021218419075) {
                                                                                                if (input[1] <= 0.11538734287023544) {
                                                                                                    if (input[1] <= 0.11077587306499481) {
                                                                                                        if (input[1] <= 0.1096230037510395) {
                                                                                                            memcpy(var5, (double[]){0.5714285714285714, 0.42857142857142855, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.11423447355628014) {
                                                                                                            if (input[1] <= 0.11231302842497826) {
                                                                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.11346589401364326) {
                                                                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){0.5454545454545454, 0.45454545454545453, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.11730878800153732) {
                                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.12076739221811295) {
                                                                                                if (input[1] <= 0.11961452290415764) {
                                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.1330646499991417) {
                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.1372918263077736) {
                                                                                                if (input[1] <= 0.13652324676513672) {
                                                                                                    if (input[1] <= 0.13575467467308044) {
                                                                                                        if (input[1] <= 0.13460180908441544) {
                                                                                                            memcpy(var5, (double[]){0.35, 0.65, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.16666666666666666, 0.8333333333333334, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.10116863995790482) {
                                                                                if (input[1] <= 0.09655716642737389) {
                                                                                    if (input[1] <= 0.09502001479268074) {
                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.09578859061002731) {
                                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.09809432551264763) {
                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.10001577436923981) {
                                                                                            if (input[1] <= 0.0988629050552845) {
                                                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.1246102824807167) {
                                                                                    if (input[1] <= 0.11961452290415764) {
                                                                                        if (input[1] <= 0.11730878800153732) {
                                                                                            if (input[1] <= 0.11538734287023544) {
                                                                                                if (input[1] <= 0.10731726512312889) {
                                                                                                    if (input[1] <= 0.10462724044919014) {
                                                                                                        if (input[1] <= 0.10193721577525139) {
                                                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.11269731819629669) {
                                                                                                        if (input[1] <= 0.11039158329367638) {
                                                                                                            if (input[1] <= 0.1084701344370842) {
                                                                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                memcpy(var5, (double[]){0.5833333333333334, 0.4166666666666667, 0.0}, 3 * sizeof(double));
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.1234574131667614) {
                                                                                            if (input[1] <= 0.12230454757809639) {
                                                                                                memcpy(var5, (double[]){0.8571428571428571, 0.14285714285714285, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    if (input[1] <= 0.12730030715465546) {
                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        if (input[1] <= 0.13498609513044357) {
                                                                                            if (input[1] <= 0.1342175155878067) {
                                                                                                if (input[1] <= 0.1311432048678398) {
                                                                                                    if (input[1] <= 0.12922175973653793) {
                                                                                                        memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.13268035650253296) {
                                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.13344893604516983) {
                                                                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.13652325421571732) {
                                                                                                memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                }
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.06427687034010887) {
                                                                if (input[1] <= 0.06043398007750511) {
                                                                    memcpy(var5, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.06273971684277058) {
                                                                        if (input[1] <= 0.06120255962014198) {
                                                                            memcpy(var5, (double[]){0.7, 0.3, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.061971137300133705) {
                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.07657412812113762) {
                                                                    if (input[1] <= 0.06965691968798637) {
                                                                        if (input[1] <= 0.06504544988274574) {
                                                                            memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.06735118851065636) {
                                                                                if (input[1] <= 0.06619831919670105) {
                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                if (input[1] <= 0.0688883438706398) {
                                                                                    if (input[1] <= 0.06811976805329323) {
                                                                                        memcpy(var5, (double[]){0.42857142857142855, 0.5714285714285714, 0.0}, 3 * sizeof(double));
                                                                                    } else {
                                                                                        memcpy(var5, (double[]){0.4444444444444444, 0.5555555555555556, 0.0}, 3 * sizeof(double));
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.08502849191427231) {
                                                                        if (input[1] <= 0.08272275701165199) {
                                                                            if (input[1] <= 0.07926415279507637) {
                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.08118559792637825) {
                                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.08425991609692574) {
                                                                                memcpy(var5, (double[]){0.8333333333333334, 0.16666666666666666, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        if (input[1] <= 0.08733422681689262) {
                                                                            if (input[1] <= 0.08656564727425575) {
                                                                                if (input[1] <= 0.08579706773161888) {
                                                                                    memcpy(var5, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        } else {
                                                                            if (input[1] <= 0.13652324676513672) {
                                                                                if (input[1] <= 0.13575467467308044) {
                                                                                    if (input[1] <= 0.12614744156599045) {
                                                                                        if (input[1] <= 0.12038310244679451) {
                                                                                            if (input[1] <= 0.11961452290415764) {
                                                                                                if (input[1] <= 0.09502001479268074) {
                                                                                                    if (input[1] <= 0.09309856593608856) {
                                                                                                        if (input[1] <= 0.09002425149083138) {
                                                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.09425143525004387) {
                                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.09617288038134575) {
                                                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.10155292972922325) {
                                                                                                            if (input[1] <= 0.09732574597001076) {
                                                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.09809432551264763) {
                                                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.09963148459792137) {
                                                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            if (input[1] <= 0.1126973144710064) {
                                                                                                                if (input[1] <= 0.11192873865365982) {
                                                                                                                    if (input[1] <= 0.1030900850892067) {
                                                                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.11077587306499481) {
                                                                                                                            if (input[1] <= 0.1096230037510395) {
                                                                                                                                if (input[1] <= 0.10654868930578232) {
                                                                                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                                                } else {
                                                                                                                                    memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                                }
                                                                                                                            } else {
                                                                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                            }
                                                                                                                        } else {
                                                                                                                            memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                } else {
                                                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.1138501837849617) {
                                                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    if (input[1] <= 0.11692449823021889) {
                                                                                                                        if (input[1] <= 0.11538734287023544) {
                                                                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    } else {
                                                                                                                        if (input[1] <= 0.11846165359020233) {
                                                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                        } else {
                                                                                                                            memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                                        }
                                                                                                                    }
                                                                                                                }
                                                                                                            }
                                                                                                        }
                                                                                                    }
                                                                                                }
                                                                                            } else {
                                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                            }
                                                                                        } else {
                                                                                            if (input[1] <= 0.12307312712073326) {
                                                                                                if (input[1] <= 0.12153597176074982) {
                                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            } else {
                                                                                                if (input[1] <= 0.1246102824807167) {
                                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                } else {
                                                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    } else {
                                                                                        if (input[1] <= 0.12806888669729233) {
                                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                        } else {
                                                                                            if (input[1] <= 0.12960604578256607) {
                                                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                            } else {
                                                                                                if (input[1] <= 0.1342175155878067) {
                                                                                                    if (input[1] <= 0.13075891137123108) {
                                                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        if (input[1] <= 0.13344893604516983) {
                                                                                                            if (input[1] <= 0.1319117769598961) {
                                                                                                                memcpy(var5, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                                                                                            } else {
                                                                                                                if (input[1] <= 0.13268035650253296) {
                                                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                                                } else {
                                                                                                                    memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                                                                }
                                                                                                            }
                                                                                                        } else {
                                                                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                                        }
                                                                                                    }
                                                                                                } else {
                                                                                                    if (input[1] <= 0.13498609513044357) {
                                                                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                                                    } else {
                                                                                                        memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                                                    }
                                                                                                }
                                                                                            }
                                                                                        }
                                                                                    }
                                                                                } else {
                                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.13882898539304733) {
                                                            if (input[0] <= -0.34071768820285797) {
                                                                if (input[0] <= -0.34488172829151154) {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.4666666666666667, 0.5333333333333333, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[0] <= -0.33738645911216736) {
                                                                    memcpy(var5, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.1395975649356842) {
                                                                if (input[0] <= -0.34488172829151154) {
                                                                    memcpy(var5, (double[]){0.5333333333333333, 0.4666666666666667, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[0] <= -0.34071768820285797) {
                                                                        memcpy(var5, (double[]){0.7, 0.3, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[0] <= -0.33738645911216736) {
                                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[0] <= -0.3415504992008209) {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 0.14190329611301422) {
                                                        if (input[1] <= 0.14113472402095795) {
                                                            if (input[0] <= -0.34488172829151154) {
                                                                memcpy(var5, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[0] <= -0.34071768820285797) {
                                                                    memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[0] <= -0.34071768820285797) {
                                                                if (input[0] <= -0.34488172829151154) {
                                                                    memcpy(var5, (double[]){0.125, 0.875, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[0] <= -0.33738645911216736) {
                                                                    memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[0] <= -0.34071768820285797) {
                                                            if (input[1] <= 0.1426718756556511) {
                                                                if (input[0] <= -0.34488172829151154) {
                                                                    memcpy(var5, (double[]){0.47058823529411764, 0.5294117647058824, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[0] <= -0.33738645911216736) {
                                                                if (input[1] <= 0.1426718756556511) {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.1426718756556511) {
                                                                    memcpy(var5, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[0] <= -0.3490457683801651) {
                                                if (input[1] <= 0.14459332078695297) {
                                                    memcpy(var5, (double[]){0.8571428571428571, 0.14285714285714285, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= 0.1449776142835617) {
                                                    if (input[0] <= -0.34071768820285797) {
                                                        if (input[1] <= 0.14420903474092484) {
                                                            if (input[0] <= -0.34488172829151154) {
                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[0] <= -0.34488172829151154) {
                                                                memcpy(var5, (double[]){0.7857142857142857, 0.21428571428571427, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.14420903474092484) {
                                                            if (input[0] <= -0.33738645911216736) {
                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[0] <= -0.33738645911216736) {
                                                                memcpy(var5, (double[]){0.375, 0.625, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.75, 0.25, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 0.14574619382619858) {
                                                        if (input[0] <= -0.33738645911216736) {
                                                            if (input[0] <= -0.34071768820285797) {
                                                                if (input[0] <= -0.34488172829151154) {
                                                                    memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[0] <= -0.33738645911216736) {
                                                            if (input[1] <= 0.14766763895750046) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[0] <= -0.3432161211967468) {
                                                                    if (input[1] <= 0.14997337758541107) {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.15151052922010422) {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    } else {
                                        if (input[1] <= 0.13806040585041046) {
                                            if (input[1] <= 0.13075891137123108) {
                                                if (input[1] <= 0.10270579531788826) {
                                                    if (input[1] <= 0.07273123785853386) {
                                                        if (input[0] <= -0.33072397112846375) {
                                                            if (input[1] <= 0.06273971498012543) {
                                                                memcpy(var5, (double[]){0.46153846153846156, 0.5384615384615384, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.06312400288879871) {
                                                                if (input[1] <= 0.061202557757496834) {
                                                                    memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.07042549923062325) {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.07196265831589699) {
                                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        if (input[0] <= -0.33072397112846375) {
                                                            if (input[1] <= 0.09617288038134575) {
                                                                if (input[1] <= 0.0784955769777298) {
                                                                    if (input[1] <= 0.07503697276115417) {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.08541278168559074) {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.09079283103346825) {
                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    }
                                                                }
                                                            } else {
                                                                if (input[1] <= 0.0988629050552845) {
                                                                    memcpy(var5, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.07657412812113762) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.08579706773161888) {
                                                                    if (input[1] <= 0.08464420214295387) {
                                                                        if (input[1] <= 0.07887986302375793) {
                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.08233846724033356) {
                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    } else {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    if (input[1] <= 0.09540430083870888) {
                                                                        if (input[1] <= 0.093482855707407) {
                                                                            if (input[1] <= 0.0881028063595295) {
                                                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                if (input[1] <= 0.09117712080478668) {
                                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                                } else {
                                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                                }
                                                                            }
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[0] <= -0.33072397112846375) {
                                                        if (input[1] <= 0.1084701344370842) {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[1] <= 0.12153597176074982) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.1234574168920517) {
                                                            if (input[1] <= 0.10731726512312889) {
                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.1096230037510395) {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    if (input[1] <= 0.11500305309891701) {
                                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                }
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[0] <= -0.33072397112846375) {
                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[1] <= 0.13383322209119797) {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.13652324676513672) {
                                                            if (input[1] <= 0.1353703811764717) {
                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.1372918263077736) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.25, 0.75, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            if (input[1] <= 0.14113472402095795) {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[0] <= -0.33072397112846375) {
                                                    if (input[1] <= 0.14228758960962296) {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.14459332823753357) {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 0.1480519250035286) {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            } else {
                if (input[0] <= -0.7038222849369049) {
                    if (input[1] <= 0.38631126284599304) {
                        if (input[1] <= 0.28024743497371674) {
                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        } else {
                            if (input[0] <= -0.8728824853897095) {
                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                            }
                        }
                    } else {
                        if (input[0] <= -1.2018418908119202) {
                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        } else {
                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                        }
                    }
                } else {
                    if (input[1] <= 0.22145117819309235) {
                        if (input[0] <= -0.33405521512031555) {
                            if (input[0] <= -0.34071768820285797) {
                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                            } else {
                                if (input[0] <= -0.33738645911216736) {
                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                } else {
                                    if (input[1] <= 0.15650629252195358) {
                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.1641920804977417) {
                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= 0.1941666379570961) {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.16765067726373672) {
                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                            } else {
                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                            }
                        }
                    } else {
                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                    }
                }
            }
        }
    } else {
        if (input[1] <= -0.5390572249889374) {
            if (input[0] <= 2.0894181728363037) {
                if (input[1] <= -0.8476414978504181) {
                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                } else {
                    if (input[0] <= -0.2257900834083557) {
                        if (input[0] <= -0.3240615129470825) {
                            if (input[1] <= -0.6416624784469604) {
                                if (input[1] <= -0.6516539752483368) {
                                    if (input[1] <= -0.7961467504501343) {
                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.7911509871482849) {
                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                } else {
                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= -0.5659574866294861) {
                                    if (input[1] <= -0.6282123327255249) {
                                        if (input[1] <= -0.6289809048175812) {
                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){0.12121212121212122, 0.8787878787878788, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= -0.5920891463756561) {
                                            if (input[1] <= -0.6070764362812042) {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.6059235632419586) {
                                                    memcpy(var5, (double[]){0.14285714285714285, 0.8571428571428571, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        } else {
                                            if (input[1] <= -0.5909362733364105) {
                                                memcpy(var5, (double[]){0.08695652173913043, 0.9130434782608695, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    if (input[1] <= -0.5651889145374298) {
                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.5540445148944855) {
                                            if (input[1] <= -0.5551973879337311) {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.2857142857142857, 0.7142857142857143, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        } else {
                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                        }
                    } else {
                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            } else {
                if (input[0] <= 2.255979895591736) {
                    if (input[1] <= -0.8545587062835693) {
                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                } else {
                    if (input[1] <= -0.8399556875228882) {
                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                    } else {
                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                    }
                }
            }
        } else {
            if (input[1] <= 0.14997337758541107) {
                if (input[1] <= -0.0875173769891262) {
                    if (input[0] <= -0.22995412349700928) {
                        if (input[1] <= -0.5044711828231812) {
                            if (input[0] <= -0.3240615129470825) {
                                if (input[1] <= -0.5379043519496918) {
                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    if (input[1] <= -0.5298343002796173) {
                                        if (input[1] <= -0.5313714742660522) {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){0.25, 0.0, 0.75}, 3 * sizeof(double));
                                        }
                                    } else {
                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                }
                            } else {
                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                            }
                        } else {
                            if (input[0] <= -0.3240615129470825) {
                                if (input[1] <= -0.3565198481082916) {
                                    if (input[1] <= -0.45220786333084106) {
                                        if (input[1] <= -0.49294252693653107) {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= -0.47564952075481415) {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.46258367598056793) {
                                                    memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    } else {
                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= -0.1978083923459053) {
                                        if (input[1] <= -0.20357272773981094) {
                                            if (input[1] <= -0.26890189945697784) {
                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[1] <= -0.12748345732688904) {
                                            if (input[1] <= -0.17398245632648468) {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= -0.10096750035881996) {
                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[0] <= -0.31989747285842896) {
                                    if (input[1] <= -0.4249233305454254) {
                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.27312907576560974) {
                                            if (input[1] <= -0.331541046500206) {
                                                if (input[1] <= -0.36189989745616913) {
                                                    if (input[1] <= -0.3799614906311035) {
                                                        memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= -0.1901226043701172) {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                if (input[1] <= -0.1463136300444603) {
                                                    memcpy(var5, (double[]){0.8, 0.2, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                } else {
                                    if (input[1] <= -0.2708233445882797) {
                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[0] <= -0.3124021887779236) {
                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= -0.250071719288826) {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 0.5903624892234802) {
                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        } else {
                            if (input[0] <= 0.7569242119789124) {
                                if (input[1] <= -0.49716971814632416) {
                                    if (input[1] <= -0.5029340386390686) {
                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.5010125935077667) {
                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= -0.4994754493236542) {
                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                } else {
                                    memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                }
                            } else {
                                if (input[1] <= -0.535598635673523) {
                                    if (input[1] <= -0.5375200808048248) {
                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[0] <= 0.9234859347343445) {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        }
                                    }
                                } else {
                                    if (input[0] <= 0.9234859347343445) {
                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.5213799178600311) {
                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    }
                } else {
                    if (input[1] <= 0.11884594336152077) {
                        if (input[1] <= -0.007200926309451461) {
                            if (input[1] <= -0.08521164208650589) {
                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                            } else {
                                if (input[1] <= -0.07060865312814713) {
                                    if (input[0] <= -0.3240615129470825) {
                                        memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= -0.06907149404287338) {
                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= -0.06253857724368572) {
                                            if (input[0] <= 0.4329616576433182) {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[0] <= 0.4346272647380829) {
                                                if (input[1] <= -0.030642569065093994) {
                                                    if (input[0] <= -0.3124021887779236) {
                                                        if (input[0] <= -0.31823185086250305) {
                                                            if (input[1] <= -0.05177847854793072) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    if (input[1] <= -0.011428107973188162) {
                                                        if (input[1] <= -0.018729603849351406) {
                                                            if (input[1] <= -0.020266760140657425) {
                                                                if (input[0] <= -0.31656622886657715) {
                                                                    if (input[0] <= -0.3240615129470825) {
                                                                        if (input[1] <= -0.023341073654592037) {
                                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        }
                                                                    } else {
                                                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                    }
                                                                } else {
                                                                    memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[0] <= -0.31823185086250305) {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= -0.015655289869755507) {
                                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                }
                                            } else {
                                                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                            }
                                        }
                                    }
                                }
                            }
                        } else {
                            if (input[1] <= 0.032380866818130016) {
                                if (input[1] <= 0.00740206497721374) {
                                    if (input[0] <= -0.2366165965795517) {
                                        if (input[1] <= 0.0008691479451954365) {
                                            if (input[0] <= -0.31823185086250305) {
                                                memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            if (input[1] <= 0.0050963296089321375) {
                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                            } else {
                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                            }
                                        }
                                    } else {
                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 0.013550692703574896) {
                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        if (input[1] <= 0.01508784992620349) {
                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                        } else {
                                            if (input[1] <= 0.017777875065803528) {
                                                if (input[1] <= 0.015856428537517786) {
                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                if (input[1] <= 0.02315792441368103) {
                                                    if (input[0] <= -0.3240615129470825) {
                                                        memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                }
                                            }
                                        }
                                    }
                                }
                            } else {
                                if (input[1] <= 0.04928959161043167) {
                                    if (input[0] <= 0.1814533919095993) {
                                        memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                    } else {
                                        memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                    }
                                } else {
                                    if (input[1] <= 0.05620679818093777) {
                                        if (input[0] <= 0.1831190139055252) {
                                            if (input[0] <= -0.31989747285842896) {
                                                if (input[0] <= -0.3240615129470825) {
                                                    if (input[1] <= 0.050826748833060265) {
                                                        memcpy(var5, (double[]){0.6, 0.4, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                    }
                                                } else {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                }
                                            } else {
                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                            }
                                        } else {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        }
                                    } else {
                                        if (input[0] <= 1.0267542600631714) {
                                            if (input[0] <= -0.31823185086250305) {
                                                if (input[0] <= -0.3240615129470825) {
                                                    if (input[1] <= 0.06696689501404762) {
                                                        if (input[1] <= 0.06158684566617012) {
                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.10578010976314545) {
                                                            if (input[1] <= 0.0881028063595295) {
                                                                if (input[1] <= 0.08618135750293732) {
                                                                    if (input[1] <= 0.07388410344719887) {
                                                                        memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                    } else {
                                                                        if (input[1] <= 0.08156988769769669) {
                                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                        } else {
                                                                            if (input[1] <= 0.08425991237163544) {
                                                                                memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                            } else {
                                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                                            }
                                                                        }
                                                                    }
                                                                } else {
                                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                                }
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        } else {
                                                            if (input[1] <= 0.10808584466576576) {
                                                                memcpy(var5, (double[]){0.6666666666666666, 0.3333333333333333, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                if (input[1] <= 0.11192873865365982) {
                                                                    memcpy(var5, (double[]){0.4, 0.6, 0.0}, 3 * sizeof(double));
                                                                } else {
                                                                    memcpy(var5, (double[]){0.5, 0.5, 0.0}, 3 * sizeof(double));
                                                                }
                                                            }
                                                        }
                                                    }
                                                } else {
                                                    if (input[1] <= 0.08195417746901512) {
                                                        if (input[1] <= 0.07119407877326012) {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                        }
                                                    } else {
                                                        if (input[1] <= 0.093482855707407) {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            memcpy(var5, (double[]){0.3333333333333333, 0.6666666666666666, 0.0}, 3 * sizeof(double));
                                                        }
                                                    }
                                                }
                                            } else {
                                                if (input[1] <= 0.06158684566617012) {
                                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                } else {
                                                    if (input[0] <= -0.3124021887779236) {
                                                        memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                    } else {
                                                        if (input[1] <= 0.07695841789245605) {
                                                            memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                        } else {
                                                            if (input[0] <= -0.2982444316148758) {
                                                                memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                                            } else {
                                                                memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        } else {
                                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                                        }
                                    }
                                }
                            }
                        }
                    } else {
                        if (input[0] <= 1.028419867157936) {
                            if (input[1] <= 0.14151901006698608) {
                                if (input[1] <= 0.13037462532520294) {
                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){1.0, 0.0, 0.0}, 3 * sizeof(double));
                                }
                            } else {
                                if (input[0] <= -0.31490060687065125) {
                                    memcpy(var5, (double[]){0.0, 1.0, 0.0}, 3 * sizeof(double));
                                } else {
                                    memcpy(var5, (double[]){0.2, 0.8, 0.0}, 3 * sizeof(double));
                                }
                            }
                        } else {
                            memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
                        }
                    }
                }
            } else {
                memcpy(var5, (double[]){0.0, 0.0, 1.0}, 3 * sizeof(double));
            }
        }
    }
    add_vectors(var2, var5, 3, var1);
    mul_vector_number(var1, 0.3333333333333333, 3, var0);
    memcpy(output, var0, 3 * sizeof(double));
}
