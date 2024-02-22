#include<iostream>

using namespace std;

int m = 40; 

int main(){
	int m = 30;{
		int k = m;
		int m = 20;
	
	cout << "we are in inner block" << endl ;
	cout << "k = " << k << endl;
	cout << "m = " << m << endl;
	cout << "::m = " << ::m << endl;

	}
	
	cout << "we are in outer block" << endl;
	cout << " m = " << m << endl;
	cout << "::m" << ::m << endl;

}	
