#include <bits/stdc++.h>
using namespace std;
/*
Algorithm :
- find the min element and mark it as zero
- then find the next min element and ignore zero and negative numbers and mark it as -1;
- continue process and mark till end
- multiply whole array with -1 and return  the result
*/

void arrangeforany(vector<int> &v)
{
    vector<int> visited(v.size(), 0); // 0 means not visited
    for (int i = 0; i < v.size(); i++)
    {
        int min = INT_MAX;
        int mindx = -1;
        for (int j = 0; j < v.size(); j++)
        {
            if (visited[j] == 1)
                continue;
            else if (min > v[j] && visited[j] == 0)
            {
                min = v[j];
                mindx = j;
            }
        }
        v[mindx] = i;
        visited[mindx] = 1;
    }
}
void arrangearrhavinnonegandzero(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        int minidx = -1;
        int min = INT_MAX;
        for (int j = 0; j < v.size(); j++)
        {
            if (min > v[j] && v[j] > 0)
            {
                min = v[j];
                minidx = j;
            }
        }
        v[minidx] = i * (-1);
    }
    for (int i = 0; i < v.size(); i++)
        v[i] *= -1;
}

int main()
{
    vector<int> arr = {19, 12, 23, 8, 16, 1, 2, 3, 4, 5, 6};
    arrangearrhavinnonegandzero(arr);
    arrangeforany(arr);
    for (auto i : arr)
        cout << i << " ";
}