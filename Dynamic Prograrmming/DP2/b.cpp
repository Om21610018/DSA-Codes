#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n = 3;
        while (n--)
        {
            string str;
            cin >> str;
            vector<int> hash(3, -1);
            for (int i = 0; i < str.length(); i++)
            {
                if (str[i] != '?')
                    hash[str[i] - 'A']++;
            }
            for (int i = 0; i < 3; i++)
                if (hash[i] == -1)
                    cout << (char)('A' + i) << endl;
        }
    }
}