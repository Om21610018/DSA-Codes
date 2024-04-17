#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int sum = 0;
    for (int i = 0; i < size; i++)
        sum += arr[i];

    cout << "Sum of arr is : " << sum << endl;
}
