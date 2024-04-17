#include <bits/stdc++.h>
using namespace std;

void display(queue<int> &q)
{
    int n = q.size();
    while (n--)
    {
        int num = q.front();
        cout << num << " ";
        q.pop();
        q.push(num);
    }
    cout << endl;
}
void reverse_firstk(queue<int> &q, int k)
{
    stack<int> st;
    int n = q.size() - k;
    for (int i = 1; i <= k; i++)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    while (n--)
    {
        int num = q.front();
        q.pop();
        q.push(num);
    }
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    display(q);
    reverse_firstk(q, 6);
    display(q);
}