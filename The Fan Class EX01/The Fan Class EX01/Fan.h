#define Fan_h

class Fan
{
private:
	int speed;
	bool on;
	double radius;
public:
	Fan() // default constructor
	{
		speed = 1;
		on = false;
		radius = 5;
	}
	int getSpeed()
	{
		return speed;
	}// should be 1,2, 3
	void setSpeed(int speed) // setting the speed of the fan
	{
		speed = speed;
	}
	bool getOn()//specifies whether the fan is on or off
	{
		return on;
	}
	void setOn(bool torF) // setting the fan on or off
	{
		on = torF;
	}
	double getRadius() // the radius of the fan is retrieved here
	{
		return radius;
	}

	void setRadius(double radius)// setting thr radius of the fan
	{
		radius = radius;
	}

};