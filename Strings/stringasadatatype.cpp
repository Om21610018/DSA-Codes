#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str = "dada ji kya baat hai"; // this is also terminated by the '\0'
    cout << str << endl;
    cout << str[0] << endl;
    cout << str[1] << endl;
    cout << str[2] << endl;
    cout << str[3] << endl;

    string str1;
    cout << "Enter your name : " << endl;
    // cin >> str1; //* works only if the given string has no spaces
    getline(cin, str1); //*Very very important for taking multispaces string
    cout << str1 << endl;

    for (int i = 0; i < str.length(); i++) // in java str.length and str.size()
        cout << str[i];
    cout << "" << endl;
    for (int i = 0; i < str.size(); i++)
        cout << str[i];

    /*

    *Built-in string functions :

    1) <string_name>.size() : this will return the size of the string (will not count null character)
    2) <string_name>.length() : same as upper function
    3) push_back() :
    4) pop_back() :
    5) + operator : adds the two strings i.e. appends
    6) reverse() : reverse the string
    7) substr() : gives the substring
    6) to_string() : it converts the integer to string


    */
    cout << "" << endl;
    string str5 = "";
    str5.push_back('a'); // can push only character in single quote
    str5.push_back('b'); // can push only character in single quote
    str5.push_back('c'); // can push only character in single quote
    cout << str5 << endl;
    str5.pop_back();
    cout << str5 << endl;

    string str6 = "abc";
    string str7 = "efg";
    cout << str6 + str7 << endl;
    cout << str << endl;
    reverse(str.begin(), str.end());
    cout << str << endl;
    /*
    *reversing a part :
    str.end() = n-1;
    indices of start and end : //*this are indices not positions
     st = 2;
     en = 4;
     * ek index jada do ending index
     reverse(str.begin()+2,str.begin()+4+1);// ending index mei 1 extra add kro

    */
    string str8 = "abcdefghi";
    reverse(str8.begin() + 1, str8.begin() + 3 + 1);
    cout << str8;

    /*
    * substr() :
    e.g.
    string substr(index,length);

    string str = "abc";
    substrings of str : a, ab, abc,b, bc, c


    str.substr(4); this will return the string from 4 till the end
    str.substr(2,3);// * this will return the string from index 2 till it's size is 3

    */
    cout << "" << endl;
    string str10 = "abcdefg"; // 0 1 2 3 4 5 6
    cout << str10 << endl;
    cout << str10.substr(2, 2) << endl; // idx 2 to 2 size ki string return krega
    // cout << str10.substr(4) << endl;    // idx 4 to end tuk string return krega

    // int x = 12345;
    // //*typecasting of string is not  possible
    // string st = to_string(x);
    // cout << st << endl;
}