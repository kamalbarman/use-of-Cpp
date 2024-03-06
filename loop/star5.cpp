#include <iostream>
using namespace std;

int main(){
    int n=5;
    int i =0;
  while (i < n) {
        int j = 0;
        while (j < n - i) {
            cout << j + 1;
            j++;
        }
        j = 0;
        while (j < 2 * i) {
            cout << "*";
            j++;
        }
        j = n - i;
        while (j > 0) {
            cout << j;
            j--;
        }
        cout<<endl;
        i++;
    }
}