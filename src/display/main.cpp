#include "main.h"
#include <lvgl.h>

Controller controller;

void setup() {
    Serial.begin(115200);
    pinMode(LED_BUILTIN, OUTPUT); // Initialize the built-in LED
    digitalWrite(LED_BUILTIN, LOW); // Turn off the LED initially
    controller.setup();
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH); // Turn on the LED if this spot is reached
    delay(500); // Delay to visualize the LED state change
    digitalWrite(LED_BUILTIN, LOW); // Turn off the LED

    controller.loop();
    
    digitalWrite(LED_BUILTIN, controller.isActive() ? HIGH : LOW); // Turn on the LED if the controller is active
    delay(2);
}
