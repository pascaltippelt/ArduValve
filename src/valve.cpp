#include "Arduino.h"
#include "valve.h"

Valve::Valve(int pin)
{
	_pin = pin;
	pinMode(_pin, OUTPUT);
	setMode(CLOSE);
}

bool Valve::getState() {
	return _state;
}

void Valve::setState(bool state) {
	_state = state;
	digitalWrite(_pin, _state);
}

bool Valve::getMode() {
	return _mode;
}

void Valve::setMode(bool mode) {
	_mode = mode;
	setState(CLOSE);
}
