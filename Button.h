#ifndef BUTTON_H
#define BUTTON_H
// #include "Circuit.h"
class Button{
	public:
		// friend class Circuit;
		Button(bool status);
		void turnOn();
		void turnOff();
		bool getStatus();
		// void setCircuit(Circuit &circuit);
	private:
		bool status;
		// Circuit *circuit;
};
#endif