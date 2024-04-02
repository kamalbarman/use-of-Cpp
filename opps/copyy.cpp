#include <iostream>
using namespace std;

class rectangle
{
	int length;
	int breadth;

public:
	rectangle()
	{
		cout << "constructor with zero parameter called \n";
		length = breadth = 0;
	}

	rectangle(int l)
	{
		cout << "constructor with one parameter called:\n";
		length = breadth = l;
	}

	rectangle(int l, int b)
	{
		cout << "constructor with two parameter called:\n";
		length = l;
		breadth = b;
	}

	int area()
	{
		return (length * breadth);
	}
};

int main()
{

	rectangle r1;
	rectangle r2(5);
	rectangle r3(7, 5);
	cout << "\n area of first rectangle = " << r1.area();
	cout << "\n area of second rectangle = " << r2.area();
	cout << "\n area of third rectangle = " << r3.area();

	return 0;
}
