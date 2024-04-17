#include <bits/stdc++.h>
using namespace std;

/*

OOP :
 we focus on data
 bind the data to the function using it
 program divided into data and functions

 Main program have objects having data and functions
 access of data and function can be tracked

 Advantages :
 - protects data from accidental changes
 - only functions in the class can access and change the data in the class



*CLASS :
- Fundametal unit of OOP
- it is a user defined data type

e.g.
class Fruit {
    public :
        string colour;
        string taste;
        void setColour(string colour){
            this->colour=colour;
        }

};



*CONSTRUCTORS :
- used to intialize an object
- this functin is called when an object is created
- same name as class name
- types :
  Default
  Parameterized
  Copy

* DESTRUCTOR :
- function is called when an object is deleted (member function)
- ~ is used infront of classname





//* Encapsulation : Pillar of  OOP
- binding of methods and variables together into a single unit (Class)
- data is only accessible from the class methods --> ensures Encapsulation
- it also leads to data absraction (Data hiding) so class is also called as Abstract Data Type

e.g.
class ABC{
    int a;
    public :
        void setval(int a){
            this->a=a;
        }
        int getval(){
            return this->a;
        }
}

//*Abstraction : Pillar of OOP
- enables us to display only esssential information while hiding implementation details

//*Inheritance : Pillar of OOP
- class inherits properties of another class

//* Accesss Modifiers :
public : Accessible through any class
protected : Accessible in own class and parent class and derived class
private : Accessible only in same class


//* Types of Inheritance :
Single Inheritance : ----> Pahle parent class ka constuctor call hoga uske baad child class wala call hoga
Multilevel Inheritance : ----> Bahut sare levels parent child grandchild
Multiple Inheritance : ----> Child class is inheriting the multiple parent classes
Hierarchical Inheritance : ----> One Parent has many childs
Hybrid Inheritance : ----> mix of all inheritance



//* Diamond Problem :



//* Polymorphism : Pillar of OOP
- ability of objects/methods to take differnt forms
- Types : Compile Time and Run Time



//* Compile Time Polymorphism : 
- Function overloading --> same function name but perform differently according to arguments passed how many and types
- Operator Overloading :
TODO : WHAT IS THE USE OF IT ---> Complex numbers


//* Run Time Polymorphism :
- resolved at Runtime
- using function overriding(Child class defines a function of parent class)


*/

class Fruit
{
public:
    string name;
    string color;
};

class Rectangle
{
public:
    int length;
    int breadth;
    // Default Constructor
    Rectangle()
    {
        this->breadth = 0;
        this->length = 0;
    }
    // Parameterized constructor
    Rectangle(int l, int b = 100)
    {
        this->length = l;
        this->breadth = b;
    }
    // Copy Constructor : this is used when we want to intialize an object with another existing object
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    ~Rectangle()
    {
        cout << "Object is deleted" << endl;
    }
};

class Vehicle
{
    int tyres;
    int capacity;
    int name;
};
class Car : public Vehicle
{
};

class Parent
{
public:
    int x;
    Parent()
    {
        cout << "Parent Constructor" << endl;
    }

protected:
    int y;

private:
    int z;
};
class Child1 : public Parent
{
    // x will remain public
    // y will remain protected
    // z is not be accessible
public:
    Child1()
    {
        cout << "Child Constructor" << endl;
    }
};

class Child2 : protected Parent
{
    // x will be protected;
    // y will be protected
    // z will be inaccessible
};
class Child4 : public Parent
{
    // x will be protected;
    // y will be protected
    // z will be inaccessible
public:
    Child4()
    {
        cout << "Child4 Constructor" << endl;
    }
};

class Child3 : private Parent // * Inheritance modes
{
    // x will be private
    // y will be private
    // z is not be accessible
};

class GranChild : public Child1
{
public:
    GranChild()
    {
        cout << "GrandChild Constructor" << endl;
    }
};
class GranChild2 : public Child1, public Child4
{
public:
    GranChild2()
    {
        cout << "GrandChild Constructor" << endl;
    }
};

class Complex
{
public:
    int real;
    int img;
    Complex()
    {
    }
    Complex(int x, int y)
    {
        real = x;
        img = y;
    }
    Complex operator+(Complex &a)
    {
        Complex c;
        c.real = this->real + a.real;
        c.img = this->img + a.img;
        return c;
    }
};

int main()
{
    Fruit apple;
    apple.color = "red";
    apple.name = "Apple";
    cout << apple.name << endl;

    Fruit *mango = new Fruit();
    mango->color = "yellow";
    mango->name = "Mango";
    cout << mango->name << endl;
    Rectangle r1(3);

    cout << r1.length << r1.breadth << endl;
    Rectangle *rec = new Rectangle(50, 200);
    cout << rec->breadth << rec->length << endl;
    Rectangle r3 = *rec;
    delete rec;
    cout << r3.breadth << r3.length << endl;

    Child1 c;

    GranChild g;

    GranChild2 gg;

    Complex c1(4, 5), c2(4, 3);
    // Complex c3 = c1.operator+(c2);
    Complex c3 = c1 + c2;
    cout << c3.real << "+" << c3.img << "i" << endl;
}