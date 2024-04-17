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

class Linkedlist
{
private:
    Node *head, *tail;
    int size;

public:
    Linkedlist()
    {
        head = tail = NULL;
        size = 0;
    }
    void inatHead(int val)
    {
        Node *nn = new Node(val);
        if (size == 0)
            head = tail = nn;
        else
        {
            nn->next = head;
            head = nn;
        }
        size++;
    }
    void inatTail(int val)
    {
        Node *nn = new Node(val);
        if (size == 0)
            head = tail = nn;
        else
        {
            tail->next = nn;
            tail = nn;
        }
        size++;
    }
    void inAtAny(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "Invalid IDX" << endl;
        else if (idx == 0)
            inatHead(val);
        else if (idx == size)
            inatTail(val);
        else
        {
            Node *nn = new Node(val);
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++, temp = temp->next)
                ;
            nn->next = temp->next;
            temp->next = nn;
            size++;
        }
    }
    void display()
    {
        Node *temp = head;
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Linkedlist ll;
    ll.inatTail(50);
    ll.inatHead(100);
    ll.display();
    return 0;
}