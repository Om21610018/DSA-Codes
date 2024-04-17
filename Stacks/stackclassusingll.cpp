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
        next = NULL;
    }
};

class Stack
{
public:
    Node *head;
    int len;
    Stack()
    {
        head = NULL;
        len = 0;
    }
    void push(int val)
    {
        Node *n = new Node(val);
        n->next = head;
        head = n;
        len++;
    }
    void pop()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return;
        }
        len--;
        head = head->next;
    }
    int top()
    {
        if (head == NULL)
        {
            cout << "List is empty" << endl;
            return -1;
        }
        return head->val;
    }
    int size()
    {
        return this->len;
    }
};

int main()
{
    Stack st;
    st.push(50);
    st.push(40);
    st.push(10);
    cout << st.top() << endl;
    st.pop();
    cout << st.top() << endl;
    st.push(100);
    cout << st.top() << endl;
    st.pop();
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
    st.pop();
    cout << st.size() << endl;
}