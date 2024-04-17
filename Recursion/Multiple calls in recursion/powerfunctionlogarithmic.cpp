#include <bits/stdc++.h>
using namespace std;
/*
*Method - 1 :
pow(a,b) = a*pow(a,b-1);      T.C = O(b)
                              S.C = O(b)


*Method - 2 :
pow(a,b)= pow(a,b/2)*pow(a,b/2);   T.C. : O(log(n))

*/
int pow(int a, int b)
{
    if (b == 0)
        return 1;
    return a * pow(a, b - 1);
}

int powlog(int a, int b)
{
    if (b == 1)
        return a;
    int ans = powlog(a, b / 2);
    return ans * ans;
}

int powlogmodi(int a, int b)
{
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    if (b % 2 == 1)
    {
        int ans = powlogmodi(a, b / 2);
        return (ans * ans * a);
    }

    int ans = powlogmodi(a, b / 2);
    return ans * ans;
}
int main()
{
    cout << powlogmodi(2,6);
}