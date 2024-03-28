#include<iostream>


using namespace std;

class Employee{
	private:
		int empno;
		char ename[20];
		float basic,hra,da;
	public:
		void  getdata(){
			cout << "enter employee number: ";
			cin >> empno;

			cout<< "enter employee name: ";
			cin >> ename;

			cout << "enter basic pay ";
			cin>>basic;

			cout << "enter hra ";
			cin >>  hra;

			cout << "enter da ";
			cin >> da;
					
			
		}
	float calcudata(){
 			return basic + hra + da;
		}
	void dispdata(){
			cout << "employee number" << empno << endl;
			cout << "employee name "<< empno<<endl;
			cout << "basic pay "<< basic<<endl;
			cout << "hra "<< hra<<endl;
			cout << "da "<<da<< endl;
			cout << "net pay"<<calcudata()<<endl;
		 
	}
};


int main(){
	Employee std;
	std.getdata();
	std.dispdata();
return 0;	
}
