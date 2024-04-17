//* Merge two sorted arrays :
#include <bits/stdc++.h>
using namespace std;
void mergetwosortedarrays(vector<int> &v1, vector<int> &v2, vector<int> &v3)
{
    // 3 pointer approach
    int i = 0, j = 0, k = 0;
    while (i < v1.size() && j < v2.size())
    {
        if (v1[i] < v2[j])
        {
            v3[k] = v1[i];
            i++;
            k++;
        }
        else
        {
            v3[k] = v2[j];
            j++;
            k++;
        }
    }

    while (i < v1.size())
    {
        v3[k] = v1[i];
        i++;
        k++;
    }
    while (j < v2.size())
    {
        v3[k] = v2[j];
        j++;
        k++;
    }
}
int main()
{
    vector<int> v1 = {1, 2, 4, 4, 5, 8};
    vector<int> v2 = {2, 3, 6, 7, 10};
    vector<int> v3(v1.size() + v2.size());
    cout << "v1 : " << endl;
    for (auto i : v1)
    {
        cout << i << " ";
    }
    cout << "v2 : " << endl;
    for (auto i : v2)
    {
        cout << i << " ";
    }
    cout << "" << endl;
    mergetwosortedarrays(v1, v2, v3);
    cout << "v3 : " << endl;
    for (auto i : v3)
    {
        cout << i << " ";
    }
}