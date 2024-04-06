#include <iostream>
using namespace std;

int main(){
    int n;
    int i=1;
    cout<<"enter a number : ";
    cin>>n;
    while (i<=n)
    {
    int count=i;
        int j = 1;
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
            
        }
        i++;
        cout<<endl;
    }
    
}