#include <bits/stdc++.h>
using namespace std;
void check(string s)
{
    int n = s.size() - 1;
    if (s[n] > s[n - 1])
    {
        for (int i = 0; i < n; i++)
        {
            cout << s[i];
        }
    }
    else if (s[n] <= s[n - 1])
    {
        for (int i = 0; i <= n; i++)
        {
            if (i != n - 1)
            {
                cout << s[i];
            }
        }
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    if (s == "-10" || s == "-20" || s == "-30" || s == "-40" || s == "-50" || s == "-60" || s == "-70" || s == "-80" || s == "-90")
    {
        cout << "0";
    }
    else if (s[0] != '-')
    {
        cout << s << "\n";
        return 0;
    }
    else
    {
        check(s);
    }

    return 0;
}