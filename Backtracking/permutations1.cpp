#include <bits/stdc++.h>
using namespace std;

void permutations1(string input, string output)
{
    if (input.size() == 0)
    {
        cout << output << endl;
        return;
    }
    for (int i = 0; i < input.size(); i++)
    {
        string left = input.substr(0, i);
        string right = input.substr(i + 1);
        permutations1(left + right, output + input[i]);
    }
}

void permutations2(string &str, int i)
{
    if (i == str.size() - 1)
    {
        cout << str << endl;
        return;
    }
    for (int j = i; j < str.size(); j++)
    {
        swap(str[i], str[j]);
        permutations2(str, i + 1);
        swap(str[j], str[i]);
    }
}
void permutations4(string &str, int i)
{
    if (i == str.size() - 1)
    {
        cout << str << endl;
        return;
    }
    for (int j = i; j < str.size(); j++)
    {
        if (j == i || str[i] != str[j])
        {
            swap(str[i], str[j]);
            permutations4(str, i + 1);
            swap(str[j], str[i]);
        }
    }
}

void permutations3(string &str, int i)
{
    if (i == str.size() - 1)
    {
        cout << str << endl;
        return;
    }
    unordered_set<char> s;
    for (int j = i; j < str.size(); j++)
    {

        if (s.find(str[j]) != s.end())
            continue;
        s.insert(str[j]);
        swap(str[i], str[j]);
        permutations3(str, i + 1);
        swap(str[j], str[i]);
    }
}

int main()
{
    string input = "aba";
    // permutations1(input, "");
    permutations4(input, 0);
}