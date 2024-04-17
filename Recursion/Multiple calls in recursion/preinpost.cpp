#include <bits/stdc++.h>
using namespace std;
/*

Kaam -> Pre
Call-1
Kaam -> In
Call-2
Kaam -> Post




*/

void pip(int n) // Euler's Tree Diagram
{
    if (n == 0)
        return;
    cout << "Pre " << n << endl;
    pip(n - 1);
    cout << "In " << n << endl;
    pip(n - 1);
    cout << "Post " << n << endl;
}
void printzigzag(int n)
{
    if(n==0)
    return;
    cout << n;
    printzigzag(n - 1);
    cout << n;
    printzigzag(n - 1);
    cout << n;
}
int main()
{
    // pip(3);
    printzigzag(10);
}