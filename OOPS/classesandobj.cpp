#include <bits/stdc++.h>
using namespace std;
class Player
{
public:
    int score;
    int health;
    string name;
};

int main()
{
    Player amit;
    cout << sizeof(amit);
    amit.score = 55;
    amit.health = 65;
    amit.name = "amit";
    cout << amit.score;

    Player amit2;
    cout << sizeof(amit2);
    amit2.score = 5;
    amit2.health = 6;
    amit2.name = "amit2";
    cout << amit2.score;

    Player pt;
    cout << pt.health;
}