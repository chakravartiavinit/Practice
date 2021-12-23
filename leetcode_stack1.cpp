#include <bits/stdc++.h>
using namespace std;
bool backspaceCompare(string S, string T)
{
    stack<char> s, t;
    for (int i = 0; i < S.length(); i++)
    {
        if (!s.empty() && S[i] == '#')
        {
            s.pop();
        }
        else if (S[i] != '#')
        {
            s.push(S[i]);
        }
    }
    for (int i = 0; i < T.length(); i++)
    {
        if (!t.empty() && T[i] == '#')
        {
            t.pop();
        }
        else if (T[i] != '#')
        {
            t.push(T[i]);
        }
    }
    if (s == t)
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
    string s, t;
    cin >> s >> t;
    backspaceCompare(s, t) ? cout << "true\n" : cout << "false\n";

    return 0;
}