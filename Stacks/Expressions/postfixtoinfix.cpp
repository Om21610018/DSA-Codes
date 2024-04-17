#include <bits/stdc++.h>
using namespace std;
// no need to check priority here in postfix evaluation
string postfix_to_infix(string &str)
{
    stack<string> st;
    for (int i = 0; i < str.size(); i++)
    {

        if (st.empty() || (str[i] >= 48 && str[i] <= 57))
            st.push(to_string(str[i] - 48));
        else
        {
            char ch = str[i]; // important
            string val2 = st.top();
            st.pop();
            string val1 = st.top();
            st.pop();
            string ans = "";
            ans += val1;
            ans.push_back(ch);
            ans += val2;
            st.push(ans);
        }
    }
    return st.top();
}
int main()
{
    string str = "79+4*8/3-";
    cout << postfix_to_infix(str);
}