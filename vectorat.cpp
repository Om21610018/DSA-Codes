//* at()  and sort() :
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(10);
    v.push_back(11);
    v.push_back(12);
    v.push_back(13);
    v.push_back(14);

    cout << "v.at(1) : " << v.at(1) << endl;
    v.at(1) = 15;
    cout << "v.at(1) : " << v.at(1) << endl;
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
}