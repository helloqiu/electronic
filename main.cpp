#include <iostream>
#include "element.h"
#include "Fan.h"
#include "Lamp.h"
#include "Circuit.h"
#include "Button.h"
using namespace std;
int main(void){
	Circuit circuit;
	Fan fan;
	Lamp lamp;
	Button button(false);

	circuit.setSwitch(button);

	circuit.append(fan);
	circuit.append(lamp);
	
	circuit.turnOn(button);
	circuit.showAll();

	circuit.turnOff(button);
	circuit.showAll();

	return 0;
}