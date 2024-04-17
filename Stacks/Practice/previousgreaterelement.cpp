#include <bits/stdc++.h>
using namespace std;

vector<int> previous_greater_element2(vector<int> &arr) // Optimised using stack
{                                                       // T.C. : O(n)
    stack<int> st;
    vector<int> pge(arr.size());
    int n = arr.size();
    pge[0] = -1;
    st.push(arr[0]);
    for (int i = 1; i < n; i++)
    {
        while (!st.empty() && st.top() <= arr[i]) // pop till we get greater element than the arr[i]
            st.pop();
        if (st.empty()) // if stack is empty no pge is there
            pge[i] = -1;
        else // else push the top element of stack
            pge[i] = st.top();
        st.push(arr[i]); // prepare for next step
    }
    return pge;
}
int main()
{
    vector<int> ans;
    vector<int> arr = {3, 1, 7, 7, 4, 6, 2, 3};
    ans = previous_greater_element2(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}