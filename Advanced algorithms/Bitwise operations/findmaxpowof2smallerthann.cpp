#include <bits/stdc++.h>
using namespace std;
int max_power_2_lessthan_n(int num)
{ // T.C. = O(no. of set bits in num);
    int cnt = 0;
    int temp = 0;
    while (num)
    {
        cnt++;
        temp = num;
        num = (num & (num - 1));
    }
    return temp;
}

int max_power_2_greaterthan_n(int num)
{
    return (max_power_2_lessthan_n(num) << 1);
}

int main()
{
    cout << max_power_2_lessthan_n(150);
    cout << "" << endl;
    cout << max_power_2_greaterthan_n(150);
}