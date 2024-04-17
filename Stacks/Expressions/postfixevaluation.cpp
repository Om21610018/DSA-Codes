#include <bits/stdc++.h>
using namespace std;
// no need to check priority here in postfix evaluation
int postfix_evaluation(string &str)
{
    stack<int> st;
    for (int i = 0; i < str.size(); i++)
    {
        int ascii = (int)str[i];
        if (st.empty() || (ascii >= 48 && ascii <= 57))
            st.push(str[i] - 48);
        else
        {
            char ch = str[i];
            int val2 = st.top();
            st.pop();
            int val1 = st.top();
            st.pop();
            if (ch == '+')
                st.push(val1 + val2);
            else if (ch == '-')
                st.push(val1 - val2);
            else if (ch == '*')
                st.push(val1 * val2);
            else
                st.push(val1 / val2);
        }
    }
    return st.top();
}
int main()
{
    string str = "79+4*8/3-";
    cout << postfix_evaluation(str);
}