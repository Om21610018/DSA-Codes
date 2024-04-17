#include <bits/stdc++.h>
using namespace std;
// ListNode *merge(ListNode *list1, ListNode *list2)
// {
//     ListNode *c = new ListNode(-1);
//     ListNode *t = c;
//     while (list1 != NULL && list2 != NULL)
//     {
//         if (list1->val < list2->val)
//         {
//             t->next = list1;
//             list1 = list1->next;
//         }
//         else
//         {
//             t->next = list2;
//             list2 = list2->next;
//         }
//         t = t->next;
//     }
//     if (list1 == NULL)
//         t->next = list2;
//     if (list2 == NULL)
//         t->next = list1;
//     return c->next;
// }

// ListNode *sortList(ListNode *head)
// {
//     if (head == NULL || head->next == NULL) // base case of recursion
//         return head;
//     ListNode *slow = head, *fast = head; // to find middle of the linked list
//     while (fast->next != NULL && fast->next->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next->next;
//     }
//     // now slow is at left middle
//     ListNode *a = head;
//     ListNode *b = slow->next;
//     slow->next = NULL;
//     a = sortList(a);
//     b = sortList(b);

//     ListNode *c = merge(a, b);
//     return c;
// }

int main()
{
}