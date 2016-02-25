
#define Even_Numbers_h

class EvenNumbers
{
private:
	int value;
public:
	EvenNumbers() // no-arg consturctor that puts value to o.
	{
		value = 0;
	}
	EvenNumbers(int n) // constructs evenNumber to a specified value
	{
		value = n;
	}
	int getValue()// return int value for the object.
	{
		return value;
	}
	int getNext() // function for next even number
	{
		return value + 2;
	}
	int getPrevious() // funcion for previous even number
	{
		return value - 2;
	}
};