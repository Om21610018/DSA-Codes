// #include <iostream>
// using namespace std;

// //* Create the node class
// class Node
// {
// public:
//     int val;
//     Node *next;
//     Node(int val)
//     {
//         this->val = val;
//         this->next = NULL;
//     }
// };

// class LinkedList
// {
// private:
//     Node *head, *tail;
//     int size;

// public:
//     LinkedList()
//     {
//         head = tail = NULL;
//         size = 0;
//     }

//     //* Insertion at head;
//     void insertAtHead(int val)
//     {
//         // Create Node and make it ready
//         Node *nn = new Node(val);
//         // Case 1 : size==0
//         if (size == 0)
//             head = tail = nn;
//         else
//         {
//             // Case 2 : size>0
//             nn->next = head;
//             head = nn;
//         }
//         size++;
//     }
//     void insertAtTail(int val)
//     {
//         // make node ready
//         Node *nn = new Node(val);

//         // Case 1 : size==0
//         if (size == 0)
//             head = tail = nn;
//         else
//         {
//             // Case 2 : size>0
//             tail->next = nn;
//             tail = nn;
//         }
//         size++;
//     }

//     void insertAtAnyIdx(int idx, int val)
//     {
//         // Invalid idx
//         if (idx < 0 || idx > size)
//             cout << "Invalid idx" << endl;
//         else if (idx == 0)
//             insertAtHead(val);
//         else if (idx == size)
//             insertAtTail(val);
//         else
//         {
//             Node *nn = new Node(val);
//             Node *temp = head;
//             for (int i = 1; i <= idx - 1; i++, temp = temp->next)
//                 ;
//             nn->next = temp->next;
//             temp->next = nn;
//             size++;
//         }
//     }

//     void display()
//     {
//         Node *temp = head;
//         while (temp)
//         {
//             cout << temp->val << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }

//     void deleteAtHead()
//     {
//         // Case 1 : size==0
//         if (size == 0)
//             cout << "EMPTY LIST" << endl;
//         else if (size == 1) // Case 2 : size==1
//         {
//             head = tail = NULL;
//             size--;
//         }
//         else
//         {
//             // case 2 : size>1
//             head = head->next;
//             size--;
//         }
//     }

//     void deleteAtTail()
//     {
//         if (size == 0)
//             cout << "Empty list" << endl;
//         else if (size == 1)
//         {
//             head = tail = NULL;
//             size--;
//         }
//         else
//         {
//             Node *temp = head;
//             for (; temp->next != tail; temp = temp->next)
//                 ;
//             tail = temp;
//             temp->next = NULL;
//             size--;
//         }
//     }

//     void deleteAtAnyIdx(int idx)
//     {
//         if (idx < 0 || idx >= size)
//             cout << "Invalid index" << endl;
//         else if (idx == 0)
//             deleteAtHead();
//         else if (idx == size - 1)
//             deleteAtTail();
//         else
//         {
//             Node *temp = head;
//             for (int i = 1; i <= idx - 1; i++, temp = temp->next)
//                 ;
//             temp->next = temp->next->next;
//             size--;
//         }
//     }
//     void reverse()
//     {
//         Node *p = NULL, *n = NULL, *curr = head;
//         tail = head;
//         while (curr)
//         {
//             n = curr->next;
//             curr->next = p;
//             p = curr;
//             curr = n;
//         }
//         head = p;
//     }
//     void reverserec()
//     {
//         if(head==NULL)return ;
//     }
// };

// int main()
// {
//     LinkedList ll;
//     ll.insertAtAnyIdx(0, 500);
//     ll.insertAtHead(2000);
//     ll.insertAtTail(5000);
//     ll.insertAtAnyIdx(2, 6000);
//     ll.insertAtAnyIdx(50, 3434);
//     ll.insertAtTail(8000);

//     ll.display();
//     ll.reverse();
//     ll.insertAtHead(5000);
//     ll.insertAtTail(852);
//     ll.display();
//     ll.reverse();
//     ll.insertAtAnyIdx(5, 6547);
//     ll.reverse();
//     ll.display();
//     return 0;
// }

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

class LinkedList
{
private:
    Node *head;
    Node *tail;

public:
    int size;
    LinkedList()
    {
        head = NULL;
        tail = NULL;
        size = 0;
        cout << "Called" << endl;
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
    void insertAtTail(int val)
    {
        // make node ready
        Node *nn = new Node(val);

        // Case 1 : size==0
        if (size == 0)
            head = tail = nn;
        else
        {
            // Case 2 : size>0
            tail->next = nn;
            tail = nn;
            cout << "Chal rha hu" << endl;
        }
        cout << "in insettail" << endl;
        size++;
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
    LinkedList ll;
    ll.insertAtHead(50);
    // ll.display();
    ll.insertAtHead(55);
    // ll.insertAtTail(150);
    // ll.display();
    cout << ll.size;
    return 0;
}