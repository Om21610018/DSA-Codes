#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;
int main()
{
    system("cls");
    int n;
    cout << "Enter the number of students :  " << endl;
    cin >> n;
    int marks[n];

    cout << "Enter the marks : " << endl;
    for (int i = 0; i < n; i++)
        cin >> marks[i];

    cout << "Roll no. of students having less than 35 : " << endl;
    for (int i = 0; i < n; i++)
        if (marks[i] < 35)
            cout << i << " ";
    getch();
}
