#include <bits/stdc++.h>
using namespace std;

float squareroot(int x)
{
    int low = 0;
    int high = x;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        long long m = (long long)mid * mid;
        long long y = (long long)x;
        if (m == y)
            return mid;
        else if (m > y)
            high = mid - 1;
        else if (m < y)
            low = mid + 1;
    }
    return high;
}
int main()
{
    int num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "Square root of " << num << " is : " << squareroot(num);
}