//* Grumpy Bookstore owner
#include <bits/stdc++.h>
using namespace std;
int maxSat(vector<int> &arr, vector<int> &gru, int k)
{
    int n = arr.size();
    int preLoss = 0;
    int maxLoss = 0;
    for (int i = 0; i < k; i++)
    {
        if (gru[i] == 1)
            preLoss += arr[i];
    }
    maxLoss = preLoss;
    int maxIdx = 0;
    int i = 1;
    int j = k;
    while (j < n)
    {
        int currLoss = preLoss;
        if (gru[j] == 1)
            currLoss += arr[j];
        if (gru[i - 1] == 1)
            currLoss -= arr[i - 1];

        if (currLoss > maxLoss)
        {
            maxLoss = currLoss;
            maxIdx = i;
        }
        preLoss = currLoss;
        i++;
        j++;
    }

    for (int i = maxIdx; i < maxIdx + k; i++)
    {
        gru[i] = 0;
    }
    int maxSat = 0;
    for (int i = 0; i < n; i++)
    {
        if (gru[i] == 0)
            maxSat += arr[i];
    }
    return maxSat;
}
int main()
{
    vector<int> arr = {1, 0, 1, 2, 1, 1, 7, 5};
    vector<int> gru = {0, 1, 0, 1, 0, 1, 0, 1};
    int k = 3;
    cout << maxSat(arr, gru, k);
}