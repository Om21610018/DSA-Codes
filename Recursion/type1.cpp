#include <bits/stdc++.h>
using namespace std;
void printInAscending(int n)
{
    if (n == 0)
        return;
    printInAscending(n - 1);
    cout << n << " ";
}

void printInDescending(int n)
{
    if (n == 0)
        return;
    cout << n << " ";
    printInDescending(n - 1);
}
int main()
{
    int n;
    cout << "Enter the value of N : " << endl;
    cin >> n;
    printInAscending(n);
    cout << "" << endl;
    printInDescending(n);
}