#include <bits/stdc++.h>
using namespace std;
int gcditer(int a, int b)
{
    //* T.C. : O(min(a,b));
    // HCF of a,b is <=min(a,b) HCF of prime numbers is 1
    // LCM of a,b is >= max(a,b)
    for (int i = min(a, b); i >= 2; i--)
    {
        if (a % i == 0 && b % i == 0)
            return i;
    }
    return 1;
}
// T.C. (BEST) : O(log(n)) > O(n) > O(n^2)
int gcdeuclid(int a, int b) // a<b
{
    // T.C. : O(log(a+b))
    if (a == 0)//
        return b;
    return gcdeuclid(b % a, a);
}
int main()
{
    // cout << gcditer(27, 45);
    // Euclid's division algorithm

    cout << gcdeuclid(45,23);
}