#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "ZZABXTYYQRSTX";
    string res = "";
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] >= 'X')
            res.push_back(str[i]);
    }
    sort(res.begin(), res.end());
    reverse(res.begin(), res.end());
    cout << res;
}