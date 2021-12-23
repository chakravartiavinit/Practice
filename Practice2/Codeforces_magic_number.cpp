#include <bits/stdc++.h>
using namespace std;
using namespace std;

bool magicNumChecker(string s)
{
    for (int i = 0; i < (int)s.size(); i++)
        if (s[i] != '1' && s[i] != '4')
            return false;

    if (s[0] == '4')
        return false;

    if (s.find("444") != s.npos)
        return false;

    return true;
}

int main()
{
    string s1;
    cin >> s1;

    if (magicNumChecker(s1))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
