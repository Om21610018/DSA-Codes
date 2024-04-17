#include <bits/stdc++.h>
using namespace std;

/*
Either 1 step or 2 steps and their combinations

so find the no. of ways to reach to nth stair
*/
// int stair(int n)
// {
//     if (n == 2)
//         return 2;
//     if (n == 1)
//         return 1;
//     return stair(n - 1) + stair(n - 2);
// }

int stair(int n)
{
    if (n == 1)
        return 1;
    if (n == 2)
        return 2;
    if (n == 3)
        return 4;
    return stair(n - 1) + stair(n - 2) + stair(n - 3);
}
int main()
{
    cout << stair(5);
}