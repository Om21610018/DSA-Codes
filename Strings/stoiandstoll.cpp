#include <bits/stdc++.h>
using namespace std;
/*
* stoi is used to convert : string to integer
* stoll is used to convert : string to long long

these functions are used to store the very large numbers in string as they
can't be store into a long long as well but string can do it easily


*/
int main()
{
    string str = "123457";
    int x = stoi(str);
    cout << x << endl;
    cout << x + 1 << endl;

    int a = 12345;
    string s = to_string(a);
    cout << s << endl;

    string st = "123456787654321";
    long long b = stoll(st);
    cout << b + 1 << endl;
}