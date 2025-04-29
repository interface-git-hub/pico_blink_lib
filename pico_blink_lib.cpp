#include <Arduino.h>
#include "pico_blink_lib.hpp"

void BlinkInit(void)
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void BlinkLed(int onTime, int offTime)
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(onTime);
    digitalWrite(LED_BUILTIN, LOW);
    delay(offTime);
}
