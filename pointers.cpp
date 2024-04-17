//* Pointers in C++ :
#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void swapref(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void swap(int *a, int *b)
{
    int t = *a;
    *a = *b;
    *b = t;
}
int main()
{
    // int i;
    // float f;
    // char ch;
    // double d;
    // bool b;
    // long l;
    system("cls");
    // cout << "Size of int : " << sizeof(i) << endl;
    // cout << "Size of float : " << sizeof(f) << endl;
    // cout << "Size of char : " << sizeof(ch) << endl;
    // cout << "Size of double : " << sizeof(d) << endl;
    // cout << "Size of bool : " << sizeof(b) << endl;
    // cout << "Size of long : " << sizeof(l) << endl;
    // cout << "Size of long long: " << sizeof(long long) << endl;
    // cout << "Size of unsigned long long: " << sizeof(unsigned long long) << endl;

    // int x; // just after declaration the memory is allocated to the variable.
    // cout<<"address of x : "<<&x<<endl;

    // char c = 's';
    // cout<<"Address of c : "<<&c<<endl;

    // int x = 5;
    // int y = 5;
    // cout << "Address of x : " << &x << endl;
    // cout << "Address of y : " << &y << endl;

    // int *adx = &x; // * we have stored the address of x inside the adx pointer
    // cout << "Address of x : " << adx << endl;
    // //* Use same type of pointer whose data ur going to store in it.
    // cout << "Value at address of x : " << *adx << endl;
    // cout << "Value at address of x : " << *(&x) << endl;

    // //* Dereference operators  (*):
    // int a = 55;
    // int *ada = &a;
    // cout << "value at address of a : " << *ada << endl;

    // *ada = 66; // this will change the value of at the address of 'a'
    // cout << "Value at address of a : " << *ada << endl;
    // cout << "Value at a : " << a << endl;

    // int x1 = 5;
    // int x2 = 10;
    // int *adx1 = &x1;
    // int *adx2 = &x2;
    // cout << "Sum of x1 and x2 : " << (*adx1) + (*adx2) << endl;

    // //* Experiment : 1 --->
    // // we can take input from varaible as well as from the use of pointers
    // int t, q;
    // int *p1 = &t;
    // int *p2 = &q;
    // cout << "Enter the first no. : " << endl;
    // cin >> *p1;
    // cout << "Enter the second no. : " << endl;
    // cin >> *p2;
    // cout << "Sum is : " << *p1 + *p2 << endl;

    //* Pointers Syntax :

    // int *x , *y;---------------->   int *x;
    //                                 int *y;
    //
    //
    //
    //
    //
    //

    //* pass by reference :

    // int n1;
    // int n2;
    // cout << "Enter the value of n1 : " << endl;
    // cin >> n1;
    // cout << "Enter the value of n2 : " << endl;
    // cin >> n2;
    // swap(&n1, &n2);
    // cout << "After swapping : " << endl;
    // cout << "Value of n1 : " << n1 << endl;
    // cout << "Value of n2 : " << n2 << endl;

    //*  pass by reference using alias i.e. by reference :
    // swapref(n1, n2);
    // cout << "After swapping : " << endl;
    // cout << "Value of n1 : " << n1 << endl;
    // cout << "Value of n2 : " << n2 << endl;

    //* Pointers arithmetic :
    int x = 5;
    int *adx = &x;
    // *adx++; this will be an error
    // (*adx)++;// operator precendence matters
    ++*adx; // ++(*adx) ====> (*adx)=(*adx)+1
    cout << *adx << endl;

    //* Double pointers ;
    int number = 5;
    int *ptr = &number;
    int **ptrptr = &ptr;
    int ***ptrptrptr = &ptrptr;
    cout << *ptr << endl;
    cout << **ptrptr << endl;
    cout << ***ptrptrptr << endl;
    cout << ptrptr << endl;
    cout << &ptr << endl;

    getch();
}
