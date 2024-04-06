#include<iostream>

using namespace std;

class student
{
	int roll;
	string name;

	public:
		student(){
			cout << "default constructor  invoked";
		}
		void display(){
			cout <<"\nhello"<<endl;	
		}
};
int main(){
	student std;
	std.display();
	return 0;
}

