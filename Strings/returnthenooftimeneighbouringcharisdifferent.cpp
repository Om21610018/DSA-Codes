/*
Input a string and return the number of times the
neighbouring characters are different from each other
*/

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int cnt = 0;
    string str;
    cout << "Enter the string : " << endl;
    cin >> str;

    for (int i = 0; i < str.length(); i++)
    {
        if (str.length() == 1 || str.length() == 0)
            break;

        else if (i == 0)
        {
            if (str[i] != str[i + 1])
                cnt++;
        }
        else if (i == str.length() - 1)
        {
            if (str[i] != str[i - 1])
                ++cnt;
        }
        else if (str[i] != str[i - 1] && str[i] != str[i + 1])
            cnt++;
    }

    cout << "No. of timess the neighbouring characters are different : " << cnt << endl;
}