#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    void f1() {}
    void f2() {}
};

class B : public A
{
public:
    void f1() {}      // method overriding
    void f2(int x) {} // method hiding ---> * as functions are in different classes isliye method hiding hai
    //function overloading occurs in same class
};
int main()
{
    B obj;
    obj.f1();  // B wala chalega
    // obj.f2();//error
    obj.f2(5); // ye function pahle child class me check krega
    // if same name wala nhi mila toh parent mein jayega pr child mein same name
    // wala present hai pr arguments match nhi hue toh error ayega
}