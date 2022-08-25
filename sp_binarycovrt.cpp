#include <iostream>
#include <cmath>
using namespace std;

// c=remainderf(23,3);
// c=fmin(3.2,5.6); // find min no. between two nu.

void Binary(int n)
{

    int a[32];

    int i = 0;
    while (n > 0)
    {

        a[i] = n % 2;
        n = n / 2;
        i++;
    }


    for (int j = i - 1; j >= 0; j--)
    {
        cout << "Your Binary result is: " << a[j];
    }
}


int main()
{
    int n;
    cout << "Enter the numbr" << endl;
    cin >> n;
    Binary(n);
    return 0;
}
