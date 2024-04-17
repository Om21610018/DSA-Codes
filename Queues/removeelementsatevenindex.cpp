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

void remove_even_pos(queue<int> &q)
{
    int n = q.size();
    for (int i = 0; i < n; i++) // i<n hi rhne do bcoz q ki size har bar change hogi
    {
        if (i % 2 == 1)
            q.push(q.front());
        q.pop();
    }
}

int main()
{
    queue<int> q;
    q.push(10); // 0
    q.push(20); // 1
    q.push(30); // 2
    q.push(40); // 3
    q.push(50); // 4
    display(q); // 5
    remove_even_pos(q);
    display(q);
}