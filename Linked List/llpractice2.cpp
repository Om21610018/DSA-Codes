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

class LL
{
private:
    Node *head, *tail;
    int size;

public:
    void reverse()
    {
        Node *p = NULL, *n = NULL, *curr = head;
        tail = head;
        while (curr)
        {
            n = curr->next;
            curr->next = p;
            p = curr;
            curr = n;
        }
        head = p;
    }
    LL()
    {
        size = 0;
        head = tail = NULL;
    }
    void insertAtHead(int val)
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
    void insertAtTail(int val)
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
    void insertAtAnyIdx(int idx, int val)
    {
        if (idx < 0 || idx > size)
            cout << "Chutiyapa" << endl;
        else if (idx == 0)
            insertAtHead(val);
        else if (idx == size)
            insertAtTail(val);
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
    void deleteAtHead()
    {
        if (size == 0)
            cout << "Chutiyapa" << endl;
        else if (size == 1)
        {
            head = tail = NULL;
            size--;
        }
        else
        {
            head = head->next;
            size--;
        }
    }
    void deleteAtTail()
    {
        if (size == 0)
            cout << "Chutiyapa" << endl;
        else if (size == 1)
        {
            head = tail = NULL;
            size--;
        }
        else
        {
            Node *temp = head;
            for (; temp->next != tail; temp = temp->next)
                ;
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }

    void deleteAtAny(int idx)
    {
        if (idx < 0 || idx >= size)
            cout << "Invalid hai" << endl;
        else if (idx == 0)
            deleteAtHead();
        else if (idx == size - 1)
            deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++, temp = temp->next)
                ;
            temp->next = temp->next->next;
            size--;
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
    LL l;
    l.insertAtHead(100);
    l.insertAtTail(500);
    l.insertAtAnyIdx(1, 1000);
    l.reverse();
    l.insertAtAnyIdx(1, 850);
    l.deleteAtHead();
    l.insertAtTail(980);
    l.reverse();
    // l.insertAtHead(200);
    l.display();
    return 0;
}