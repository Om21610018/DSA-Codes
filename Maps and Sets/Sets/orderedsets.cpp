#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(10);
    s.insert(1);
    s.insert(4);
    s.insert(7);

    //*Insertion ,Deletion, Searching: O(log(n))

    for (auto x : s)
        cout << x << " ";
    cout << endl;
    map<int, int> m;
    m[1] = 30;
    m[3] = 10;
    m[2] = 20;
    //* Keys are sorted on the order not the values are sorted in the order
    //* string type of keys are sorted in lexographical order
    for (auto ele : m)
        cout << ele.first << " " << ele.second << endl;
}