//*Return the most occuring word in the sentence
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // S-1) will store each word in vector of string
    // S-2) sort the vector and process
    string str;
    getline(cin, str);
    stringstream ss(str);
    vector<string> v;
    string temp;
    while (ss >> temp)
    {
        v.push_back(temp);
    }
    sort(v.begin(), v.end()); // sorted the v vector after sorting all the similar elements will get together
    // for (int i = 0; i < v.size(); i++)
    //     cout << v[i] << endl;
    // Finding the maxcount;
    int maxcount = 1;
    int count = 1;

    for (int i = 1; i < v.size(); i++)
    {

        if (v[i - 1] == v[i])
            count++;
        else
            count = 1;
        maxcount = max(count, maxcount);
    }
    cout << maxcount << endl;
    count = 1;
    for (int i = 1; i < v.size(); i++)
    {

        if (v[i - 1] == v[i])
            count++;
        else
            count = 1;
        if (count == maxcount)
        {
            cout << v[i] << " " << maxcount<<endl;
        }
    }
}