#include <bits/stdc++.h>
using namespace std;
int firstoccur(vector<int> &v, int x)
{
    int low = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == x)
        {
            if (v[mid - 1] == x)
                high = mid - 1;
            else
                return mid;
        }
        else if (v[mid] > x)
        {
            high = mid - 1;
        }
        else if (v[mid] < x)
        {
            low = mid + 1;
        }
    }
    return -1;
}
int lastoccur(vector<int> &v, int x)
{
    int low = 0;
    int high = v.size() - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (v[mid] == x)
        {
            if (v[mid + 1] == x)
                low = mid + 1;
            else
                return mid;
        }
        else if (v[mid] > x)
        {
            high = mid - 1;
        }
        else if (v[mid] < x)
        {
            low = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> v = {1, 1, 2, 2, 3, 3, 3, 3, 3, 4, 4, 5, 6, 9};
    int x = 1;
    int fir = firstoccur(v, x);
    int las = lastoccur(v, x);
    cout << "First occurence of " << x << " : " << fir << " and last occurence is : " << las << endl;
}