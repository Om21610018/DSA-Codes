#include <bits/stdc++.h>
using namespace std;

//* Composite number has even number of factors except perfect squares
//*
/*
* If any number has factors except 1  and n then for sure half of the factors
* of the factors will lie before <= sqrt(n)

60  =   1,2,3,4,5,6,    10,12,15,20,30,60

/ no need to check all the number as all numbers exists in pair
so we can check the one member of that pair and verify it


*/
bool isPrime(int n)
{
    if (n == 1)
        return false;
    for (int i = 2; i <= sqrt(n); i++) // T.C. O(root n)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    cout << isPrime(59);
}