#include <bits/stdc++.h>
using namespace std;

int fact(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        cout << n << " = ";
    else
        cout << n << "*";
    return n * fact(n - 1);
}
void factofeach(int n)
{
    if (n == 0)
        return;
    factofeach(n - 1);
    cout << fact(n) << "  , ";
}

int main()
{
    int n;
    cout << "Enter value of n : " << endl;
    cin >> n;
    factofeach(n);
}