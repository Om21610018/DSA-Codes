#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    getline(cin, str);
    cout << str << endl;
    sort(str.begin(), str.end());
    cout << str << endl;
}
// input :hello we are do the
// output :     adeeeehhlloortw
//A-Z : 65-90
//a-z : 97-122
//' ' : 32
/*
sort() : ascii values ke order mei sort krke de dega
ascii value of space : 32

*/