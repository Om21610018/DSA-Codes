#include <bits/stdc++.h>
using namespace std;
vector<int> next_greater_element(vector<int> &arr) // BruteForce (Andhi taqat)
{                                                  // T.C. : O(n^2)
    vector<int> ans(arr.size(), -1);               // by default -1 diya hai so no need to check for other extra cases having no nge
    for (int i = 0; i < arr.size(); i++)
    {

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[j] > arr[i])
            {
                ans[i] = arr[j];
                break;
            }
        }
    }
    return ans;
}

// using stack pop ans push
vector<int> next_greater_element2(vector<int> &arr) // Optimised using stack
{                                                   // T.C. : O(n)
    stack<int> st;
    vector<int> nge(arr.size());
    int n = arr.size();
    nge[n - 1] = -1;
    st.push(arr[n - 1]);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && st.top() <= arr[i]) // pop till we get greater element than the arr[i]
            st.pop();
        if (st.empty()) // if stack is empty no nge is there
            nge[i] = -1;
        else // else push the top element of stack
            nge[i] = st.top();
        st.push(arr[i]); // prepare for next step
    }
    return nge;
}

vector<int> nextSmallerElement(vector<int> &arr, int n)
{
    vector<int> ans;
    stack<int> st;
    st.push(-1);

    for (int i = n - 1; i >= 0; i--)
    {
        if (st.top() < arr[i])
        {
            ans.push_back(st.top());
        }
        else
        {
            while (st.top() >= arr[i])
                st.pop();
            ans.push_back(st.top());
        }
        st.push(arr[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main()
{
    vector<int> ans;
    vector<int> arr = {3, 1, 7, 7, 4, 6, 2, 3};
    ans = next_greater_element2(arr);
    for (int i = 0; i < arr.size(); i++)
        cout << arr[i] << " ";
    cout << "" << endl;
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}