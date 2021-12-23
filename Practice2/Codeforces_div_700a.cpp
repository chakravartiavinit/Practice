#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s, s2 = "";
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (i % 2 == 0)
            {
                if (s[i] == 'a')
                {
                    s2.push_back('b');
                }
                else
                {
                    s2.push_back('a');
                }
            }
            else
            {
                if (s[i] == 'z')
                {
                    s2.push_back('y');
                }
                else
                {
                    s2.push_back('z');
                }
            }
        }
        cout << s2 << "\n";
    }
    return 0;
}