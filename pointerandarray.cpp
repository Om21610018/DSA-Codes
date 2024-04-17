#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 4, 2, 7, 4};
    int *ptr = arr;
    cout << arr << endl;
    cout << &arr << endl;
    cout << ptr << endl;
    cout << &arr[0] << endl;

    cout << *ptr << endl;
    cout << *(ptr + 0) << " " << ptr[0] << endl; // *(ptr+1) == ptr[1]
    cout << *(ptr + 1) << " " << ptr[1] << endl;
    cout << *(ptr + 2) << " " << ptr[2] << endl;

    for (int i = 0; i < 5; i++, ptr++) // ptr++ ==   ptr = ptr + 1
        cout << *ptr << " ";
    ptr = arr; // *  as at the end the ptr is pointing to the next block out of array memory blocks
    cout << "" << endl;


    
    //****** Exciting way of printing an array : *******************8
    for (int i = 0; i < 5; i++) // ptr++ ==   ptr = ptr + 1
        cout << i[ptr] << " ";
    cout << "" << endl;

    for (int i = 0; i < 5; i++, ptr++) // ptr++ ==   ptr = ptr + 1
        cout << i[arr] << " ";
}
/*
//* When you pass an array as an argument to a function, what actually gets passed ?
- address of the array
- address of the first element of the array
- size of array is never passed



*IMPORTANT : arr == &arr[0] == &arr
* but don't pass the &arr in the function as the function having formal arguments gives the type error
*/