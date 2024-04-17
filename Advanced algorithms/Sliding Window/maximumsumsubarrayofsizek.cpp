//* Maximums sum subarray of size k
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = arr.size();
    int k = 2;
    int maxSum = INT_MIN;
    int maxidx = -1;
    for (int i = 0; i <= n - k; i++)
    {
        int sum = 0;
        for (int j = i; j <= i + k - 1; j++)
        {
            sum += arr[j];
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            maxidx = i;
        }
        // maxSum = max(sum, maxSum);
    }
    cout << maxSum << " " << maxidx;
}