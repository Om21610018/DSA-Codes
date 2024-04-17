#include <bits/stdc++.h>
using namespace std;
//*Method 1 :
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

// ListNode *mergeKLists(vector<ListNode *> &arr)
// {
//     if (arr.size() == 0)
//         return NULL;

//     while (arr.size() > 1)
//     {
//         ListNode *a = arr.back();
//         arr.pop_back();
//         ListNode *b = arr.back();
//         arr.pop_back();
//         ListNode *c = mergeTwoLists(a, b);
//         arr.push_back(c);
//     }
//     return arr[0];
// }

//*Method 2 :
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

// ListNode *mergeKLists(vector<ListNode *> &arr)
// {
//     if (arr.size() == 0)
//         return NULL;

//     while (arr.size() > 1)
//     {
//         ListNode *a = arr.front();
//         arr.erase(arr.begin()); // pop_front like
//         ListNode *b = arr.front();
//         arr.erase(arr.begin());
//         ListNode *c = mergeTwoLists(a, b);
//         arr.push_back(c);
//     }
//     return arr[0];
// }

int main()
{
}