#include <iostream>
using namespace std;
int noofelements(int *arr, int size, int x)
{
    int cnt = 0;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > x)
            cnt++;
    }
    return cnt;
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

    int x;
    cout << "Enter the x : " << endl;
    cin >> x;

    int res = noofelements(arr, size, x);
    cout << "Number of elements greater than " << x << " in array  : " << res << endl;
}
