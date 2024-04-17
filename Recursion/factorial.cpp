#include <bits/stdc++.h>
using namespace std;
long long fact(long long n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        cout << n << " = ";
    else
        cout << n << " * ";
    return n * fact(n - 1);
}
int main()
{
    long long n;
    cout << "Enter the value of N : " << endl;
    cin >> n;
    long long res = fact(n);
    cout << res;
}