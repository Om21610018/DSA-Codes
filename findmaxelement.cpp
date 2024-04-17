#include <iostream>
using namespace std;
int findmax(int *arr, int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}
int main()
{

    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int res = findmax(arr, size);
    cout << "Max element in array is : " << res << endl;
}
