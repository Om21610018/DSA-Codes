#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual void f1() // agr f1 ko parent class mein virtual bnaya toh toh descendant classes mein bi f1 viirtual function hai
    {
        cout << "A" << endl;
    }
};
class B : public A
{
public:
    void f1()
    {
        cout << "B" << endl;
    } // function overriding
};
int main()
{
    //* Base class pointer can point to the
    //* object of any of its descendant class

    //* i.e. Parent class ka pointer child class ke object ko point kr skta hai
    // BUT IT'S CONVERSE IS NOT TRUE

    A *p, o1;
    B o2;
    p = &o2;

    o2.f1(); // B
    p->f1(); // A --> early binding ke time compiler function ke //(Type of Class) ko dekhega aur uska funtion call krega

    // Late binding mtlb dynamic binding i.e. runtime pe
    // pointer ke content ko pta krke uska function run kre
    return 0;
}