#ifndef Valve
#define Valve

#include "Arduino.h"

#define OPEN LOW
#define CLOSE HIGH

#define AUTOMATIC true
#define MANUAL false

struct valveTimer {
  int min_on = 360;
  int min_off = 420;  
};

class MyValve
{
	public:
		MyValve(int pin);
		
		bool getState();
		void setState(bool state);
		
		bool getMode();
		void setMode(bool mode);
	
		valveTimer timer;
	
	private:
		int _pin;		//wich pin is the valve attached to
		bool _state	= CLOSE;	//wich state has the pin / valve
		bool _mode = MANUAL;
	
};



#endif
