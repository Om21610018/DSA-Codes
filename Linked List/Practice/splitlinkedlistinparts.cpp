#include <bits/stdc++.h>
using namespace std;
// vector<ListNode *> splitListToParts(ListNode *head, int k)
// {
//     vector<ListNode *> res;
//     int len = 0;
//     ListNode *temp = head;
//     for (temp = head; temp != NULL; temp = temp->next, len++)
//         ;
//     if (len <= k)
//     {
//         ListNode *a = head, *b = head;
//         while (b != NULL && a)
//         {
//             b = a->next;
//             a->next = NULL;
//             res.push_back(a);
//             a = b;
//         }
//         if (res.size() < k)
//         {
//             while (res.size() != k)
//                 res.push_back(NULL);
//         }
//         return res;
//     }

//     int acttime = len / k;
//     int rem = len % k;
//     int ti = 0;
//     if (rem > 0)
//     {
//         ti = acttime + 1;
//         rem--;
//     }
//     else
//     {
//         ti = acttime;
//     }

//     ListNode *a = head, *p = head, *b = head;
//     while (b != NULL && p)
//     {
//         for (int i = 1; i <= ti - 1; i++, p = p->next)
//             ;
//         b = p->next;
//         res.push_back(a);
//         p->next = NULL;
//         a = b;
//         p = b;
//         if (rem > 0)
//         {
//             ti = acttime + 1;
//             rem--;
//         }
//         else
//         {
//             ti = acttime;
//         }
//     }
//     return res;
// }

// vector<ListNode *> splitListToParts(ListNode *head, int k)
// {
//     int len = 0;
//     for (ListNode *temp = head; temp != NULL; temp = temp->next, len++)
//         ;
//     vector<ListNode *> ans;

//     ListNode *temp = head;
//     int size = len / k;
//     int rem = len % k;

//     while (temp != NULL)
//     {
//         ListNode *c = new ListNode(100);
//         ListNode *tempC = c;
//         int s = size;
//         if (rem > 0)
//             s++;
//         rem--;
//         for (int i = 1; i <= s; i++)
//         {
//             tempC->next = temp;
//             tempC = tempC->next;
//             temp = temp->next;
//         }
//         tempC->next = NULL;
//         ans.push_back(c->next);
//     }
//     if (ans.size() < k)
//     {
//         int extra = k - ans.size();
//         for (int i = 1; i <= extra; i++)
//             ans.push_back(NULL);
//     }
//     return ans;
// }

int main()
{
}