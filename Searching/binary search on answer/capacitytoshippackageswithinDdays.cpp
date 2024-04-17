#include <bits/stdc++.h>
using namespace std;
/*
* Capacity to ship packages within D days

weights = {1,2,3,4,5,6,7,8,9,10};
days = 5

capacity of ship -> minimum
e.g 20 --> this is assumed by us //*but hme minimum capcity nikalni hai ki efficiently ho  hme days minimum nhi krne bss woh efficiently space utilize kre

order wise hi uthana pdega

Day 1 : 1 2 3 4 5
Day 2 : 6 7
Day 3 : 8 9
Day 4 : 10

but if capacity of ship = 15
then we can have it efficiently

Day 1 : 1 2 3 4 5
Day 2 : 6 7
Day 3 : 8
Day 4 : 9
Day 5 : 10

*Algorithm :

we will take our

high --> max capacity = sum of all weights
low  --> min capactiy = max element of weights array(max because all elements must be transferred at least)

* * Now apply binary search on low and high
solution :


weights = {3,2,2,4,1,4};
days = 3


now we have the capacity in range of 4,5,6,7,8,9,10,11,12,13,14,15,16  --> so this is in sorted order //* so here we can apply Binary search
_______________________________________
low = 4;
high = 16;
mid = 10 --> current capacity

Day 1 : 3 2 2
Day 2 : 4 1 4

if(check(mid,weights,days)==true)
{
     ans = mid;   ---------------------------->         ans=10;
     high = mid-1;
}

capacity 10 mein kaam ho rha hai mtlb 11 12 13 mein toh hoga hi confirm hai

so we will
____________________________________________
low = 4
high = 9
mid = 6

Day 1 : 3 2
Day 2 : 2 4
Day 3 : 1 4

if(check(mid,weights,days)==true)
{
     ans = mid;  ----------------------------------> ans = 6;
     high = mid-1;
}

__________________________________________________________

low = 4;
high = 5;
mid = 4;

Day 1 : 3
Day 2 : 2 2
Day 3 : 4                    Days khtm
// Day 4 :
else{
    low = mid+1;
}

____________________________________________________________
low = 5;
high = 5;
mid = 5;

Day 1 : 3 2
Day 2 : 2
Day 3 : 4 1                  Days khtm
//Day 4 :
else
{
    low = mid+1;
}

now low>mid break the loop and exit and return the ans;




*/
bool check(int mid, vector<int> &weights, int days)
{
    int n = weights.size();
    int m = mid;
    int cnt = 1;
    for (int i = 0; i < n; i++)
    {
        if (m >= weights[i])
        {
            m -= weights[i];
        }
        else
        {
            cnt++;
            m = mid;
            m -= weights[i];
        }
    }
    if (cnt > days)
        return false;
    else
        return true;
}
int shipWithinDays(vector<int> &weights, int days)
{
    int n = weights.size();
    int max = INT_MIN;
    int sum = 0;
    for (int i = 0; i < weights.size(); i++)
    {
        sum += weights[i];
        if (max < weights[i])
            max = weights[i];
    }
    int low = max;
    int high = sum;
    int minCapacity = sum;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (check(mid, weights, days))
        {
            minCapacity = mid;
            cout << "Mincapacity : " << minCapacity << endl;
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return minCapacity;
}
int main()
{
    vector<int> weights = {1, 2, 1};
    int days = 2;
    int res = shipWithinDays(weights, days);
    cout << res;
}