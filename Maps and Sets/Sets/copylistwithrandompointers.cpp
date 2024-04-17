#include <bits/stdc++.h>
using namespace std;

// Node *copyRandomList(Node *head)
// {
//     // step 1 : create deep copy without random pointer
//     Node *dummy = new Node(-1);
//     Node *temp = head;
//     Node *td = dummy;
//     while (temp != NULL)
//     {
//         Node *n = new Node(temp->val);
//         td->next = n;
//         temp = temp->next;
//         td = td->next;
//     }

//     // step 2 : create alterante connections :
//     Node *duplicate = dummy->next;
//     Node *a = head;
//     Node *b = duplicate;
//     dummy = new Node(-1);
//     Node *tempD = dummy;
//     while (a)
//     {

//         tempD->next = a;
//         a = a->next;
//         tempD = tempD->next;
//         tempD->next = b;
//         b = b->next;
//         tempD = tempD->next;
//     }
//     dummy = dummy->next;

//     // step 3 : assigning random pointers :
//     Node *td1 = dummy; // travel in original list
//     Node *td2 = NULL;
//     while (td1)
//     {
//         td2 = td1->next; // travel in duplicate list
//         if (td1->random != NULL)
//             td2->random = td1->random->next;
//         td1 = td1->next->next;
//     }

//     // step 4 : removing the connections (seperate two linked lists):
//     Node *d1 = new Node(-1);
//     Node *d2 = new Node(-1);
//     Node *t1 = d1, *t2 = d2;
//     Node *t = dummy;
//     while (t)
//     {
//         t1->next = t;
//         t = t->next;
//         t1 = t1->next;
//         t2->next = t;
//         t = t->next;
//         t2 = t2->next;
//     }
//     t1->next = NULL;
//     t2->next = NULL;
//     d1 = d1->next;
//     d2 = d2->next;

//     return d2;
// }
int main()
{
}