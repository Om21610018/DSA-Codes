// using vector and oops
#include <bits/stdc++.h>
using namespace std;

class Stack
{
public:
    vector<int> arr;
    int idx;
    Stack()
    {
        idx = -1;
    }
    void pop()
    {
        if (this->size() == 0)
        {
            cout << "Stack empty";
            return;
        }
        idx--;
    }
    void push(int val)
    {

        idx++;
        arr.push_back(val);
    }

    int top()
    {
        if (this->size() <= 0)
        {
            cout << "Invalid" << endl;
            return -1;
        }
        return arr[idx];
    }
    int size()
    {
        return idx + 1;
    }
};
int main()
{
    Stack st;
    st.push(40);
    cout << st.top() << endl;
    st.push(50);
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();
    cout << st.top() << endl;
    cout << st.size() << endl;
    st.pop();

    cout << st.size() << endl;
}