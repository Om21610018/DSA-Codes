#include <bits/stdc++.h>
using namespace std;
int mazepath(int sr, int sc, int er, int ec)
{
    if (sr == er && sc == ec)
        return 1;
    if (sr > er || sc > ec)
        return 0;
    return mazepath(sr + 1, sc, er, ec) + mazepath(sr, sc + 1, er, ec);
}

int maze(int sr, int sc, int er, int ec) // going from sr to er and sc to ec i.e. 0,0 to er,ec
{
    if (sr > er || sc > ec)
        return 0;
    if (sr == er && sc == ec)
        return 1;
    int rightWays = maze(sr + 1, sc, er, ec);
    int downWays = maze(sr, sc + 1, er, ec);
    int totalWays = rightWays + downWays;
    return totalWays;
}

int maze2(int r, int c) // r,c to 1,1
{
    if (r < 0 || c < 0)
        return 0;
    if (r == 1 && c == 1)
        return 1;
    return maze2(r - 1, c) + maze2(r, c - 1);
}

void printpath(int sr, int sc, int er, int ec, string s)
{
    if (sr > er || sc > ec)
        return;
    if (sr == er && sc == ec)
    {
        cout << s << endl;
        return;
    }
    printpath(sr + 1, sc, er, ec, s + 'R');
    printpath(sr, sc + 1, er, ec, s + 'D');
}
int main()
{
    cout << maze(1, 1, 3, 3) << endl;
    cout << maze2(3, 3) << endl;
}