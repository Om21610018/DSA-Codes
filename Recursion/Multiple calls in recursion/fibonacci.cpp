#include <bits/stdc++.h>
using namespace std;

/*

Fibonacci series : 1 1 2 3 5 8 13 21 34 55 89 . . .

T11 = T10+T9

T(nth) = T(n-1)+T(n-2);

fibo(n) = fibo(n-1) + fibo(n-2)

//*Multiple calls :

*/

int fibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int res = fibo(n - 1) + fibo(n - 2);
    return res;
}

int actfibo(int n)
{
    if (n == 1 || n == 2)
        return 1;
    int left = fibo(n - 1);
    int right = fibo(n - 2);
    int sum = left + right;
    return sum;
}
int main()
{
    int n;
    cout << "Enter the nth term of fibonacci series  : " << endl;
    cin >> n;
    cout << actfibo(n);
}
