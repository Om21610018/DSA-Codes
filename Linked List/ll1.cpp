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

int main()
{ // 10 20 30 40
    Node a(20);
    Node b(30);
    Node c(40);
    Node d(50);
    a.next = &b;
    b.next = &c;
    c.next = &d;
    cout << a.next->next->next->val;
    // d.next = NULL;
    Node *t = &a;
    while (t) //************* NULL ka kabhi next nhi hota hai
    {
        cout << t->val;
        t = t->next;
    }
    cout << "" << endl;
    for (Node *t = &a; t != NULL; t = t->next)
    {
        cout << t->val << endl;
    }
}