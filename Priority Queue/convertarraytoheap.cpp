#include <bits/stdc++.h>

using namespace std;

class MaxHeap
{
    vector<int> hp;
    void upheapify(int cidx) // child index
    {
        while (cidx > 0)
        {
            int pidx = (cidx - 1) / 2;
            if (hp[pidx] < hp[cidx])
            {
                swap(hp[pidx], hp[cidx]);
                cidx = pidx;
            }
            else
                break;
        }
    }
    int i; // 0 to i everything is a MaxHeap

public:
    MaxHeap(vector<int> v)
    {
        hp = v;
        for (int i = 0; i < v.size(); i++)
            upheapify(i);
        display();
    }
    void push(int element)
    {
        //*T.C. : O(log(n))
        hp.push_back(element);
        upheapify(hp.size() - 1);
    }
    void display()
    {
        cout << "[";
        for (auto ele : hp)
            cout << ele << " ";
        cout << "]" << endl;
    }
    int peek()
    {
        //*T.C. : O(1)
        if (hp.size() > 0)
            return hp[0];
        return INT_MIN;
    }

    void downHeapify(int idx)
    {
        while (idx < hp.size())
        {
            int lc = 2 * idx + 1;
            int rc = 2 * idx + 2;
            cout << "S3" << endl;
            int maxEle = idx;
            if (lc >= hp.size())
                break;
            else
            {

                if (hp[lc] > hp[maxEle])
                    maxEle = lc;
                if (rc < hp.size() && hp[rc] > hp[maxEle])
                    maxEle = rc;
                if (maxEle != idx)
                {
                    swap(hp[maxEle], hp[idx]);
                    idx = maxEle;
                }
                else
                    break;
            }
        }
    }

    void pop()
    {
        //*T.C. : O(log(n))
        // removes the highest priority element

        if (hp.size() == 0)
            return;
        int num = hp[hp.size() - 1];
        hp.pop_back();
        hp[0] = num;
        downHeapify(0);
    }
};

int main()
{
    vector<int> v = {100, 101, -200, 2, 3, 5, 1, 0, -1};
    MaxHeap hp(v);
    // hp.push(100);
    hp.display();
    return 0;
}