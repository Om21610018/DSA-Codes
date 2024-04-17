#include <iostream>
using namespace std;

// OOPS CONCEPTS :
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

class Linkedl
{
private:
    Node *head;
    Node *tail;

public:
    int size;
    Linkedl()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    //* Insertioin at Head
    void insertAtHead(int val)
    {

        Node *nn = new Node(val);

        // Case 1 : size = 0
        if (size = 0)
            head = tail = nn;
        // Case 2 : size>)
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
        // case 2 : size=0
        if (size == 0)
        {
            head = nn;
            tail = nn;
        }
        // case 2 : size>0
        else
        {
            tail->next = nn;
            tail = nn;
        }
        size++;
    }

    void insertAtAny(int idx, int val)
    {
        // case 1 : invalid idx
        if (idx < 0 || idx > size)
            cout << "Invalid Index" << endl;
        // case 2 : if idx==0
        else if (idx == 0)
            insertAtHead(val);
        // case 3 : if idx==size
        else if (idx == size)
            insertAtTail(val);
        // case 4 : idx>0 && idx <size
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

    //* Deletion :
    void deleteAtHead()
    {
        //* case 1 : size==0
        if (size == 0)
            cout << "List is empty" << endl;
        //* case 2 : size==1
        else if (size == 1)
        {
            head = tail = NULL;
            size--;
        }
        //*case 3 : size>1
        else
        {
            head = head->next;
            size--;
        }
    }
    void deleteAtTail()
    {
        // case 1 : size==0
        if (size == 0)
            cout << "List is empty" << endl;
        //* case 2 : size==1
        else if (size == 1)
        {
            head = tail = NULL;
            size--;
        }
        // case 3 : size>1
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
    { // case 1 : invalid idx
        if (idx < 0 || idx >= size)
            cout << "Invalid Index" << endl;
        // case 2 : if idx==0
        else if (idx == 0)
            deleteAtHead();
        // case 3 : if idx==size
        else if (idx == size - 1)
            deleteAtTail();
        // case 4 : idx>0 && idx<size-1
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
    Linkedl ll;
    ll.insertAtHead(50);
    ll.insertAtTail(100);
    cout << ll.size;
    return 0;
}