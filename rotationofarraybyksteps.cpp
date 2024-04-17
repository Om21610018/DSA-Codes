//* circular array :
#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
    int t = a;
    a = b;
    b = t;
}

void reversepart(int start, int end, vector<int> &v)
{
    // reverse(v.begin() + start, v.begin() + end + 1);

    while (start < end)
    {
        swap(v[start], v[end]);
        start++;
        end--;
    }
}
void reversearraybyk(vector<int> &v, int k)
{
    int n = v.size() - 1;
    reversepart(0, n - k, v);
    reversepart(n - k + 1, n, v);
    reversepart(0, n, v);
}

void display(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "" << endl;
}
int main()
{

    int n;
    cout << "Enter the size of vector : " << endl;
    cin >> n;
    vector<int> v;
    cout << "Enter the elements : " << endl;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        v.push_back(t);
    }
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }

    cout << "" << endl;
    int k;
    cout << "Enter the steps : " << endl;
    cin >> k;

    reversearraybyk(v, k % n);
    display(v);
}