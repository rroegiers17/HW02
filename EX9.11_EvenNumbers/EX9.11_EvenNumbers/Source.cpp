//
//  Rachel Roegiers
//  CS 172-1
//  HW02
//  EX 9.11: Even Numbers
//

#include <iostream>
#include "EvenNumbers.h"
using namespace std;

int main()
{
	EvenNumbers num(16); //test program with value of 16

	cout << "The even number iputed is " << num.getValue() << endl;
	// print out the next even number
	cout << "The next even number is " << num.getNext() << endl;
	// print out the previous even number
	cout << "The previous even number is " << num.getPrevious() << endl;

	return 0;

}
