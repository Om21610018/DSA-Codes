#include <bits/stdc++.h>
using namespace std;

class Node // User defined data type
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

class LinkedList // User defined data structure;
{
private:
    Node *head = NULL;
    Node *tail = NULL;
    int size = 0;

public:
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void insertAtTail(int val)
    {
        Node *temp = new Node(val); // new node creation
        if (size == 0)
            //*Case 1 : size==0
            head = tail = temp;
        else //*Case 2 : size>0
        {
            tail->next = temp;
            tail = temp;
        }
        size++;
    }
    void display()
    {
        Node *temp = head; // Important hai dena
        while (temp)
        {
            cout << temp->val << " ";
            temp = temp->next;
        }
        cout << "" << endl;
    }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val); //*Creation of new node
        if (size == 0)
            //*Case 1 : size == 0
            head = tail = temp;
        else //*Case 2 : size > 0
        {
            temp->next = head;
            head = temp;
        }
        size++;
    }
    void insertAt(int idx, int val)
    {
        if (idx < 0 || idx > size) //*Case 1 : idx<0 || idx>size
            cout << "Invalid Idx" << endl;
        else if (idx == 0) //*Case 2 : idx == 0
            insertAtHead(val);
        else if (idx == size) //*Case 3 : idx == size
            insertAtTail(val);
        else
        {                            //*Case 4 : idx>0 && idx<size
            Node *t = new Node(val); // Create new node
            Node *temp = head;       // create temp pointer to make it pointing to the node before the idx
            for (int i = 1; i <= idx - 1; i++, temp = temp->next)
                ; // traverse temp till idx-1;
            t->next = temp->next;
            temp->next = t;
            size++;
        }
    }

    void deleteAtHead()
    {
        if (size == 0)
            cout << "List is empty" << endl;
        else if (size == 1)
        {
            delete head;
            head = tail = NULL;
            size--;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            delete temp;
            temp = NULL;
            size--;
        }
    }

    void deleteAtTail()
    {
        if (size == 0)
            cout << "List is empty" << endl;
        else if (size == 1)
        {
            delete head;
            head = tail = NULL;
            size--;
        }
        else
        {
            Node *temp = head;
            while (temp->next != tail)
                temp = temp->next;
            delete tail;
            temp->next = NULL;
            tail = temp;
            size--;
        }
    }
    void deleteAtIdx(int idx)
    {
        if (size == 0) //*Important
            cout << "List is empty" << endl;
        else if (idx < 0 || idx >= size)
            cout << "Invalid Index" << endl;
        else if (idx == 0)
            deleteAtHead();
        else if (idx == size - 1)
            deleteAtTail();
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++, temp = temp->next)
                ;
            Node *kachara = temp->next;
            temp->next = kachara->next;
            delete kachara;
            kachara = NULL;
            size--;
        }
    }
};

int main()
{
    LinkedList ll;
    ll.insertAtTail(50);
    ll.display();
    ll.insertAtTail(20);
    ll.insertAtTail(30);
    ll.display();
    ll.deleteAtIdx(1);
    ll.deleteAtHead();
    ll.deleteAtHead();
    ll.deleteAtHead();
    ll.deleteAtHead();
    ll.display();
}