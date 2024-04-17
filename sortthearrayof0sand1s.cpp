/*
 * sort the array in O(n) time complexity :
 */
#include <bits/stdc++.h>
using namespace std;
void sort01m1(vector<int> &v)
{
    // total time taken O(2n)  == O(n)
    int cnt0 = 0;
    int cnt1 = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == 0)
            cnt0++;
        else
            cnt1++;
    }
    // for (int i = 0; i < cnt0; i++)
    //     v[i] = 0;
    // for (int i = cnt0; i < v.size(); i++)
    //     v[i] = 1;

    // or
    for (int i = 0; i < v.size(); i++)
    {
        if (i < cnt0)
            v[i] = 0;
        else
            v[i] = 1;
    }
}

void sort01m2(vector<int> &v)
{
    int i = 0;
    int j = v.size() - 1;
    while (i < j)
    {
        // way 1 :
        // if (v[i] == 0)
        //     i++;
        // if (v[j] == 1)
        //     j--;
        // if (i > j)
        //     break;
        // if (v[i] == 1 && v[j] == 0)
        // {
        //     swap(v[i], v[j]);
        //     i++;
        //     j--;
        // }

        // way 2
        // if (v[i] == 1 && v[j] == 0)
        // {
        //     swap(v[i], v[j]);
        //     i++;
        //     j--;
        // }
        // if (v[i] == 0)
        //     i++;
        // if (v[j] == 1)
        //     j--;

        // way 3 :
        if (v[i] == 0)
            i++;
        else if (v[j] == 1)
            j--;
        else if (v[i] == 1 && v[j] == 0)
        {
            swap(v[i], v[j]);
            i++;
            j--;
        }
    }
}
// 1 1 0 0 1 1 1 0
int main()
{
    vector<int> v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);

    //* This is not the right way for solving this in O(n)
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }
    // cout << "" << endl;
    // sort(v.begin(), v.end());
    // for (auto i : v)
    // {
    //     cout << i << " ";
    // }

    //*Method 1 : Two pass method --->
    /*
      - take count of 0's and 1's in one pass
      - in second pass just overwrite the 0's and 1's in sorted order
    */

    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "" << endl;
    sort01m2(v);
    for (auto i : v)
    {
        cout << i << " ";
    }
    cout << "" << endl;

    //* Method 2 -> two pointers method :
    /*
       - take two pointers
       - 0's should be at left
       - 1's should be at right
       - swap it
    */
}