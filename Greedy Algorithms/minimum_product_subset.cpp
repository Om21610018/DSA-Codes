#include <bits/stdc++.h>
using namespace std;

int minProduct(vector<int> &arr)
{
    int cn = 0; // count of negatives;
    int cz = 0; // count of zeros;
    int cp = 0; // count of positives;
    int pp = 1; // product of positives;
    int pn = 1; // product of negatives;
    int biggest_negative = INT_MIN;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
            cz++;
        if (arr[i] < 0)
        {
            cn++;
            pn *= arr[i];
            biggest_negative = max(biggest_negative, arr[i]);
        }
        if (arr[i] > 0)
        {
            cp++;
            pp *= arr[i];
        }
    }
    if (cn == 0)
    {
        if (cz > 0)
            return 0;
        else
        {
            auto it = min_element(arr.begin(), arr.end());
            return *it;
        }
    }
    else
    {
        //*Even number of negatives
        if (cn % 2 == 0)
        {
            pn /= (biggest_negative);
            return pn * pp;
        }
        else
        {
            //*Odd number of negatives
            return pn * pp;
        }
    }
}

int main()
{
    vector<int> arr = {-3, -2, 1, 4, -5, -2};
    cout << minProduct(arr) << endl;
}