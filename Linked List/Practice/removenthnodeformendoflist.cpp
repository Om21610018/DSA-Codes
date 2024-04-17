#include <bits/stdc++.h>
using namespace std;

// ListNode *removeNthFromEnd(ListNode *head, int n)
// {
//     ListNode *temp = head;
//     int len = 0;
//     for (temp = head; temp != NULL; temp = temp->next, len++)
//         ;
//     int s = len - n + 1; // from start;
//     int idx = s - 1;
//     if (len == 1)
//         head = NULL;
//     else if (s == 1)
//         head = head->next;
//     else
//     {
//         temp = head;
//         for (int i = 1; i <= idx - 1; i++, temp = temp->next)
//             ;
//         temp->next = temp->next->next;
//     }
//     return head;
// }

// ListNode *removeNthFromEnd(ListNode *head, int n)
// {

//     ListNode *slow = head;
//     ListNode *fast = head;
    // traverse fast to (n+1) steps
//     for (int i = 1; i <= n + 1; i++)
//     {
//         if (fast == NULL)
//             return head->next;
//         fast = fast->next;
//     }
//     // move slow and fast at same pace
//     while (fast != NULL)
//     {
//         slow = slow->next;
//         fast = fast->next;
//     }
//     // now slow pointer is exactly at left of the nth node from end
//     slow->next = slow->next->next;
//     return head;
// }
int main()
{
}