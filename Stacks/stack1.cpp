#include <bits/stdc++.h>
using namespace std;
void displayrec(stack<int> &st) // original stack
{                               // T.C. : O(n)  , S.C. : O(n)
    if (st.empty())
        return;
    int num = st.top();
    cout << num << " ";
    st.pop();
    displayrec(st);
    st.push(num);
}

void displayrecrev(stack<int> &st)
{
    if (st.empty())
        return;
    int num = st.top();
    st.pop();
    displayrecrev(st);
    cout << num << " ";
    st.push(num);
}

void display(stack<int> st) // copy of original stack
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
}

void display2(stack<int> &st)
{
    // using extra stack
    stack<int> temp;
    while (!st.empty())
    {
        cout << st.top() << " ";
        temp.push(st.top());
        st.pop();
    }
    // putting elements back from temp to st
    while (!temp.empty())
    {
        st.push(temp.top());
        temp.pop();
    }
}
void display2rev(stack<int> &st)
{
    // using extra stack
    stack<int> temp;
    while (!st.empty())
    {
        temp.push(st.top());
        st.pop();
    }
    // putting elements back from temp to st
    while (!temp.empty())
    {
        cout << temp.top() << " ";
        st.push(temp.top());
        temp.pop();
    }
}
void reversestack(stack<int> &st)
{
    // use two extra stacks
    stack<int> gt;
    stack<int> rt;
    while (!st.empty())
    {
        gt.push(st.top());
        st.pop();
    }
    while (!gt.empty())
    {
        rt.push(gt.top());
        gt.pop();
    }
    while (!rt.empty())
    {
        st.push(rt.top());
        rt.pop();
    }
}
// copy stack into another stack using 3 stacks
void pushAtBottom(stack<int> &st, int val)
{
    if (st.empty())
    {
        st.push(val);
        return;
    }
    int num = st.top();
    st.pop();
    pushAtBottom(st, val);
    st.push(num);
}

void pushAtIdx(stack<int> &st, int idx, int val)
{
    if (idx > st.size() || idx < 0)
    {
        cout << "Invalid idx" << endl;
        return;
    }
    if (st.size() == idx)
    {
        st.push(val);
        return;
    }
    int num = st.top();
    st.pop();
    pushAtIdx(st, idx, val);
    st.push(num);
}

void reverserec(stack<int> &st)
{
    if (st.empty())
        return;
    int num = st.top();
    st.pop();
    reversestack(st);
    pushAtBottom(st, num);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);

    // cout << st.top() << endl; // can't find top after stack is empty
    // cout << st.size() << endl;
    // cout << st.empty() << endl;
    // st.pop();
    // cout << st.top() << endl; // can't find top after stack is empty

    // displayrec(st);
    // cout << "" << endl;
    // display2(st);
    // cout << "" << endl;
    // displayrecrev(st);
    // cout << "" << endl;
    // display2rev(st);
    // reversestack(st);
    // cout << "" << endl;
    // displayrec(st);
    // cout << "" << endl;
    // displayrecrev(st);

    // displayrec(st);
    // cout << "" << endl;
    // pushAtBottom(st, 100);
    // displayrec(st);
    // pushAtIdx(st, 2, 100);
    // cout << "" << endl;
    // displayrec(st);
    // pushAtIdx(st, 6, 200);
    // cout << "" << endl;
    // displayrec(st);
    // pushAtIdx(st, 0, 2000);
    // cout << "" << endl;
    displayrec(st);
    cout << "" << endl;
    reversestack(st);
    cout << "" << endl;
    displayrec(st);
}