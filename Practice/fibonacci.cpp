#include <bits/stdc++.h>
using namespace std;

int fib(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int a=fib(n-1);
    int b=fib(n-2);
    return a+b;
}
int main()
{
    int n;
    cin >> n;
    cout << fib(n);
}