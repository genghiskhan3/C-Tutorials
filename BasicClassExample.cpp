#include <string>;
using namespace std;

class Person{

public:
	Person(string name, int age);
	string getName();
	int getAge();


private:
	string name;
	int age;

};

Person::Person(string name, int age){
	this->name = name;
	this->age = age;
}

string Person::getName(){
	return this->name;
}
	
int Person::getAge(){
	return this->age;
}



*************************************************************************
Split into two seperate files
*************************************************************************

#include <iostream>
#include "Person.h"
using namespace std;

int main(){
	Person p("Matthew", 19);

	cout << "My name is " << p.getName() << endl;
	cout << "I am " << p.getAge() << " years old" << endl;

	return 0;
}
