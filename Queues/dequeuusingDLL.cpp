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

class Deque
{
public:
    Node *head;
    Node *tail;
    int s;
    Deque()
    {
        head = NULL;
        tail = NULL;
        s = 0;
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
    void pushBack(int val)
    {
        Node *temp = new Node(val); // new node creation
        if (s == 0)
            //*Case 1 : s==0
            head = tail = temp;
        else //*Case 2 : s>0
        {
            tail->next = temp;
            temp->prev = tail; // extra in Deque
            tail = temp;
        }
        s++;
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
    void pushFront(int val)
    {
        Node *temp = new Node(val); //*Creation of new node
        if (s == 0)
            //*Case 1 : s == 0
            head = tail = temp;
        else //*Case 2 : s > 0
        {
            temp->next = head;
            head->prev = temp; // extra in Deque
            head = temp;
        }
        s++;
    }
    // void insertAt(int idx, int val)
    // {
    //     if (idx < 0 || idx > s) //*Case 1 : idx<0 || idx>s
    //         cout << "Invalid Idx" << endl;
    //     else if (idx == 0) //*Case 2 : idx == 0
    //         pushFront(val);
    //     else if (idx == s) //*Case 3 : idx == s
    //         pushBack(val);
    //     else
    //     {                            //*Case 4 : idx>0 && idx<s
    //         Node *t = new Node(val); // Create new node
    //         Node *temp = head;       // create temp pointer to make it pointing to the node before the idx
    //         for (int i = 1; i <= idx - 1; i++, temp = temp->next)
    //             ; // traverse temp till idx-1;
    //         t->next = temp->next;
    //         t->prev = temp;
    //         temp->next = t;
    //         t->next->prev = t;
    //         s++;
    //     }
    // }
    // int getAtIdx(int idx)
    // {
    //     if (idx < 0 || idx >= s) //*Case 1 : idx<0 || idx>=s
    //     {
    //         cout << "Invalid idx";
    //         return -1;
    //     }
    //     else if (idx == 0) //*Case 2 : idx == 0
    //         return head->val;
    //     else if (idx == s - 1) //*Case 3 : idx == s-1
    //         return tail->val;
    //     else //*Case 4 : idx>0 && idx<s-1
    //     {
    //         Node *temp = head;
    //         for (int i = 1; i <= idx; i++, temp = temp->next)
    //             ;
    //         return temp->val;
    //     }
    // }
    // int getAtIdxOptimized(int idx)
    // {
    //     if (idx < 0 || idx >= s) //*Case 1 : idx<0 || idx>=s
    //     {
    //         cout << "Invalid idx";
    //         return -1;
    //     }
    //     else if (idx == 0) //*Case 2 : idx == 0
    //         return head->val;
    //     else if (idx == s - 1) //*Case 3 : idx == s-1
    //         return tail->val;
    //     else //*Case 4 : idx>0 && idx<s-1
    //     {
    //         Node *temp = NULL;
    //         if (idx >= s / 2)
    //         {
    //             temp = tail;
    //             for (int i = 1; i <= s - idx - 1; i++, temp = temp->prev)
    //                 ;
    //         }
    //         else
    //         {
    //             temp = head;
    //             for (int i = 1; i <= idx; i++, temp = temp->next)
    //                 ;
    //         }
    //         return temp->val;
    //     }
    // }

    void popFront()
    {
        if (s == 0)
            cout << "List is empty" << endl;
        else if (s == 1)
        {
            delete head;
            head = tail = NULL;
            s--;
        }
        else
        {
            Node *temp = head;
            head = head->next;
            head->prev = NULL;
            delete temp;
            temp = NULL;
            s--;
        }
    }

    void popBack()
    {
        if (s == 0)
            cout << "List is empty" << endl;
        else if (s == 1)
        {
            delete head;
            head = tail = NULL;
            s--;
        }
        else
        {
            Node *temp = tail;
            tail = tail->prev;
            tail->next = NULL;
            delete temp;
            temp = NULL;
            s--;
        }
    }
    // void deleteAtIdx(int idx)
    // {
    //     if (s == 0) //*Important
    //         cout << "List is empty" << endl;
    //     else if (idx < 0 || idx >= s)
    //         cout << "Invalid Index" << endl;
    //     else if (idx == 0)
    //         popFront();
    //     else if (idx == s - 1)
    //         popBack();
    //     else
    //     {
    //         Node *temp = head;
    //         for (int i = 1; i <= idx - 1; i++, temp = temp->next)
    //             ;
    //         Node *kachara = temp->next;
    //         temp->next = kachara->next;
    //         kachara->next->prev = temp;
    //         delete kachara;
    //         kachara = NULL;
    //         s--;
    //     }
    // }
    int size()
    {
        return s;
    }
};

int main()
{
    Deque dq;
    dq.pushBack(10);
    dq.pushBack(20);
    dq.pushBack(30);
    dq.pushBack(40);
    dq.display();
    dq.popBack();
    dq.display();
    dq.pushFront(100);
    dq.display();
}