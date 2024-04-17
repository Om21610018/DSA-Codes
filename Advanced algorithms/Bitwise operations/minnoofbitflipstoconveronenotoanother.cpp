#include <bits/stdc++.h>
using namespace std;
int no_of_flips_to_convert(int n1, int n2)
{
    int res = n1 ^ n2;
    return __builtin_popcount(res);
}
int main()
{
    int n1 = 23;
    int n2 = 32;
    cout << no_of_flips_to_convert(n1, n2);
    
}