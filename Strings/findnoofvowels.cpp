#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    int cnt = 0;
    cout << "Enter a string : " << endl;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
        if (str[i] == 'a' || str[i] == 'i' || str[i] == 'e' || str[i] == 'o' || str[i] == 'u')
            ++cnt;

    cout << "No. of vowels are : " << cnt << endl;
}