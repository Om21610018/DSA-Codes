#include <bits/stdc++.h>
using namespace std;

/*

60  =   1,2,3,4,5,6,    10,12,15,20,30,60

factors of 60 :
1,60
2,30
3,20
4,15
5,12
6,10






*/

void printFactors(int n)
{
    //* This function takes O(n) Time
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
            cout << i << " ";
    }
}

void printFactors_modified(int n)
{
    //* This function takes O(root n) Time
    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
            if (i != sqrt(n))
                cout << n / i << " ";
        }

        //*IF i is a factor of n then n/i is also one of the factor of n
    }
}

int main()
{
    // printFactors(60);
    printFactors_modified(49);
    return 0;
}