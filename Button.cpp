#include "Button.h"
Button::Button(bool status){
	this -> status = status;
}
/*void Button::setCircuit(Circuit &circuit){
	this -> circuit = &circuit;
}*/
void Button::turnOn(){
	this -> status = true;
}
void Button::turnOff(){
	this -> status = false;
}
bool Button::getStatus(){
	return status;
}