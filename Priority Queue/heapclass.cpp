#include <bits/stdc++.h>
using namespace std;
class MaxHeap
{
private:
    vector<int> hp;

public:
    void display()
    {
        for (int i = 0; i < hp.size(); i++)
            cout << hp[i] << " ";
        cout << endl;
    }
    void upHeapify(int ci)
    {

        while (ci > 0)
        {
            int pi = (ci - 1) / 2;
            if (hp[pi] < hp[ci])
                swap(hp[pi], hp[ci]);
            else
                break;
            ci = pi;
        }
    }
    void downHeapify(int idx)
    {
        while (idx < hp.size())
        {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            if (lc >= hp.size())
                break;
            int maxidx = idx;
            if (hp[lc] > hp[maxidx])
                maxidx = lc;
            if (rc < hp.size() && hp[rc] > hp[maxidx])
                maxidx = rc;
            if (maxidx != idx)
            {
                swap(hp[maxidx], hp[idx]);
                idx = maxidx;
            }

            else
                break;
        }
    }
    void deleteatIdx(int idx)
    {
        if (idx < 0 || idx >= hp.size())
            cout << "Invalid idx" << endl;
        else
        {
            hp[idx] = INT_MAX;
            upHeapify(idx);
            pop();
        }
    }
    void push(int ele)
    {
        hp.push_back(ele);
        upHeapify(hp.size() - 1);
    }
    void pop()
    {
        if (hp.size() == 0)
            return;
        swap(hp[0], hp[hp.size() - 1]);
        hp.pop_back();
        if (hp.size() > 0)
            downHeapify(0);
    }
    MaxHeap(vector<int> v)
    {
        hp = v;
        // for (int i = 0; i < hp.size(); i++) //*T.C. : O(nlogn)
        //     upHeapify(i);
        for (int i = hp.size() / 2; i >= 0; i--)
            downHeapify(i);
    }
    MaxHeap()
    {
    }
    void heapsort(vector<int> arr)
    {
        hp = arr;
        for (int i = arr.size() / 2; i >= 0; i--)
            downHeapify(i);
        int i = arr.size() - 1;
        while (hp.size())
        {
            cout << hp[0] << " ";
            swap(hp[0], hp[hp.size() - 1]);
            hp.pop_back();
            downHeapify(0);
        }
        // reverse(hp.begin(), hp.end());
    }
};

int main()
{
    // MaxHeap hp;
    // hp.push(10);
    // hp.display();
    // hp.push(200);
    // hp.display();
    // hp.push(15);
    // hp.display();
    // hp.push(300);
    // hp.push(250);
    // hp.push(277);
    // hp.push(400);
    // hp.display();
    // hp.pop();
    // hp.pop();
    // hp.deleteatIdx(1);
    // hp.deleteatIdx(0);
    // hp.display();

    // MaxHeap hpr({4, 33, 222, 55, 66, 777});
    // hpr.display();

    MaxHeap heap;
    vector<int> arr = {33, 55, 65, 23, 245, 533, 3245};
    heap.heapsort(arr);
    heap.display();

    return 0;
}