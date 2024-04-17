#include <iostream>
using namespace std;
// * WHEN WE PASS THE ARRAY TO THE FUNCTION IT IS PASS BY REFERENCE ALWAYS.
void display(int a[], int size)
{
    // int n = sizeof(a)/sizeof(a[0]); --> it will return the size of pointer not the size of the array as it is the pointer which is pointing to the first index of array but jaha declare and initialize kiya hai bss vha hi ye kaam krega
    // * so it is always recommended to send the size along with the array
    for (int i = 0; i < size; i++)
        cout << a[i] << " ";

    cout << "" << endl;
}

void change(int *C /* or int a[] */)
{
    C[3] = 55;
}

//* ALL arr,b,c are pointing to the same memory block
int main()
{
    int arr[] = {1, 4, 2, 7, 4};
    // accessing the elements of array in another function
    // updation , pass by value / reference
    cout << arr << endl;
    cout << &arr << endl;
    cout << &arr[0] << endl;
    display(arr, 5); // this is pass by reference not by value as we are passing the base address of first block of arr so it is pass by reference.
    change(arr);
    display(arr, 5);
}
/*
//* When you pass an array as an argument to a function, what actually gets passed ?
- address of the array
- address of the first element of the array
- size of array is never passed



*IMPORTANT : arr == &arr[0] == &arr
* but don't pass the &arr in the function as the function having formal arguments gives the type error
*/