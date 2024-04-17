#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, int> p;
    // p.first = 1;
    // p.second = 5;
    // cout << p.first << " " << p.second << endl;
    // pair<string, int> q;
    // q.first = "Hello";
    // q.second = 5;
    // cout << q.first << " " << q.second << endl;
    unordered_map<string, int> m;
    //*Insertion Method : 1
    pair<string, int> p1;
    p1.first = "Hello";
    p1.second = 55;
    // pair<string, int> p2;
    // p2.first = "Gello";
    // p2.second = 53;
    // pair<string, int> p3;
    // p3.first = "Wollo";
    // p3.second = 51;

    m.insert(p1);
    // m.insert(p2);
    // m.insert(p3);

    //*Insertion Method : 2
    m["GELLO"] = 100;
    m["Fellow"] = 1000;

    //*Insertion Method : 3
    m.insert({"wow", 350});

    //*Insertion Method : 4
    m.insert(make_pair("wowji", 5555));

    for (pair<string, int> ele : m)
        cout << ele.first << " " << ele.second << endl;

    cout << "" << endl;
    m.erase("Hello");
    m.erase("ajslfksajdlkfjsd"); // will not throw an error
    for (pair<string, int> ele : m)
        cout << ele.first << " " << ele.second << endl;
    cout << "" << endl;
    for (auto ele : m)
        cout << ele.first << " " << ele.second << endl;

    cout << m.size() << endl;
    
}
