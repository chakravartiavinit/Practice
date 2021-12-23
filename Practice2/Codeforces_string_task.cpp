#include <bits/stdc++.h>
#include <string>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a[26] = {0};
    string s, s1;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != 'A' && s[i] != 'O' && s[i] != 'Y' && s[i] != 'E' && s[i] != 'U' && s[i] != 'I' && s[i] != 'a' && s[i] != 'o' && s[i] != 'y' && s[i] != 'e' && s[i] != 'u' && s[i] != 'i')
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                cout << ".";
                cout << char(s[i] + 32);
            }
            else
            {
                cout << ".";
                cout << s[i];
            }
        }
    }
    return 0;
}