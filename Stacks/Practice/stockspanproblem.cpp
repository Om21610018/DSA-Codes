#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;

vector<int> previous_greater_index(vector<int> &arr) // Optimised using stack
{                                                    // T.C. : O(n)
    stack<int> st;
    vector<int> pgi(arr.size());
    int n = arr.size();
    pgi[0] = -1;
    st.push(0);
    pgi[0] = 0 - pgi[0];
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && arr[st.top()] <= arr[i]) // pop till we get greater element than the arr[i]
            st.pop();
        if (st.empty()) // if stack is empty no pgi is there
            pgi[i] = -1;
        else // else push the top element of stack
            pgi[i] = st.top();
        pgi[i] = i - pgi[i]; // direct calculation
        st.push(i);          // prepare for next step
    }
    return pgi;
}
int main()
{
    vector<int> ans;
    vector<int> arr = {100, 80, 60, 81, 70, 60, 75, 85};
    ans = previous_greater_index(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    cout << "" << endl;
    // stock span --> directly calculated on pgi
    // for (int i = 0; i < ans.size(); i++)
    //     cout << i - ans[i] << " ";
}
