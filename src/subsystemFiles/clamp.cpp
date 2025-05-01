#include "main.h"

bool clampState = false;

void toggleClamp() {
    static bool lastButtonState = false;
    bool currentButtonState = Cotton_candy.get_digital(pros::E_CONTROLLER_DIGITAL_X);

    if (currentButtonState && !lastButtonState) {
        clampState = !clampState;
        clamp.set_value(clampState);
    }

    lastButtonState = currentButtonState;

    pros::delay(10);
}