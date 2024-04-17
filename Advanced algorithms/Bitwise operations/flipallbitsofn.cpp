#include <bits/stdc++.h>
using namespace std;

int flip(int num)
{
    int t = num;
    int temp = 0;
    while (t)
    {
        temp = t;
        t = t & t - 1;
    }
    temp <<= 1;
    temp--;
    return (temp ^ num);
}

string dectobin(int n)
{
    string res = "";
    while (n)
    {
        res.push_back((n % 2) + '0');
        n >>= 1;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    cout << dectobin(7);
    int n = flip(7);
    cout << "" << endl;
    cout << dectobin(n);
}