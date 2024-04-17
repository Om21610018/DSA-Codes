#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int age;
    float percentage;
    Student(string name, int age, float percentage)
    {
        this->name = name;
        (*this).age = age;
        this->percentage = percentage;
    }
};

void change(Student &s) // Yaha bhi referecne of operator use hota hai no need of pointer
{
    s.name = "Harsh";
}
void change2(Student *s)
{
    s->name = "Harshhh";
}
int main()
{
    Student s("Raghav", 5, 123);
    // s.age = 5;
    Student *ptr = &s;
    cout << s.name << endl;
    change(s);
    change2(ptr);

    cout << s.name << endl;

    Student *st = new Student("Vall", 52, 25);
    cout << st->name << endl;
    cout << st->age << endl;
    cout << st->percentage << endl;

    change2(st);
    cout << st->name;
}