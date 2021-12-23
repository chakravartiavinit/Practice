#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> st;
    int n = s.size();
    if (n % 2 != 0)
        return false;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(')
            st.push(s[i]);

        if (s[i] == ')')
        {
            if (!st.empty() && st.top() == '(')
            {
                st.pop();
            }
            else
                return false;
        }
    }
    if (st.empty())
        return true;
    else
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
        char a, b;
        string s, s1;
        cin >> s;
        s1 = s;
        if (s[0] == s[s.length() - 1])
        {
            cout << "NO\n";
        }
        else
        {
            a = s[0];
            b = s[s.length() - 1];
            for (int i = 0; i < s.length(); i++)
            {
                if (s[i] == a)
                {
                    s[i] = '(';
                }
                else if (s[i] == b)
                {
                    s[i] = ')';
                }
                else
                {
                    s[i] = '(';
                }
            }
            for (int i = 0; i < s1.length(); i++)
            {
                if (s1[i] == a)
                {
                    s1[i] = '(';
                }
                else if (s1[i] == b)
                {
                    s1[i] = ')';
                }
                else
                {
                    s1[i] = ')';
                }
            }
            if (isValid(s) || isValid(s1))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }
    return 0;
}
