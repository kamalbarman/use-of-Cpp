#include<iostream>
#include<math.h>
using namespace std;
int main(){
int binaryNum,remainder,decimalNumber;
int base=1;
cout << "enter a binary number : ";
cin >> binaryNum;
while (binaryNum>0)
{
    
   remainder=binaryNum%10; 
   decimalNumber=decimalNumber+remainder*base;
   binaryNum=binaryNum/10;
   base=base*2;


}
cout<<"desi"<<decimalNumber;
return 0;
}

