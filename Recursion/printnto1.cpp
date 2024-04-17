#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n == 0) // Base case
        return;
    cout << n << " "; // kaam before recursive call of function i.e. value of n to after value of n after base condition n=1
    print(n - 1);     // Call
}
int main()
{
    print(7);
}