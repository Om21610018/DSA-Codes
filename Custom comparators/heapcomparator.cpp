#include <bits/stdc++.h>
using namespace std;

class CustomComparator
{
public:
    bool operator()(int &a, int &b)
    {
        return a > b;
    }
};

bool cmp(int a, int b)
{
    return a < b;
}
int main()
{
    // priority_queue<int, vector<int>, less<int>> pq;         // by default max priority queue hoti hai yeh
    priority_queue<int, vector<int>, greater<int>> pq2; // Min heap implementation
    // priority_queue<int, vector<int>, CustomComparator> pq; // Min heap implementation
    priority_queue<int, vector<int>, function<bool(int, int)>> pq(cmp);

    pq.push(20);
    pq.push(43);
    pq.push(10);
    pq.push(4);
    while (!pq.empty())
    {
        cout << pq.top() << " ";
        pq.pop();
    }

    vector<int> arr = {4, 5, 6, 3, 2, 3, 2, 1};
    // priority_queue prior(arr.begin(), arr.end());

    // priority_queue<class T, class Container, class Comparator>

    return 0;
}