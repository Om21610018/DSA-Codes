#include <bits/stdc++.h>
using namespace std;

//*Defining Custom comparator
bool cmp(pair<int, int> &p1, pair<int, int> &p2)
{
    // pair<int , int> first-> value  second->weight
    double r1 = (p1.first * 1.0) / p1.second;
    double r2 = (p2.first * 1.0) / p2.second;

    // jo true hoga woh pick ho jayega
    return r1 > r2;
}

double fractionalKnapsack(vector<int> &profit, vector<int> &weights, int n, int W)
{
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++)
        arr.push_back({profit[i], weights[i]});
    sort(arr.begin(), arr.end(), cmp);
    double profitt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].second <= W)
        {
            profitt += arr[i].first;
            W -= arr[i].second;
        }
        else
        {
            profitt += (((arr[i].first * 1.0) / arr[i].second) * W);
            W = 0;
            break;
        }
    }
    return profitt;
}

int main()
{
    vector<int> profit = {60, 100, 120};
    vector<int> weights = {10, 20, 30};
    int W = 50;
    int n = 3;
    cout << fractionalKnapsack(profit, weights, n, W) << endl;
}