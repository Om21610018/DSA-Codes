#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void fillSieve(vector<bool> &sieve)
    {
        int n = sieve.size() - 1;
        for (int i = 2; i <= sqrt(n); i++)
        { // T.C. O(n)
            for (int j = i * 2; j <= n; j += i)
                sieve[j] = 0;
        }
    }
    int countPrimes(int n)
    {
        if (n <= 2)
            return 0;
        n--;
        int cnt = 0;
        vector<bool> sieve(n + 1, 1); // 1 means prime, 0 means non prime
        fillSieve(sieve);
        sieve[0] = 0;
        sieve[1] = 0;
        for (int i = 2; i <= n; i++)
            if (sieve[i] == 1)
                cnt++;

        return cnt;
    }
};