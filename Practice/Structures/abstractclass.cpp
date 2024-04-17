#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    virtual void fun() = 0; // late binding --> PURE VIRTUAL FUNCTION
    //*Class having any one pure virtual function then it is a abstract class
    // * We cannot instantiate abstract class

    // WHY ABSTRACT CLASS : 
    /*
       - used for generalization
       - Person -> Faculty
                -> Student
                
    
    */
    void f1()
    {
    }
};
class B : public A
{
public:
};
int main()
{
    return 0;
}