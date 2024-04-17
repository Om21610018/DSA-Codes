#include <bits/stdc++.h>
using namespace std;

class Product
{
public:
    int price;
    string name;
    Product(int price, string name)
    {
        this->price = price;
        this->name = name;
    }
};

bool cmp(int a, int b)
{
    return a > b;
    // a < b -> true -> we pick a
    // a < b -> false -> we pick b
    // a > b -> true -> we pick first argument(a)
    // a > b -> false -> we pick second argument(b)
    // true hua toh first element pick hoga agr false hua toh second element pick hoga
}

bool comp(Product &p, Product &q)
{
    return p.price > q.price;
}

class CompareClass
{
public:
    bool operator()(Product &p, Product &q)
    {
        if (p.name == q.name)
        {
            return p.price < q.price;
        }
        else
            return p.name > q.name;
    }
};
int main()
{
    // vector<int> v = {5, 4, -1, 9, 8, 16, 12};
    // sort(v.begin(), v.end(), cmp); // a,b -> a<b -> we picked a
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << " ";

    vector<Product> v;
    Product p1(5, "Hello");
    Product p2(1, "Pepsi");
    Product p5(11, "Pepsi");
    Product p3(40, "CocaCola");
    Product p4(100, "Himcream");
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    v.push_back(p5);

    sort(v.begin(), v.end(), CompareClass());
    for (auto it : v)
    {
        cout << it.price << " " << it.name << endl;
    }
    return 0;
}