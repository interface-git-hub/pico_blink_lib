#include <Arduino.h>
#include "pico_blink_lib.hpp"

void BlinkInit(void)
{
    pinMode(LED_BUILTIN, OUTPUT);
}

void BlinkLed(void)
{
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(200);
}
