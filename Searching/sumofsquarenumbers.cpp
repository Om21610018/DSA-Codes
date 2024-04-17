#include <bits/stdc++.h>
using namespace std;
// sqrt(x) is function takes O(1) time
void sumofsquares2(int c, int &a, int &b)
{
    for (int i = 0; i < c / 2; i++)
    {
        for (int j = c / 2 + 1; j >= 0; j--)
        {
            if (i * i + j * j == c)
            {
                a = i;
                b = j;
                return;
            }
        }
    }
}

bool isPS(int x)
{
    int root = sqrt(x);
    return (root * root == x);
}

void sumofsquares(int c, int &a, int &b)
{
    int x = 0;
    int y = c;
    while (x <= y)
    {
        if (isPS(x) && isPS(y))
        {
            a = sqrt(x);
            b = sqrt(y);
            return;
        }
        else if (!isPS(y))
        {
            y = (int)sqrt(y) * (int)sqrt(y); // y kam kro
            x = c - y;
        }
        else
        {
            // /!isPS(x)
            x = ((int)sqrt(x) + 1) * ((int)sqrt(x) + 1); // x ko bdhao
            y = c - x;
        }
    }
}
int main()
{

    int c = 45;
    int a = -1, b = -1;
    sumofsquares(c, a, b);
    cout << c << " = " << a << "^2 + " << b << "^2";
}