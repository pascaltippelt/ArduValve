# ArduValve
Arduino library to control electromagnetic valves, for example in the garden.

```c++
#include <valve.h>

Valve v = Valve(D4);

void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:
  v.setState(CLOSE);
  delay(1000);
  v.setState(OPEN);
  delay(5000);
}
```
Methods:

```c++
Valve(int pin);             //declare a new valve.
bool getState();            //get the state of the valve (OPEN / CLOSE)
void setState(bool state);  //set the state of the valve
bool getMode();             //get the mode of the valve (AUTOMATIC / MANUAL)
void setMode(bool mode);    //set the mode of the valve
```
