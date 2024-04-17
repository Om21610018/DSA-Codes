#include <bits/stdc++.h>
using namespace std;
int count_set_bits(int num)
{
    // return __builtin_popcount(num); works on Brian Krniglen's Algorithm
    int cnt = 0;
    while (num)
    {
        if (num & 1 == 1) // num%2==1
            cnt++;
        num >>= 1; // num/=2;
    }
    return cnt;
}

int count_set_bits_2(int num)
{ // T.C. = O(no. of set bits in num);
    int cnt = 0;
    while (num)
    {
        cnt++;
        num = (num & (num - 1));
    }
    return cnt;
}

int main()
{
    cout << count_set_bits_2(1055450);
}