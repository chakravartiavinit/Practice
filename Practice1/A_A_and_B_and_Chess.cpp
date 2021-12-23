#include <bits/stdc++.h>
using namespace std;
int player1 = 0, player2 = 0;
int Check(char a)
{
    if (a == 'Q' || a == 'q')
    {
        return 9;
    }
    else if (a == 'R' || a == 'r')
    {
        return 5;
    }
    else if (a == 'B' || a == 'b')
    {
        return 3;
    }
    else if (a == 'N' || a == 'n')
    {
        return 3;
    }
    else if (a == 'P' || a == 'p')
    {
        return 1;
    }
    return 0;
}
bool check(char alpha)
{
    if (alpha >= 'A' && alpha <= 'Z')
    {
        return true;
    }
    return false;
}
void Count(string s)
{
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] != '.')
        {
            if (check(s[i]) == true)
            {
                player1 += Check(s[i]);
            }
            else
            {
                player2 += Check(s[i]);
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    for (int i = 0; i < 8; ++i)
    {
        string s;
        cin >> s;
        Count(s);
    }
    if (player1 == player2)
    {
        cout << "Draw\n";
    }
    else
    {
        if (player1 > player2)
        {
            cout << "White\n";
        }
        else
        {
            cout << "Black\n";
        }
    }

    return 0;
}