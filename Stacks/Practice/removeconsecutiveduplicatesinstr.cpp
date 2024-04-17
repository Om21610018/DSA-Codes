#include <bits/stdc++.h>
using namespace std;
//*Remove Consecutive Duplicates in a string :
string removeDuplicates(string s)
{
    stack<char> st;
    st.push(s[0]);
    int i = 1;
    while (i < s.size())
    {
        if (st.top() != s[i])
            st.push(s[i]);
        i++;
    }
    string str = "";
    while (!st.empty())
    {
        str += st.top();
        st.pop();
    }
    reverse(str.begin(), str.end());
    return str;
}

int main()
{
    string str = "aaabbcddeffg";
    cout << removeDuplicates(str);
}