/*
* Problems in array :
   -  array is of fixed size


* vector is a dynamic array  :

   - in vector when it gets full of its size then
     it creates the new vector of its double the size of its previous vector
   - so that it is copy pasting the data from one vector to another vector
  *- also the capacity of vector not goes on decreasing after popping out the elements from the vector

* vector declaration :

  vector<int> arr ;

////*******  Remember the following things in vector :

* while inserting in an vector :
* - do not use [] only use push_back()
  - try to use vector_object.push_back(<data>);


* methods in vector :
-  size() : returns the size of the vector
-  capacity() : returns the actual capacity of vector
-  push_back(<data>) : by providing the data it will add the element at the end of the vector
-  pop_back() : it will just pop out the element from the end of the vector
-  at(<index>) : return the value present at provided index in a vector
-  sort() : it will sort the vector --> it is a built-in method in cpp

*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // vector<int> v;                //  no need to mention the size of the vector;
    // cout << v.capacity() << endl; // as the capacity is 0
    // cout << v.size() << endl;     // as the size is 0 so we cannot access the memory location or indexes of an vector
    // // v[0] = 1;  --> if the size of the vector is not mention u cannot assign the values and access it ;
    // // v[1] = 45;
    // // v[2] = 50;
    // // cout << v[0];
    // cout << v.capacity() << endl;
    // v.push_back(5);
    // cout << v.capacity() << endl;
    // v.push_back(10);
    // cout << v.capacity() << endl;
    // v.push_back(15);
    // cout << v.capacity() << endl;
    // v.push_back(20);
    // cout << v.capacity() << endl;
    // v.push_back(25);
    // cout << v.capacity() << endl;
    // v.push_back(30);
    // cout << v.capacity() << endl;
    // for (auto x : v)
    // {
    //     cout << x << " ";
    // }
    // cout << "" << endl;

    // vector<int> v1(5);
    // v1[0] = 1; // this is valid as we have declared the size of the vector  so we can update the elements and access till provided index
    // cout << v1[0];

    vector<int> vtr;
    vtr.push_back(30);
    vtr.push_back(40);
    vtr.push_back(50);
    vtr.push_back(60);
    vtr.push_back(70);
    vtr.push_back(80);
    vtr.push_back(20);
    vtr.push_back(10);
    vtr.push_back(340);
    vtr.push_back(308);
    for (int i = 0; i < vtr.size(); i++)
        cout << vtr[i] << " ";
    cout << "" << endl;
    cout << vtr.size() << " " << vtr.capacity() << endl;
    vtr.pop_back(); // pops out the last element from the vector
    for (int i = 0; i < vtr.size(); i++)
        cout << vtr[i] << " ";
    vtr.pop_back(); // pops out the last element from the vector
    vtr.pop_back(); // pops out the last element from the vector
    vtr.pop_back(); // pops out the last element from the vector
    vtr.pop_back(); // pops out the last element from the vector
    cout << "" << endl;
    cout << vtr.size() << " " << vtr.capacity() << endl;
    // size will get decrease but the capacity will remain same after popping out an elements.

    vector<int> vtr2;
    cout << "Size of vtr2 : " << vtr2.size() << endl;
    cout << "Capacity of vtr2 : " << vtr2.capacity() << endl;

    vector<int> vtr3(5);
    cout << "Size of vtr3 : " << vtr3.size() << endl;         // Size of vtr3 : 5 ----> size of vtr3 is 5 because it has created the vector of size 5 and stored 0 inside each block
    cout << "Capacity of vtr3 : " << vtr3.capacity() << endl; // Capacity of vtr3 : 5  -----> if we gives the size it will takes the same capacity
    vtr3.push_back(10);
    cout << "Size of vtr3 : " << vtr3.size() << endl;         // Size of vtr3 : 5 ----> size of vtr3 is 5 because it has created the vector of size 5 and stored 0 inside each block
    cout << "Capacity of vtr3 : " << vtr3.capacity() << endl; // Capacity of vtr3 : 5  -----> if we gives the size it will takes the same capacity
    for (auto i : vtr3)
    {
        cout << i << " ";
    }

    cout << "" << endl;
    vector<int> vtr4(7, 10); // so it will initialize the vector with all blocks containing 10 and size and capacity of vector will be of 7
    for (auto i : vtr4)
    {
        cout << i << " ";
    }
}
