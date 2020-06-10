#include "Arduino.h"
#include "valve.h"

MyValve::MyValve(int pin)
{
	_pin = pin;
	pinMode(_pin, OUTPUT);
	setMode(CLOSE);
}

bool MyValve::getState() {
	return _state;
}

void MyValve::setState(bool state) {
	_state = state;
	digitalWrite(_pin, _state);
}

bool MyValve::getMode() {
	return _mode;
}

void MyValve::setMode(bool mode) {
	_mode = mode;
	setState(CLOSE);
}
