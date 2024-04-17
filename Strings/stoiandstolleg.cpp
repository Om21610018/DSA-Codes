#include <bits/stdc++.h>
using namespace std;
/*
* stoi is used to convert : string to integer
* stoll is used to convert : string to long long


these functions ignores leading zeros.


these functions are used to store the very large numbers in string as they
can't be store into a long long as well but string can do it easily


*/
int main()
{ // find the largest number and print the index
    int max = INT_MIN;
    vector<string> v = {"0123", "0023", "456", "00182", "940", "2901"};
    for (int i = 0; i < v.size(); i++)
    {
        if (stoi(v[i]) > max)
            max = i;
    }
    cout << max << endl;
}