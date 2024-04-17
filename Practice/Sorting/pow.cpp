#include <bits/stdc++.h>
using namespace std;

int power(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    return a * power(a, b - 1);
}

int powermodi(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    int num = powermodi(a, b - 1);
    if (b % 2 == 0)
    {
        return num * num;
    }
    else
    {
        int num = powermodi(a, b - 1);
        return num * num * a;
    }
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << powermodi(a, b);
}