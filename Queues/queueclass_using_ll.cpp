#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};
class QueueLL
{
public:
    Node *f;
    Node *b;
    int sz;
    QueueLL()
    {
        f = NULL;
        b = NULL;
        sz = 0;
    }
    void push(int val)
    {
        Node *nn = new Node(val);
        if (f == NULL)
            b = f = nn;
        else
        {
            b->next = nn;
            b = nn;
        }
        sz++;
    }
    void pop()
    {
        if (f == NULL)
            cout << "Queue is  empty";
        else
        {
            Node *temp = f;
            f = f->next;
            delete (temp);
            temp = NULL;
            sz--;
        }
    }
    int size()
    {
        return sz;
    }
    int front()
    {
        if (f)
            return f->val;
        cout << "Queue is empty" << endl;
        return -1;
    }
    int back()
    {
        if (b)
            return b->val;
        cout << "Queue is empty" << endl;
        return -1;
    }
    void display()
    {
        for (Node *t = f; t != NULL; t = t->next)
        {
            cout << t->val << " ";
        }
        cout << "" << endl;
    }
    bool empty()
    {
        return sz == 0;
    }
};

int main()
{
    // QueueLL q;
    // q.push(20);
    // q.push(30);
    // q.push(10);
    // q.pop();
    // // q.pop();
    // // q.pop();
    // q.display();
    // cout << q.empty();
    deque<int> d;
    d.push_back(15);
    d.push_back(20);
    d.push_front(14);
    cout << d.front() << endl;
    cout << d.size() << endl;
    
}