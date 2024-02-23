#include<iostream>

using namespace std;

int main (){
    int n,i;

    cout << "enter a number : " << endl;
    cin >>n;
for( i =0; i<n; i++){
        if(i%2!=0){
            cout << " is a prime number"<<i<< endl;;
        }else{
            cout<< "not an prime number"<<i<< endl;;
        }
}
}