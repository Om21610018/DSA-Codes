#include <bits/stdc++.h>
using namespace std;

int priority(char ch)
{
    if (ch == '+' || ch == '-')
        return 1;
    else //(ch == '*' || ch == '/')
        return 2;
}
int solve(int val1, int val2, char ch)
{
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else // ch == '/'
        return val1 / val2;
}

int infix(string &str)
{
    // Needs to stacks one for values and other for operators
    stack<int> val;
    stack<int> opr;

    for (int i = 0; i < str.size(); i++)
    {
        // check if str[i] is digit
        int ascii = (int)str[i];
        if (ascii >= 48 && ascii <= 57)
            val.push(ascii - 48);
        else
        {                                                         // str[i] is not a digit -> * , / , + , -
            if (opr.empty() || str[i] == '(' || opr.top() == '(') // ye brackets pahle kiye bcoz inki priority nhi hoti hai
                opr.push(str[i]);
            else if (str[i] == ')')
            {
                while (opr.top() != '(')
                {
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = opr.top();
                    opr.pop();

                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                opr.pop();
            }
            else if (priority(opr.top()) < priority(str[i]))
                opr.push(str[i]);
            else
            { // work priority(opr.top()) >= priority(str[i])
                // we have to do val1 oper val2

                while (!opr.empty() && priority(opr.top()) >= priority(str[i]))
                {
                    int val2 = val.top();
                    val.pop();
                    int val1 = val.top();
                    val.pop();
                    char ch = opr.top();
                    opr.pop();

                    int ans = solve(val1, val2, ch);
                    val.push(ans);
                }
                opr.push(str[i]); // very very important
            }
        }
    }
    // The operator stack can still have some values
    while (!opr.empty())
    {
        int val2 = val.top();
        val.pop();
        int val1 = val.top();
        val.pop();
        char ch = opr.top();
        opr.pop();

        int ans = solve(val1, val2, ch);
        val.push(ans);
    }
    return val.top();
}

int main()
{
    string str = "(7+9)*4/8-3";
    cout << infix(str);
}