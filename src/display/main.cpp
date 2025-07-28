#include "main.h"
#include <lvgl.h>

Controller controller;

void setup() {
    Serial.begin(115200);

    pinMode(LED_BUILTIN, OUTPUT); // Initialize the built-in LED
    digitalWrite(LED_BUILTIN, LOW); // Turn off the LED initially
    Serial.println(F("main.cpp passed"));

    controller.setup();
    Serial.println(F("Controller setup passed"));
}

void loop() {
    digitalWrite(LED_BUILTIN, HIGH); // Turn on the LED if this spot is reached
    delay(1000); // Delay to visualize the LED state change
    digitalWrite(LED_BUILTIN, LOW); // Turn off the LED
    delay(1000); // Delay to visualize the LED state change
    Serial.println(F("main.cpp loop entered"));

    controller.loop();
    
    digitalWrite(LED_BUILTIN, controller.isActive() ? HIGH : LOW); // Turn on the LED if the controller is active
    delay(2);
    Serial.println(F("main.cpp loop completed"));
}
