#include <bits/stdc++.h>
using namespace std;

// ListNode *partition(ListNode *head, int x)
// {
//     if (head == NULL || head->next == NULL)
//         return head;
//     ListNode *lo = new ListNode(-1);
//     ListNode *hi = new ListNode(-1);
//     ListNode *tl = lo, *th = hi, *t = head;
//     while (t != NULL)
//     {
//         if (t->val < x)
//         {
//             tl->next = t;
//             t = t->next;
//             tl = tl->next;
//         }
//         else
//         { // t-.val >= x
//             th->next = t;
//             t = t->next;
//             th = th->next;
//         }
//     }
//     th->next = NULL;
//     tl->next = hi->next;
//     return lo->next;
// }

int main()
{
}