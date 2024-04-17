#include <bits/stdc++.h>
using namespace std;

int product(int a, int b)
{
    return a * b;
}
int main()
{

    // cout<<product(2,4);

    int x = product(2, 4);
    cout << x;

    int a = 4;
    int b = 5;
    int c = 7;
    int ans = max(max(a, b), c);
    cout << ans;
}