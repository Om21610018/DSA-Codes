#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> arr = {5, 1, 5, 5, 2, 3};
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    int sm = 0;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        sm *= 10;
        sm += arr[i];
    }
    int ssm = 0;
    cout << sm << endl;
    for (int i = arr.size() - 1; i >= 0; i--)
    {
        if (arr[i] != arr[i - 1])
        {
            swap(arr[i], arr[i - 1]);
            break;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        ssm *= 10;
        ssm += arr[i];
    }
    cout << ssm << endl;

    cout << "Sum is : " << sm + ssm << endl;
}