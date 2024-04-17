//*Binary to decimal

#include <bits/stdc++.h>
using namespace std;

int binary_to_decimal(string &binary)
{
    int n = binary.size();
    int result = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        char ch = binary[i];
        int num = ch - '0';
        result += (num * (1 << (n - i - 1)));
    }
    return result;
}
string decimal_to_binary(int num)
{
    string res = "";
    while (num)
    {
        res.push_back((num % 2) + '0');
        num = num >> 1;
    }
    reverse(res.begin(), res.end());
    return res;
}
int main()
{
    string str = "1111";
    cout << binary_to_decimal(str);
    cout << "" << endl;
    cout << decimal_to_binary(8885234);
    return 0;
}