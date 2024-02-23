#include<iostream>
using namespace std;

int main(){
int n,i=0;
int sum=0;
cout << "enter a number"<< endl;
cin>>n;

while ( i <= n)
{
    sum = sum + i;
    i++;
}
cout << "sum is =" <<sum << endl;
}