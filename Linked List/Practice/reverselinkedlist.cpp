#include <bits/stdc++.h>
using namespace std;
//*Iterative method : 
// ListNode *reverseList(ListNode *head)
// {
//     ListNode *prev = NULL, *Next = NULL, *curr = head;
//     while (curr)
//     {
//         Next = curr->next; // preserving the next node
//         curr->next = prev;
//         prev = curr;//FOR NEXT ROUND
//         curr = Next;//FOR NEXT ROUND
//     }
//     return prev;
// }

//*Recursive method : 

// ListNode *reverseList(ListNode *head)
// {
//     if (head == NULL)
//         return NULL;
//     if (head->next == NULL)
//         return head;
//     ListNode *nn = reverseList(head->next);
//     head->next->next = head;
//     head->next = NULL;
//     return nn;
// }

int main()
{
}