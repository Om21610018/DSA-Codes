#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void Cats()
{
    int n;
    cin >> n;
    string str1, str2;
    cin >> str1 >> str2;
    ll a = 0;
    ll b = 0;
    for (int i = 0; i < str1.size(); i++)
    {
        if (str1[i] == '0' && str2[i] != '0')
            a++;
        if (str1[i] == '1' && str2[i] == '0')
            b++;
    }
    cout << max(a, b) << endl;
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        Cats();
    }
}