//
//  Rachel Roegiers
//  CS 172-1
//  HW02
//  9.6: Algebra-quadratice equations
//

#include <iostream>
#include <string>
#include "QuadraticEquation.h"
#include <cmath>
using namespace std;

int main()
{
	// declaring variables
	double a, b, c;
	double discriminant;
	// getting the values of a, b, c
	cout << "Enter the values of a, b, and c: ";
	cin >> a >> b >> c;

	// use header file to compute the quadratic equation
	QuadraticEquation Quad(a, b, c);
	discriminant = Quad.getDiscriminant();
	// if discriminent is less than zer you display no root

	if (discriminant < 0)
	{
		cout << "The equation has no roots. " << endl;
	}
	else if (discriminant == 0)
	{
		cout << "The root is " << Quad.getRoot1() << endl;
	}
	else // (dicriminant >=0)
	{
		cout << "The roots are " << Quad.getRoot1() << " and " << Quad.getRoot2() << endl;
	}

	return 0;

}
