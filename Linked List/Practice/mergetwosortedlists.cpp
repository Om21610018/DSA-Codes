#include <bits/stdc++.h>
using namespace std;
//*Method 1 : using S.C. : O(m+n);
// ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
// {
//     ListNode *tempA = list1, *tempB = list2;
//     ListNode *c = new ListNode(-1);
//     ListNode *tempC = c;
//     while (tempA != NULL && tempB != NULL)
//     {
//         ListNode *t;
//         if (tempA->val < tempB->val)
//         {
//             t = new ListNode(tempA->val);
//             tempA = tempA->next;
//         }
//         else
//         {
//             t = new ListNode(tempB->val);
//             tempB = tempB->next;
//         }
//         tempC->next = t;
//         t->next = NULL;
//         tempC = t;
//     }
//     if (tempA == NULL)
//         tempC->next = tempB;
//     else
//         tempC->next = tempA;
//     return c->next;
// }

// ListNode *mergeTwoLists(ListNode *list1, ListNode *list2)
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

//*Method 2 : S.C. : O(1) using merge sort on linked list

int main()
{
}