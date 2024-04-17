//* Trapping rain water :
// - needs //* Previous greatest element array
// - needs //* Next greatest element array
// - create the array consisting of min of nge and pge arr and subtract the new arr element from given arr
#include <bits/stdc++.h>
using namespace std;
vector<int> getpgearr(vector<int> &v)
{
    int max = -1;
    vector<int> pge;
    for (int i = 0; i < v.size(); i++)
    {
        pge.push_back(max);

        if (v[i] > max)
            max = v[i];
    }

    return pge;
}
vector<int> getngearr(vector<int> &v)
{
    int max = -1;
    vector<int> nge(v.size());
    for (int i = v.size() - 1; i >= 0; i--)
    {
        nge[i] = max;
        if (v[i] > max)
            max = v[i];
    }
    return nge;
}
vector<int> solve(vector<int> &pge, vector<int> &nge)
{
    vector<int> res;
    for (int i = 0; i < pge.size(); i++)
    {
        res.push_back(min(pge[i], nge[i]));
    }
    return res;
}

int gettrapwater(vector<int> &v, vector<int> &res)
{
    int finalres = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (res[i] > v[i])
        {
            finalres += res[i] - v[i];
        }
    }
    return finalres;
}
int main()
{
    vector<int> v = {0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    vector<int> pge = getpgearr(v);
    vector<int> nge = getngearr(v);
    vector<int> res = solve(pge, nge);
    int finalans = gettrapwater(v, res);
    cout << "Trapped water is : " << finalans << endl;
    // for (int i = 0; i < nge.size(); i++)
    // {
    //     cout << nge[i] << " ";
    // }
}