#include <bits/stdc++.h>
using namespace std;

//* Creating a Node class

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

//** Creating a linked list class

class LinkedList
{
private:
    Node *head;
    Node *tail;
    int size;

public:
    LinkedList()
    {
        head = tail = NULL;
        size = 0;
    }
    //*Insert at head
    void insertAtHead(int val)
    {
        Node *nn = new Node(val);
        //*Case 1 : size==0
        if (size == 0)
            head = tail = nn;
        else
        {
            //*Case 2 : size>0
            nn->next = head;
            head = nn;
        }
        //* Must Step
        size++;
    }
    //* Insert at tail
    void insertAtTail(int val)
    {
        Node *nn = new Node(val);
        // Case 1 : size==0
        if (size == 0)
            head = tail = nn;
        else
        {
            // Case 2 : size>0
            tail->next = nn;
            tail = nn;
        }
        size++;
    }
    //* Insert at any idx
    void insertAtAnyIdx(int val, int idx)
    {

        // Case 1 : Invalid Idx
        if (idx < 0 || idx > size)
            cout << "Invalid index" << endl;
        // Case 2 : Insertion at Idx 0
        else if (idx == 0)
            insertAtHead(val);
        // Case 3 : Insertion at Idx = size
        else if (idx == size)
            insertAtTail(val);
        // Case 4 : Insertion at any idx
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
        if (size <= 0)
            cout << "List Khali hai" << endl;
        else
        {
            Node *temp = head;
            while (temp)
            {
                cout << temp->val << " ";
                temp = temp->next;
            }
            cout << endl;
        }
    }

    //* Deletion form head
    void deleteAtHead()
    {
        // case 1 : size = 0
        if (size == 0)
            cout << "List is Empty" << endl;
        // Case 2 : size=1
        else if (size == 1)
            head = tail = NULL;
        // Case 2 : size>1
        else
            head = head->next;
        // TODO: decrement the size is must
        size--;
    }

    //* Deletion at Tail
    void deleteAtTail()
    {
        // case 1 : size = 0
        if (size == 0)
            cout << "List is Empty" << endl;
        // Case 1 : size=1
        else if (size == 0)
            head = tail = 0;
        // Case 2 : size>1
        else
        {
            Node *temp = head;
            for (; temp->next != tail; temp = temp->next)
                ;
            temp->next = NULL;
            tail = temp;
        }
        size--;
    }
    //* Deletion at any idx
    void deleteAtAnyIdx(int idx)
    {
        // Case 1 : invalid idx
        if (idx < 0 || idx >= size)
            cout << "Invalid Idx" << endl;
        // Case 2 : idx==0
        else if (idx == 0)
            deleteAtHead();
        // Case 3 : idx==size-1
        else if (idx == size - 1)
            deleteAtTail();
        // Case 4 : any idx deletion
        else
        {
            Node *temp = head;
            for (int i = 1; i <= idx - 1; i++, temp = temp->next)
                ;
            temp->next = temp->next->next;
            size--;
        }
    }
};

int main()
{

    LinkedList ll;
    ll.insertAtHead(5);
    ll.insertAtTail(100);
    ll.insertAtAnyIdx(1000, 1);
    ll.insertAtAnyIdx(500, 500);
    ll.deleteAtAnyIdx(5);
    ll.deleteAtAnyIdx(1);
    ll.deleteAtAnyIdx(0);
    ll.deleteAtTail();
    
    ll.display();
    return 0;
}