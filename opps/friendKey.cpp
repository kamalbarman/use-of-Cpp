#include<iostream>

using namespace std;

class sample{
	int a,b;

	public:
		void setvalue(int x,int y)
		{
			a =x;
			b =y;
		}
	friend float mean (sample s);
};
	float mean ( sample s)
		{
			return float (s.a+s.b)/2;
		};


int main(){
	sample obj;

	obj.setvalue(10,13);
	
	cout<<"mean value"<<mean(obj);
}
