#include <bits/stdc++.h>
using namespace std;
void display(int *arr, int n, int idx)
{
    if (idx == n)
        return;
    cout << arr[idx] << " ";
    display(arr, n, idx + 1);
}

void display2(int *arr, int n)
{
    if (n <= 0)
        return;
    display2(arr, n - 1);
    cout << arr[n-1] << " ";
}
int main()
{
    int arr[] = {2, 3, 4, 5, 6, 7, 8};
    int n = sizeof(arr) / sizeof(int);
    display(arr, n, 0); // array,size,index
    cout << "" << endl;
    display2(arr, n);
}