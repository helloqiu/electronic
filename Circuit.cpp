#include "Circuit.h"
Circuit::Circuit(){
	num = 0;
}
void Circuit::setSwitch(Button &button){
	this -> button = &button;
}
void Circuit::append(Element &element){
	v.push_back(&element);
	num += 1;
}
void Circuit::checkCircuit(){
	bool tmp = this -> button -> getStatus();
	for (int i = 0 ; i < num ; i ++){
		v.at(i) -> setStatus(tmp);
	}
}
void Circuit::showAll(){
	cout << "Let's show status ^_^" << endl;
	bool tmp;
	string tstr;
	for (int i = 0 ; i < num ; i ++){
		tmp = v.at(i) -> getStatus();
		if (tmp){
			tstr = " is ";
		}else{
			tstr = " isn't ";
		}
		cout << v.at(i) -> getName() << tstr << v.at(i) -> getWay() << endl;
	}
	cout << endl;
}
void Circuit::turnOn(Button &button){
	button.turnOn();
	this -> checkCircuit();
}
void Circuit::turnOff(Button &button){
	button.turnOff();
	this -> checkCircuit();
}
