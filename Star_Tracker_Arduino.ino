////////// LIBRARIES //////////

#include <Stepper.h>

////////// CONSTANTS ///////////

// Angular velocity of the Earth and the target angular velocity of the tracker
const float _angularVelocity = 15.041068;

// Number of teeth on the gears
const int _motorTeeth = 20;
const int _gearTeeth = 80;

// Distance between the pivot and the threaded rod
const int radius = 215;

const int _motorPins[4] = {2, 3, 4, 5};
const int _steps = 4096;

////////// VARIABLES //////////

float rpm;
Stepper stepper(_steps, _motorPins[0], _motorPins[1], _motorPins[2], _motorPins[3]);

////////// FUNCTIONS //////////

// For information on this equation, go to https://github.com/aLonelySquidNamedBob/Star_Tracker_Arduino
float RotationsPerMinute(int radius, float earthRotation, int motorTeeth, int gearTeeth) {
    return (PI * radius * earthRotation * (gearTeeth / motorTeeth)) / 10800;
}

////////// SETUP AND LOOP //////////

void setup() {
    rpm = RotationsPerMinute(radius, _angularVelocity, _motorTeeth, _gearTeeth);
    stepper.setSpeed(rpm);
    // Initialize all pins to LOW
    for (int i = 0; i < 4; i++) {
        digitalWrite(_motorPins[i], LOW);
    }
}

void loop() {
    // Step forever
    stepper.step(_steps);
}
