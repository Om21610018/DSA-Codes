// Sort 0's 1's and 2's i.e. sort colors
#include <bits/stdc++.h>
using namespace std;

void sortcolorm1(vector<int> &v)
{
    //* Two pass solution approach :
    int cnt0 = 0;
    int cnt1 = 0;
    int cnt2 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            cnt0++;
        else if (v[i] == 1)
            cnt1++;
        else if (v[i] == 2)
            cnt2++;
    }
    for (int i = 0; i < v.size(); i++)
    {
        if (i < cnt0)
            v[i] = 0;
        else if (i < cnt1 + cnt0) // *this is important
            v[i] = 1;
        else if (i < cnt2 + cnt1 + cnt0) // *this is important
            v[i] = 2;
    }
}

void sortcolorm2(vector<int> &v)
{
    //* 3 pointer approach :  (Dutch flag algorithm)
    /*
      -  take three pointers low = 0 , mid = 0, and high = v.size()-1;
      -  then there must be 0's in between 0  to low-1
      -  2's in between high to v.size()-1;
      -  1's in between low to mid-1

    */
    int low = 0, mid = 0, high = v.size() - 1;
    while (mid < high)
    {
        if (v[mid] == 2)
        {
            swap(v[mid], v[high]);
            high--;
        }
        else if (v[mid] == 0)
        {
            swap(v[mid], v[low]);
            low++;
            mid++;
        }
        else if (v[mid] == 1)
            mid++;
    }
}
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(1);
    v.push_back(2);
    v.push_back(0);

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "" << endl;
    sortcolorm2(v);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "" << endl;
}