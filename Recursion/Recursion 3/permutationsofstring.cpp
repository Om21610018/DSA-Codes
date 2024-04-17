#include <bits/stdc++.h>
using namespace std;
/*
Finding all permutations of an string given all elements of the string are unique.


abc --> abc, acb, bac , bca , cab , cba

*variable  number of calls

*/
// Bad in terms of time and space complexity
void permutations(string ans, string &original)
{
    if (original.size() == 0)
    {
        cout << ans << endl;
        return;
    }
    for (int i = 0; i < original.size(); i++)
    {
        char ch = original[i];
        string left = original.substr(0, i);
        string right = original.substr(i + 1);
        string temp = left + right;
        permutations(ans + ch, temp);
    }
}
int main()
{
    string str = "122";
    permutations("", str);

    // cout << str.substr(1, 3) << endl; // only left indxe is inclusive right one is exclusive

    // string st = "abcde"; // c ko hatana hai
    // string left = st.substr(0, 2);
    // string right = st.substr(2 + 1);
    // st = left + right;
    // cout << st;
}