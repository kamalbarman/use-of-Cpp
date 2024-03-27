#include<iostream>
#include<string>

using namespace std;

class Employee{
	private:
		int empno;
		char ename[20];
		float basic;
		float hra;
		float da;
	public:
		void  getdata(){
			cout << "enter employee number: ";
			cin >> empno;
			cout<< "enter employee name: ";
			cin >> ename;
			cout << "enter basic , hra , da";
			cin >> basic >> hra >> da;
					
			
		}
	void calcudata(float np){
 			np = basic+hra+da;
			cout << np;
		}
	void dispdata(){
			cout << "employee and name: "<< ename << empno;
		 
	}
};


int main(){
	Employee std;
	std.getdata();
	std.calcudata();
	std.dispdata();
return 0;	
}
