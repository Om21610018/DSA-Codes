#include <bits/stdc++.h>
using namespace std;

string prefix_to_postfix(string &str)
{
    stack<string> st;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (st.empty() || str[i] >= 48 && str[i] <= 57)
            st.push(to_string(str[i] - 48));
        else
        {
            char ch = str[i];
            string val1 = st.top();
            st.pop();
            string val2 = st.top();
            st.pop();
            string ans = "";
            ans += val1;
            ans += val2;
            ans.push_back(ch);
            st.push(ans);
        }
    }
    return st.top();
}
int main()
{
    string str = "-/*+79483";
    cout << prefix_to_postfix(str);
}