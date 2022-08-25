#include <iostream>
using namespace std;

int fibo(int a)
{
    if (a <= 2)
    {
        return 1;
    }

    return fibo(a - 2) + fibo(a - 1);
};



int main()
{
    int x, y;
    cout << "Enter the number" << endl;
    cin >> x;
    cout<<endl;
    cout << fibo(x) << endl;
    for (int i = 1; i <= x; i++)
    {
        cout << fibo(i) << endl;
    }

    return 0;
}