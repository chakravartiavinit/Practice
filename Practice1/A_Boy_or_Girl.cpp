#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<char> letter;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        letter.insert(s[i]);
    }
    if ((letter.size()) % 2 == 0)
    {
        cout << "CHAT WITH HER!\n";
    }
    else
    {
        cout << "IGNORE HIM!\n";
    }

    return 0;
}