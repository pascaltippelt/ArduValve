//Valve-Example

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
