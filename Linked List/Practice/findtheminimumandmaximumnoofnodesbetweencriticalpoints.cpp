#include <bits/stdc++.h>
using namespace std;

// vector<int> nodesBetweenCriticalPoints(ListNode *head)
// {
//     int idx = 1;
//     ListNode *a = head, *b = head->next, *c = head->next->next;
//     int fidx = -1, sidx = -1;
//     while (c)
//     {
//         if ((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val))
//         {
//             if (fidx == -1)
//                 fidx = idx;
//             else
//                 sidx = idx;
//         }
//         a = a->next;
//         b = b->next;
//         c = c->next;
//         idx++;
//     }
//     if (sidx == -1) // Yaha cover ho gya if ek hi critical point hone wala case no need to check it afterwards.
//         return {-1, -1};
//     int maxDist = sidx - fidx;

//     a = head;
//     b = head->next;
//     c = head->next->next;
//     fidx = -1;
//     sidx = -1;
//     int minDist = INT_MAX;
//     while (c)
//     {
//         if ((b->val > a->val && b->val > c->val) || (b->val < a->val && b->val < c->val))
//         {
//             fidx = sidx;
//             sidx = idx;

//             if (sidx != -1 && fidx != -1)
//                 minDist = min(minDist, sidx - fidx);
//         }
//         a = a->next;
//         b = b->next;
//         c = c->next;
//         idx++;
//     }
//     return {minDist, maxDist};
// }
int main()
{
}