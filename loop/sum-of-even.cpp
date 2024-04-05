#include<iostream>

using namespace std;

int main (){
    int n;
int res=0;
cout << "enter a number : ";
cin >> n;

    for(int i=0; i<=n; i=i+1){
    if(i%2==0)
        res= res+i;
        // i= i+1;
        }
    cout << "sum : " << res << endl;
    return 0;
}