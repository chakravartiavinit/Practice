#include <bits/stdc++.h>
using namespace std;
bool CheckisPlaindrome(string s)
{
    string l = s;
    reverse(s.begin(), s.end());
    if (l == s)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        string l = s;
        l = l + 'a';
        if (CheckisPlaindrome(l) == false)
        {
            cout << "YES\n";
            cout << s + 'a' << "\n";
        }
        else
        {
            l.pop_back();
            l = 'a' + l;
            if (CheckisPlaindrome(l) == false)
            {
                cout << "YES\n";
                cout << l << "\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}