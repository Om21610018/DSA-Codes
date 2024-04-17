#include <bits/stdc++.h>
using namespace std;
// no. of swaps : n-1
void selectionsort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minIdx = i;
        int min = arr[i];
        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] < min)
            {
                min = arr[j];
                minIdx = j;
            }
        }
        swap(arr[minIdx], arr[i]);
    }
}
int main()
{
    vector<int> arr = {2, 4, 3, 5, 1, 0, 233, -754, 5678};
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    selectionsort(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}