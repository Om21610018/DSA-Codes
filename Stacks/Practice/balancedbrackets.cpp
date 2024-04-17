#include <bits/stdc++.h>
using namespace std;

bool validateBrackets(string &str)
{
    if (str.size() % 2 == 1) // agr str ki lenght odd hogi tab
        return false;
    stack<char> st;

    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == '(')
            st.push(str[i]);
        else // str[i]==')'
            if (st.empty())
                return false;
            // else if (st.top() == '(' && str[i] == ')') // st.top() == '(' no need of it
            //     st.pop();
            else
                st.pop();
    }
    return st.empty();
}
int main()
{
    string str = "(((((())))))";
    cout << validateBrackets(str);
}