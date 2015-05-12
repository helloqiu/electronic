#ifndef CIRCUIT_H
#define CIRCUIT_H
#include <vector>
#include "element.h"
#include "Button.h"
#include <iostream>
using namespace std;

class Circuit{
	public:
		Circuit();
		void setSwitch(Button &button);
		void turnOff(Button &button);
		void turnOn(Button &button);
		void checkCircuit();
		void append(Element &element);
		void showAll();
	private:
		vector<Element *> v;
		int num;
		Button *button;
};
#endif