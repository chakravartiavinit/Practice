#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin, s);
    bool error;
    for (int i = s.length() - 1; i >= 0; i--)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'y' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U' || s[i] == 'Y')
        {
            error = true;
            break;
        }
        else if (s[i] != '?' && s[i] != ' ')
        {
            error = false;
            break;
        }
    }
    error == true ? cout << "YES\n" : cout << "NO\n";
    return 0;
}