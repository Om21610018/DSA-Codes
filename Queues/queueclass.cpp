#include <bits/stdc++.h>
using namespace std;
class Queue
{
public:
    int f = -1;
    int b = -1;
    vector<int> arr;
    Queue(int n)
    {
        vector<int> v(n);
        arr = v;
    }
    void push(int val)
    {
        if (b == -1)
        {
            f = b = 0;
            arr[b] = val;
        }
        else if (b < arr.size() - 1)
        {
            b++;
            arr[b] = val;
        }
        else
            cout << "Queue is full";
    }
    void pop()
    {
        if (this->size() == 0)
            cout << "Queue is empty" << endl;
        else
            f++;
    }
    int size()
    {
        if (b == -1 && f == -1)
            return 0;
        return b - f + 1;
    }
    int front()
    {
        if (this->size() == 0)
        {
            cout << "Empty";
            return -1;
        }
        return arr[f];
    }
    int back()
    {
        if (this->size() == 0)
        {
            cout << "Empty";
            return -1;
        }
        return arr[b];
    }
    bool empty()
    {
        if (this->size() == 0)
            return true;
        else
            return false;
    }
    void display()
    {
        if (b == -1 && f == -1)
        {
            cout << "Empty hai" << endl;
            return;
        }
        for (int i = f; i <= b; i++)
            cout << arr[i] << " ";
        cout << "" << endl;
    }
};

int main()
{
    Queue q(2);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(60);
    cout << q.size() << endl;
    cout << q.front() << endl;
    cout << q.back() << endl;
    q.display();
}