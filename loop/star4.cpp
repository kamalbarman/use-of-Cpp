#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "enter a number : ";
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        int j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        // mid star print

        int star = n - j + i;

        while (star <= n)
        {
            cout << "*";
            star++;
        }
        // last triangle
        int k = 1;
        while (k <= i)
        {
            cout << k;
            k++;
        }
        i++;
        cout << endl;
    }
}