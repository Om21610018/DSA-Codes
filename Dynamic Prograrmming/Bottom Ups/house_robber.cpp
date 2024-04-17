#include <bits/stdc++.h>
using namespace std;

// int dp[20000];
// int f(vector<int>&arr , int i){

// 	if(i==arr.size()-1)return arr[arr.size()-1];
// 	if(i==arr.size()-2)return max(arr[arr.size()-2],arr[arr.size()-1]);
// 	if(dp[i]!=-1)return dp[i];
// 	return dp[i]=max({arr[i]+f(arr,i+2),f(arr,i+1)});
// }

int maxMoneyLooted(vector<int> &houses, int n)
{
    if (n == 1)
        return houses[0];
    // memset(dp,-1,sizeof dp);
    // return f(houses,0);
    vector<int> dp(n + 1, 0);
    dp[n - 1] = houses[n - 1];
    dp[n - 2] = max(houses[n - 1], houses[n - 2]);
    for (int i = n - 3; i >= 0; i--)
        dp[i] = max(dp[i + 2] + houses[i], dp[i + 1]);
    return dp[0];
}