#include <bits/stdc++.h>
using namespace std;
void print(int n)
{
    if (n == 0) // Base case
        return;
    print(n - 1);     // Call
    cout << n << " "; // Kaam after recursive call of function
    // i.e. Ye kaam least n ki value se start hoga after base condition wali i.e. from n=1 to n
}

void print2(int i, int n) // using extra parameter printing from i to n
{
    if (i > n)
        return;
    cout << i << " ";
    print2(i + 1, n);
}
int main()
{
    print(7);
    cout << "" << endl;
    print2(3, 7);
}