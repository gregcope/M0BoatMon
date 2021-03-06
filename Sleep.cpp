#include <Arduino.h>
#include "Sleep.h"

Sleep::Sleep() {
  // Constructor
}

void Sleep::kip8Secs(void) {
  Serial.println("Sleep ... 8 secs");
  Serial.flush();
  Serial1.flush();
  LowPower.powerDown(SLEEP_8S, ADC_OFF, BOD_OFF);
  Serial.flush();
  Serial1.flush();
}

void Sleep::kip2Secs(void) {
  Serial.println("Sleep ... 2 secs");
  Serial.flush();
  Serial1.flush();
  LowPower.powerDown(SLEEP_2S, ADC_OFF, BOD_OFF);
  Serial.flush();
  Serial1.flush();
}

void Sleep::kip1Sec(void) {
  Serial.println("sleep ... 1sec");
  Serial.flush();
  Serial1.flush();
  LowPower.powerDown(SLEEP_1S, ADC_OFF, BOD_OFF);
  Serial.flush();
  Serial1.flush();
}
