#include <bits/stdc++.h>
using namespace std;
void display(vector<int> v)
{
    for (auto x : v)
    {
        cout << x << " ";
    }
    cout << "" << endl;
}

void change1(vector<int> vtr) // this is pass by value and we are not taking reference of vector here
{
    // pass by value
    vtr[0] = 33;
}

void change2(vector<int> &vtr) // this is pass by reference
{
    vtr[0] = 33;
}
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);

    display(v);
    change1(v); // this is not pass by reference as case was in arrays it is pass by value
    cout << v[0] << endl;
    change2(v);
    cout << v[0] << endl;
}