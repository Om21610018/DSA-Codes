//* Maximums sum subarray of size k
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {7, 1, 2, 5, 8, 4, 9, 3, 6};
    int n = arr.size();
    int k = 4;
    int maxSum = INT_MIN;
    int maxIdx = -1;
    int prevSum = 0;
    for (int i = 0; i < k; i++)
    {
        prevSum += arr[i];
    }
    maxSum = prevSum;

    // Sliding window
    int i = 1;
    int j = k;

    while (j < n)
    {
        int currSum = prevSum + arr[j] - arr[i - 1];
        if (maxSum < currSum)
        {
            maxSum = currSum;
            maxIdx = i;
        }
        prevSum = currSum;
        i++;
        j++;
    }

    cout << maxSum << " " << maxIdx;
}