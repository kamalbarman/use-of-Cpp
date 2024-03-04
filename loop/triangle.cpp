#include <iostream>
using namespace std;
int main(){
int n;
cin>>n;
int row =1;
while (row<=n)
{
    // 1st
    int space=n-row;
    while (space)
    {
        cout << " ";
        space--;
    }

    // 2st
    int col=1;
    while (col<=row)
    {
        cout <<col;
        col++;
    }
    // start 
    int start =row -1;
    while (start)
    {
        cout<<start;
        start--;
    }
    
    
    cout<<endl;
    row ++;
}


    return 0;
}