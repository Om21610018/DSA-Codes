#include <bits/stdc++.h>
using namespace std;

vector<unsigned long long> dp;
vector<unsigned long long> dp2;

//* With DP Top down Approach
unsigned long long fibo(unsigned long long n)
{
    if (n == 0 || n == 1)
        return n;
    //* dp check to identify if problem was solved earlier
    if (dp[n] != -1) // i.e. it is computed
        return dp[n];
    //*Storing answers
    return dp[n] = fibo(n - 1) + fibo(n - 2); // this syntx is also valid and  same as below
    // dp[n] = fibo(n - 1) + fibo(n - 2);
    // return dp[n];
}

//* With DP Bottom Up Approach
unsigned long long fibo2(int n)
{

    dp2.clear();
    dp2.resize(n + 1, -1);
    dp2[0] = 0;
    dp2[1] = 1;
    for (int i = 2; i <= n; i++)
        dp2[i] = dp2[i - 1] + dp2[i - 2];
    return dp2[n];
}

//* Without DP
unsigned long long f(unsigned long long n)
{
    if (n == 0 | n == 1)
        return n;
    return f(n - 1) + f(n - 2);
}

int main()
{
    unsigned long long n = 100;
    dp.clear();
    dp.resize(n + 1, -1); // dp[i]==-1 signifies that ith subproblem is not yet computed
    cout << fibo2(n) << endl;
    cout << dp.size() << endl;
}