#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int four = 0, seven = 0;
    for (int i = 0; i < s.length(); ++i)
    {
        if (s[i] == '4')
        {
            four++;
        }
        else if (s[i] == '7')
        {
            seven++;
        }
    }
    if (seven == 0 && four == 0)
    {
        cout << "-1\n";
    }
    else
    {
        if (four >= seven)
        {
            cout << "4\n";
        }
        else
        {
            cout << "7\n";
        }
    }

    return 0;
}