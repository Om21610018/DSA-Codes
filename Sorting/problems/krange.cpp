#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 3, 10, 3};
    int n = v.size();
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << "" << endl;
    float kmin = (float)(INT_MIN);
    float kmax = (float)(INT_MAX);
    bool flag = true;
    for (int i = 0; i < n - 1; i++)
    {
        if (v[i] >= v[i + 1]) // kmin
        {
            float t = (v[i] + v[i + 1]) / 2.0;
            kmin = max(kmin, t);
        }
        else // kmax
        {
            float t = (v[i] + v[i + 1]) / 2.0;
            kmax = min(kmax, t);
        }

        if (kmin > kmax)
        {
            flag == false;
            break;
        }
    }
    if (flag == false)
        cout << -1;
    else if (kmin == kmax)
    {
        if (kmin - (int)kmin == 0) // if both are integers
            cout << "Only one value of k" << kmin;
        cout << -1;
    }
    else
    {
        if (kmin - (int)kmin > 0)
            kmin = (int)kmin + 1;
        cout << "Range of k is : " << kmin << ":" << (int)kmax << endl;
    }
}