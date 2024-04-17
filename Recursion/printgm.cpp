#include <bits/stdc++.h>
using namespace std;
void greet(int n)
{
    if (n == 0)
        return;
    cout << "Good Morning" << endl;
    greet(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of N : " << endl;
    cin >> n;
    greet(n);
}