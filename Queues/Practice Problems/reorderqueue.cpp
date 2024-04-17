// Reorder queue  using one stack only

#include <bits/stdc++.h>
using namespace std;

void reorder_queue(queue<int> &q)
{
    stack<int> st;
    int n = q.size() / 2;
    while (n--)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
    }
    n = q.size() / 2;
    while (n--)
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
        q.push(q.front());
        q.pop();
    }
    while (!q.empty())
    {
        st.push(q.front());
        q.pop();
    }
    while (!st.empty())
    {
        q.push(st.top());
        st.pop();
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
    q.push(6);
    q.push(7);
    q.push(8);
    reorder_queue(q);
    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
}