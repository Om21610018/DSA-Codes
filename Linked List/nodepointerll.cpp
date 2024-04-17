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

void display(Node *head) // head and a both are alag alag dabbas and on changing head , a nhi change hoga
{
    Node *temp = head;
    while (head != NULL)
    {
        cout << head->val << " ";
        head = head->next;
    }
    cout << "" << endl;
}
void displayrecur(Node *head) // naya dabba hai no modificatioin in a //* a and head are two different dabbas containing same address of node initially
{                             // void displayrecur(Node *&head) which will take referecne of head instead of creating multiple local variables.
    if (head == NULL)
        return;
    cout << head->val << " ";
    displayrecur(head->next); // No modification in head pointer
}

void displayrev(Node *head)
{
    if (head == NULL)
        return;
    displayrev(head->next);
    cout << head->val << " ";
}
void insertAtEnd(Node *head, int t)
{
    Node *n = new Node(t);
    while (head->next)
        head = head->next;
    head->next = n;
}

int size(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp)
    {
        cnt++;
        temp = temp->next;
    }
    return cnt;
}
int sizerec(Node *head, int &cnt) // head is local pointer variable not the actual a
{
    if (head == NULL)
        return cnt;
    cnt++;
    return sizerec(head->next, cnt);
}

int main()
{
    Node *a = new Node(10);
    Node *b = new Node(20);
    Node *c = new Node(30);
    Node *d = new Node(40);
    Node *e = new Node(50);
    a->next = b;
    b->next = c;
    c->next = d;
    d->next = e;
    // cout << a->next->next->next->val << endl;
    display(a);
    displayrecur(a); // No modification in a pointer
    cout << "" << endl;
    // Node *t = a;
    // while (t)
    // {
    //     cout << t->val << endl;
    //     t = t->next;
    // }
    int x = 0;
    insertAtEnd(a, 100);
    displayrev(a);
    cout << "" << endl;
    cout << sizerec(a, x) << endl;
}