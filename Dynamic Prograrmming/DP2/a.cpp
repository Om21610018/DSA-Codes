#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long long int num)
{
    long long int sqrtNum = sqrt(num);
    return sqrtNum * sqrtNum == num;
}
int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long long int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int t;
            cin >> t;
            sum += t;
        }
        if (isPerfectSquare(sum))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}