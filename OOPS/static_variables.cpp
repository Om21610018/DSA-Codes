#include <iostream>
using namespace std;

class Item
{
public:
    int a;
    int b;
    static int k;
    static void setK(int k)
    {
        Item::k = k;
    }
    static int getK()
    {
        // static member functions can only access static variables not instance variables
        return k;
    }
    int setA(int a)
    {
        // instance members functions can access both instance as well as static variables
        this->a = a;
        Item::k = a;
    }
};

int Item ::k = 250;
int main()
{

    Item it;
    cout << sizeof(Item) << endl;
    cout << it.k << endl;
    Item::setK(400);
    cout << Item::getK() << endl;
    cout << Item::k << endl;
    cout << sizeof(Item) << endl;
}