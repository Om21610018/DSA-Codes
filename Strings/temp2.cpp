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
    int t;
    cin >> t;
    while (t--)
    {
        int n1, n2;
        cin >> n1 >> n2;
        vector<int> arr1(n1), arr2(n2);
        for (int i = 0; i < n1; i++)
            cin >> arr1[i];
        for (int i = 0; i < n2; i++)
            cin >> arr2[i];
        sort(arr2.begin(), arr2.end());
        sort(arr1.begin(), arr1.end());
        int i = 0, j = arr2.size() - 1;
        ll sum = 0;
        int t = 0;
        while (i < j && t < arr1.size())
        {
            int x = arr1[t];
            if (abs(x - arr2[i]) > abs(x - arr2[j]))
            {
                sum += abs(x - arr2[i]);
                i++;
            }
            else
            {
                sum += abs(x - arr2[j]);
                j--;
            }
        }
        cout << sum << endl;
    }
}