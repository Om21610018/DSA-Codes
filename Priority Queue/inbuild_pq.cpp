#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> hp; //* Default priority queue is maxheap
    // priority_queue<int, vector<int>, less<int>> hp; // by default aisa hota hai
    hp.push(50);
    hp.push(55);
    hp.push(57);
    hp.push(12);
    hp.push(53);
    hp.push(12);
    hp.push(5);
    cout << hp.top() << endl;

    //*How to implement the minheap
    priority_queue<int, vector<int>, greater<int>> hp2; // this will create heap using vector and also deque can be used
    hp2.push(10);
    hp2.push(1);
    hp2.push(20);
    hp2.push(-20);
    hp2.push(13);
    hp2.push(18);
    cout << hp2.top() << endl;

    //* How to convert an vector to heap
    vector<int> arr = {2, 3, 1, 4, 5, 6, 7, 8, 1};
    priority_queue<int> hp3(arr.begin(), arr.end());
}