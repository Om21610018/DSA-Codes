

#include <bits/stdc++.h>
using namespace std;

vector<int> nsi(vector<int> &arr)
{
    vector<int> ans(arr.size());
    stack<int> st;
    int n = arr.size();
    ans[n - 1] = n;
    st.push(n - 1);
    for (int i = n - 2; i >= 0; i--)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();

        if (st.empty())
            ans[i] = n;
        else
            ans[i] = st.top();
        st.push(i);
    }
    return ans;
}
vector<int> psi(vector<int> &arr)
{
    vector<int> ans(arr.size());
    stack<int> st;
    ans[0] = -1; // alag hai thoda
    st.push(0);
    for (int i = 1; i < arr.size(); i++)
    {
        while (!st.empty() && arr[st.top()] >= arr[i])
            st.pop();

        if (st.empty())
            ans[i] = -1;
        else
            ans[i] = st.top();
        st.push(i);
    }
    return ans;
}

int largestRectangleArea(vector<int> &heights)
{
    vector<int> ns = nsi(heights);
    vector<int> ps = psi(heights);
    for (int i = 0; i < ns.size(); i++)
    {
        cout << ns[i] << " ";
    }
    cout << "" << endl;
    for (int i = 0; i < ns.size(); i++)
    {
        cout << ps[i] << " ";
    }
    int maxi = INT_MIN;
    cout << "" << endl;
    for (int i = 0; i < heights.size(); i++)
    {
        ns[i] = (ns[i] - ps[i] - 1) * heights[i];
        cout << ns[i] << " ";
        maxi = max(ns[i], maxi);
    }
    return maxi;
}

int main()
{
    vector<int> heights = {0, 0};
    cout << largestRectangleArea(heights);
}