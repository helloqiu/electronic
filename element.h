#ifndef ELEMENT_H
#define ELEMENT_H
#include <string>
#include <iostream>
using namespace std;
class Element{
	public:
		// virtual Element(){};
		/*virtual void turnOff(){
			this -> setStatus(false);
		};
		virtual void turnOn(){
			this -> setStatus(true);
		};*/
		void setStatus(bool status){
			this -> status = status;
		};
		void setName(string name){
			this -> name = name;
		};
		string getName(){
			return this -> name;
		};
		bool getStatus(){
			return status;
		};
		string getWay(){
			return work_way;
		};
		void setWorkWay(string work_way){
			this -> work_way = work_way;
		};
	private:
		string name;
		bool status;
		string work_way;
};
#endif