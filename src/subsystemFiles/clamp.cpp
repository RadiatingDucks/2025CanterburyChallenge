#include "main.h"

bool State = false;

void toggleClamp() {
    static bool lastButtonState = false;
    bool currentButtonState = Cotton_candy.get_digital(pros::E_CONTROLLER_DIGITAL_X);

    if (currentButtonState && !lastButtonState) {
        State = !State;
        clamp.set_value(State);
    }

    lastButtonState = currentButtonState;

    pros::delay(10);
}