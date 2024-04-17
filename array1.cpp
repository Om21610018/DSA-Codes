/*
* Array is data structure  -> i.e. which stores the data
  Array is collection of similar data types
  Array has contiguous memory allocation


Syntax :
        int x[7]; --> declaration   #*by default after declaration array block contains garbage values.
        int a(25); --> wrong declaration
        int size = 10 , b[size]; ---> correct   int size = 10;
                                                int b[size];

        int c = {0,1,2}; ---> wrong declaration


        *             x  =   &x =  &x[0]  (always in arrays)

        * initialization :

        x[0] =
        x[1] =
        x[2] =
        x[3] = 5

        x[3] = 8  --> can update the value

        int arr[8]={1,2,3,4,5,6,7,8}




        *size and sizeof operator :

        int arr[] = {2,3,4,5,6,7,4,3,4,5,4,3};
        int n = sizeof(arr)/sizeof(arr[0]); --> will give the size of the array

*/

#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    // int arr[];  error can give the size dynamically as it is static data structure
    int arr1[5];
    int arr2[7] = {1, 2, 3, 4, 5};
    int arr3[] = {3, 4, 5, 6, 7, 8, 9, 10};
    system("cls");

    cout<<arr1[0]<<endl;
    cout << "Size of arr3 : " << sizeof(arr3) / sizeof(arr3[0]) << endl;
    cout << "Enter the 5 elements in an array 1 : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cin >> arr1[i];
    }
    cout << "arr1 : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr1[i] << " ";
    }

    cout << "arr2 : " << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << "arr3 : " << endl;
    for (int i = 0; i < 8; i++)
    {
        cout << arr3[i] << " ";
    }
    getch();
}
