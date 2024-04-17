//*Push zeroes to end while maintaining the relative order of other elements
#include <bits/stdc++.h>
using namespace std;
void bubblesort3(vector<int> &v) // Optimized bubble sort
{
    for (int i = 0; i < v.size() - 1; i++)
    {
        for (int j = 0; j < v.size() - 1 - i; j++)
        {
            if (v[j] == 0)
            {
                swap(v[j], v[j + 1]);
            }
        }
    }
}
int main()
{
    vector<int> arr = {5, 0, 1, 2, 0, 0, 4, 0, 3};
    bubblesort3(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
}