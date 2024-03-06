#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a number : ";
    cin>>n;

    int a=0,b=1,sum=0;
    cout<<a<<" ";
    cout<<b<<" ";


    for (int i = 1; i <=n; i++)
    {
        sum=a+b;
        cout<<sum<<" ";
        a=b;
        b=sum;
    }
    

    return 0;
}