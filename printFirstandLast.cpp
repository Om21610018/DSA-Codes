#include <iostream>
#include <stdlib.h>
#include <conio.h>
using namespace std;

void process(int *adf, int *adl, int num)
{
    *adl = num % 10;
    while (num > 9)
    {
        num /= 10;
    }
    *adf = num;
}
int main()
{
    int num;
    system("cls");
    cout << "Enter the number : " << endl;
    cin >> num;
    int fdigit, ldigit;
    int *adf = &fdigit, *adl = &ldigit;
    process(adf, adl, num);
    cout << "First digit : " << fdigit << "\nLast digit : " << ldigit << endl;
    // '\0' Null charachter  ASCII value of this char is 0
    getch();
}
