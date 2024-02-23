#include<iostream>
using namespace std;
int main(){
    char ch;
cout << "enter somthing"<<endl;
cin>>ch;

    if (ch >='A' && ch <='Z')
    {
       cout << "this is upparcase" << endl;
    }else if (ch>='a' && ch<= 'z')
    {
        cout << "this is lower case" << endl;
    }else if (ch>='0' && ch<='9')
    {
        cout <<"this is a digit"<< endl;
    }
    return 0;
    
        
}