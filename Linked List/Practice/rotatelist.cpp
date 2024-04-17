#include <bits/stdc++.h>
using namespace std;

// ListNode *rotateRight(ListNode *head, int k)
// {
//     ListNode *temp = head;
//     int len = 0;
//     for (temp = head; temp != NULL; temp = temp->next, len++)
//         ;
//     if (len == 0)
//         return NULL;
//     k = k % len;
//     ListNode *slow = head, *fast = head;
//     for (int i = 1; i <= k; i++, fast = fast->next)
//         ;
//     while (fast->next != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next;
//     }
//     fast->next = head;
//     head = slow->next;
//     slow->next = NULL;
//     return head;
// }
int main()
{
}