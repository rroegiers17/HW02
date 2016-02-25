//  
//  Rachel Roegiers
//  CS 172-1
//  HW 02
//  EX 01: The Fan Class (9.2)
//


#include <iostream>
#include <string>
#include "Fan.h"
using namespace std;

int main()
{
	// properties of the first fan
	cout << "The properties of the First fan: " << endl;
	Fan fan;
	// setting the fan properties
	fan.setSpeed(3);
	fan.setRadius(10);
	fan.setOn(true);

	// Displaying the first fan properties
	cout << "Speed = " << fan.getSpeed() << endl;
	cout << "Radius = " << fan.getRadius() << endl;
	cout << "On or Off? (1 means on. 0 means off) = " << fan.getOn() << endl;
	cout << endl;

	// properties of the second fan
	cout << "The Properties of the second fan: " << endl;

	// setting the properties for second fan
	Fan fan1;
	fan1.setSpeed(2);
	fan1.setRadius(5);
	fan1.setOn(false);

	// Displaying the second fan properties
	cout << "Speed = " << fan1.getSpeed() << endl;
	cout << "Radius = " << fan1.getRadius() << endl;
	cout << "On or Off? (1 means on. 0 means off) = " << fan1.getOn() << endl;
	cout << endl;


	return 0;
}