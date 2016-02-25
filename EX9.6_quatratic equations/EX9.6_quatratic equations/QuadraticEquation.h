#ifndef QuadraticEquation_h
#define QuadraticEquation_h
#include <cmath>


class QuadraticEquation
{
private:
	double a;
	double b;
	double c;

public:
	QuadraticEquation(double a1, double b1, double c1) {
		a = a1;
		b = b1;
		c = c1;
	} // constuctor for the arguments a, b, and c
													 // the three get functions for a, b, and c
	double getA()
	{
		return a;
	}
	double getB()
	{
		return b;
	}
	double getC()
	{
		return c;
	}
	//get discriminant function that does b(squared) - 4ac
	double getDiscriminant()
	{
		return b * b - 4 * a * c;
	}
	//function for get root 1 and 2

	double getRoot1()
	{
		if (getDiscriminant() < 0)
			return 0;
		else {
			return (-b + sqrt(getDiscriminant())) / (2 * a);
		}
	}
	double getRoot2()
	{
		if (getDiscriminant() < 0)
			return 0;
		else {
			return (-b - sqrt(getDiscriminant())) / (2 * a);
		}
	}

};

#endif