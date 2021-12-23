#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    int i=0;
    while (i < s.length())
    {
        if (s[i] == '.')
        {
            cout << "0";
            i++;
        }
        else if (s[i] == '-' && s[i + 1] == '.')
        {
            cout << "1";
            i = i + 2;
        }
        else if (s[i] == '-' && s[i + 1] == '-')
        {
            cout << "2";
            i = i + 2;
        }
    }

    return 0;
}
