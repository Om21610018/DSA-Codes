#include <bits/stdc++.h>
using namespace std;

int prefix_evaluation(string &str)
{
    stack<int> st;
    for (int i = str.size() - 1; i >= 0; i--)
    {
        if (st.empty() || str[i] >= 48 && str[i] <= 57)
            st.push(str[i] - 48);
        else
        {
            char ch = str[i];
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
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
    string str = "-/*+79483";
    cout << prefix_evaluation(str);
}