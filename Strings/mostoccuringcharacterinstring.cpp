#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cin >> str;
    // int max = 0;
    // char maxch;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     char ch = str[i];
    //     int count = 0;

    //     for (int j = 0; j < str.size(); j++)
    //     {
    //         if (str[i] == str[j])
    //             count++;
    //     }
    //     if (count > max)
    //     {
    //         max = count;
    //         maxch = str[i];
    //     }
    // }

    // for (int i = 0; i < str.size(); i++)
    // {
    //     char ch = str[i];
    //     int count = 1;

    //     for (int j = i+1; j < str.size(); j++)
    //     {
    //         if (str[i] == str[j])
    //             count++;
    //     }
    //     if (count == max)
    //     {
    //         cout << ch << " " << count<<endl;
    //     }
    // }
    // it will just print the first character which is occuring maximum times not the others
    // cout << "maximum occuring character is : " << maxch << " times : " << max << endl;

    //*Method 2 :
    vector<int> hash(26, 0);
    int max = 0;
    for (int i = 0; i < str.size(); i++)
    {
        hash[((int)str[i]) - 97]++;
        if (hash[((int)str[i]) - 97] > max)
            max = hash[((int)str[i]) - 97];
    }
    for (int i = 0; i < 26; i++)
    {
        if (hash[i] == max)
            cout << (char)(i + 97) << " " << hash[i] << endl;
    }
}