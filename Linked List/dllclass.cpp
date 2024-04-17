#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

class DLL
{
public:
    Node *head;
    Node *tail;
    int size;
    DLL()
    {
        head = NULL;
        tail = NULL;
        size = 0;
    }
    void displayrev()
    {
        Node *a = tail;
        for (; a != NULL; a = a->prev)
            cout << a->val << " ";
        cout << "" << endl;
    }

    void display()
    {
        Node *a = head;
        for (; a != NULL; a = a->next)
            cout << a->val << " ";
        cout << "" << endl;
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
            temp->prev = tail; // extra in DLL
            tail = temp;
        }
        size++;
    }
    // void display()
    // {
    //     Node *temp = head; // Important hai dena
    //     while (temp)
    //     {
    //         cout << temp->val << " ";
    //         temp = temp->next;
    //     }
    //     cout << "" << endl;
    // }
    void insertAtHead(int val)
    {
        Node *temp = new Node(val); //*Creation of new node
        if (size == 0)
            //*Case 1 : size == 0
            head = tail = temp;
        else //*Case 2 : size > 0
        {
            temp->next = head;
            head->prev = temp; // extra in DLL
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
            t->prev = temp;
            temp->next = t;
            t->next->prev = t;
            size++;
        }
    }
    int getAtIdx(int idx)
    {
        if (idx < 0 || idx >= size) //*Case 1 : idx<0 || idx>=size
        {
            cout << "Invalid idx";
            return -1;
        }
        else if (idx == 0) //*Case 2 : idx == 0
            return head->val;
        else if (idx == size - 1) //*Case 3 : idx == size-1
            return tail->val;
        else //*Case 4 : idx>0 && idx<size-1
        {
            Node *temp = head;
            for (int i = 1; i <= idx; i++, temp = temp->next)
                ;
            return temp->val;
        }
    }
    int getAtIdxOptimized(int idx)
    {
        if (idx < 0 || idx >= size) //*Case 1 : idx<0 || idx>=size
        {
            cout << "Invalid idx";
            return -1;
        }
        else if (idx == 0) //*Case 2 : idx == 0
            return head->val;
        else if (idx == size - 1) //*Case 3 : idx == size-1
            return tail->val;
        else //*Case 4 : idx>0 && idx<size-1
        {
            Node *temp = NULL;
            if (idx >= size / 2)
            {
                temp = tail;
                for (int i = 1; i <= size - idx - 1; i++, temp = temp->prev)
                    ;
            }
            else
            {
                temp = head;
                for (int i = 1; i <= idx; i++, temp = temp->next)
                    ;
            }
            return temp->val;
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
            head->prev = NULL;
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
            Node *temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
            temp = NULL;
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
            kachara->next->prev = temp;
            delete kachara;
            kachara = NULL;
            size--;
        }
    }
};

int main()
{
    DLL l1;
    l1.insertAtHead(10);
    l1.insertAtHead(20);
    l1.insertAtHead(30);
    l1.display();
    l1.insertAt(1, 55);
    l1.display();
    l1.insertAt(0, 100);
    l1.display();
    l1.insertAtTail(1000);
    l1.display();
    l1.deleteAtHead();
    l1.deleteAtHead();
    l1.display();
    cout << l1.getAtIdxOptimized(1) << endl;
}