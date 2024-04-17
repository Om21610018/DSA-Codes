// count no. of triplets whose sum is x :
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // numbers can be repeated but indices can't be repeated
    vector<int> v = {1, 2, 3, 2, 5, 1};
    int x = 6;
    int cnt = 0;
    for (int i = 0; i < v.size() - 2; i++)
    {
        for (int j = i + 1; j < v.size() - 1; j++)
        {
            for (int k = j + 1; k < v.size(); k++)
            {
                if (v[i] + v[j] + v[k] == x)
                {
                    cout << v[i] << " " << v[j] << " " << v[k] << endl;
                    cnt++;
                }
            }
        }
    }
    cout << "count is : " << cnt << endl;
}