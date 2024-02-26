#include <iostream>
using namespace std;

// a b c 
// b c d
// c d e
//this is the pattern

//formula 'A'+i+j-2

int main(){
    int n ;
     cin >> n;
    int i =1;
     while (i<=n)
     {
        int j = 1;
       while (j<=n)
       {
        char ch ='A'+i+j-2;
        cout<<ch<<" ";
        j++;

       }
       cout << endl;
       i++;
     }
} 