#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
bool linearsearch(int *arr, int key, int size, int &loc)
{
    for (int i = 0; i < size; i++)
    {
        loc = i;
        if (arr[i] == key)
            return true;
    }
    return false;
}
int main()
{
    int loc = -1;
    int size;
    cout << "Enter the size of array : " << endl;
    cin >> size;
    int arr[size];
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < size; i++)
        cin >> arr[i];

    int key;
    cout << "Enter the key to be found : " << endl;
    cin >> key;
    bool res = linearsearch(arr, key, size, loc);
    if (res == true)
        cout << "Key found at index : " << loc << endl;
    else
        cout << "Key not found" << endl;
}
