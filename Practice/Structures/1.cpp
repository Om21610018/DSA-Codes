#include <bits/stdc++.h>
using namespace std;

class book
{
public:
    static int x;
    int id;
    vector<int> arr;
    void setdata();
};
void book::setdata()
{
    cout << "Hello" << endl;
}
int book::x;
int main()
{
    book b;
    // b.id = 12;
    cout << b.x << endl;
    cout << book::x << endl;
    cout << b.id;
    b.setdata();
    return 0;
}