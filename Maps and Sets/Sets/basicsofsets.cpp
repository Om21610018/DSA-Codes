#include <bits/stdc++.h>
using namespace std;

int main()
{

    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(4); // as repetition is not allowed in set
    s.insert(1); // as repetition is not allowed in set

    cout << s.size() << endl;
    s.erase(5);

    cout << s.size() << endl;

    int target = 4;
    auto iter = s.find(target);
    cout << "HEHEHEHE" << *iter << endl;
    if (s.find(target) != s.end())
    {
        cout << "Target exists" << endl;
    }
    else
        cout << "Target not exists" << endl;

    // for (int ele : s)
    //     cout << ele << " ";
}