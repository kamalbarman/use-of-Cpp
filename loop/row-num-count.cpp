#include <iostream>
using namespace std;

int main()
{
    int n;
    int i = 1;
    cout << "enter a number: ";
    cin >> n;

    while (i <= n)
    {
        int j = 1;
        while (j <= i)
        {
            cout <<i-j+1<<" ";
            j++;
        }
        cout<<endl;
        i++;
    }
}
