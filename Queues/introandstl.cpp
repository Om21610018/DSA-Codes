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

void reverserec(queue<int> &q)
{
    if (q.empty())
        return;
    int num = q.front();
    q.pop();
    reverserec(q);
    q.push(num);
}

void reverse_using_stack(queue<int> &q)
{
    stack<int> st;
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
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    
    // cout << q.front() << endl;
    // cout << q.back() << endl;
    // cout << "size : " << q.size() << endl;
    // q.pop();

    // cout << "size : " << q.size() << endl;
    // cout << q.front() << endl;
    // q.front() = 100;
    // cout << q.front() << endl;
    q.pop();
    // cout << q.front() << endl;
    // cout << q.empty();
    reverse_using_stack(q);
    cout << "" << endl;
    display(q);
}