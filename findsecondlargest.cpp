/*
 -  find the largest element i.e. max
 -  traverse through the array , if(smax < arr[i] && arr[i] != max)


*/
#include <iostream>
using namespace std;

int main()
{

    int size;
    int max = INT_MIN;
    int smax = INT_MIN;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
            max = arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (smax < arr[i] && arr[i] != max)
            smax = arr[i];
    }

    cout << "second Max element in array is : " << smax << endl;
}
