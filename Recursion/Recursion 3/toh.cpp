#include <bits/stdc++.h>
using namespace std;
void toh(int n, char a, char b, char c) // n, source, helper,destination
{
    if (n == 0)
        return;
    toh(n - 1, a, c, b);
    cout << a << " - > " << c << endl;
    toh(n - 1, b, a, c);
    
}
int main()
{
    int n = 5;
    toh(n, 'A', 'B', 'C');
}