#include <bits/stdc++.h>
using namespace std;
int main()
{
    /*
     *character arrays are always ends with a null character '\0'
     - this character is used to terminate the string

    */
    // char ch ='\';  this is an error as '\' is special character
    char ch = '\0';
    cout << ch << int(ch) << endl;
    char str[] = {'a', 'b', 'c', 'd', 'e'};
    // for (int i = 0; str[i]!='\0'; i++)
    // {
    //     cout << str[i] << " ";
    // }

    char str1[6] = "12345"; // * here are 6 characters i.e. last one is null character
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << str1[i] << " ";
    // }
    cout << str1 << endl;

    //* Now let's check the presence of '\0' while printing
    int i = 0;
    while (str1[i] != '\0')
    {
        cout << str1[i] << " ";
        i++;
    }
    cout << "" << endl;
    cout << (int)str[5] << endl;
    char str2[] = {'a', 'b', '\0', 'c', 'd', 'e'};
    cout << str2 << endl; // it will stop printing after '\0' as it is end of the string


    
}