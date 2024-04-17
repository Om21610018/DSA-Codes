/*
Stringstream class :
used to spearate the words in a string
string str = "he is          a math       teacher           ";
*/
#include <bits/stdc++.h>
using namespace std;
int main()
//*Split every single word of the sentence and print in a new line.
{
    string str;
    getline(cin, str);
    stringstream ss(str);
    string temp; // for storing each word
    

    while (ss >> temp) // ss me se temp me input lelo
    {
        cout << temp << endl;
    }
}