#include <bits/stdc++.h>
using namespace std;
void insertionsort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        for (int j = i + 1; j >= 1; j--)
        {
            if (arr[j] < arr[j - 1])
                swap(arr[j], arr[j - 1]);
            else
                break;
        }
    }
}
int main()
{
    vector<int> arr = {2, 4, 3, 5, 1, 0, 233, -754, 5678};
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    insertionsort(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}