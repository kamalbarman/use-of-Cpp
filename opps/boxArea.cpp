#include<iostream>

using namespace std;

class Box
{
	int length, breadth;
	
	public:
		void getValue()
		{
		cout<<"enter length and breadth of a box: ";
		cin>>length>>breadth;
		}
		
		friend void calArea(Box);
};

void calArea(Box ob)
{
	int area;
	area = ob.length * ob.breadth;
	cout<<"\nArea is "<<area;
}

 int main()
{
	Box obj;
	obj.getValue();
	calArea(obj);
	return 0;
}
