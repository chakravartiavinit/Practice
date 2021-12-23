#include <bits/stdc++.h>
using namespace std;
void Reverse(string &s)
{
    stack<char> se;
    for (int i = 0; i < s.length(); i++)
    {
        se.push(s[i]);
    }
    for (int i = 0; i < s.length(); i++)
    {
        s[i] = se.top();
        se.pop();
    }
    cout << s << '\n';
}
string checkBalanced(string &s)
{
    stack<char> se;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            se.push(s[i]);
        }
        else
        {
            if (se.empty() == false && ((s[i] == ')' && se.top() == '(') || (s[i] == ']' && se.top() == '[') || (s[i] == '}' && se.top() == '{')))
            {
                se.pop();
            }
            else
            {
                return "NO";
            }
        }
    }
    if (se.empty())
    {
        return "YES";
    }
    return "NO";
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    checkBalanced(s) == "YES" ? cout << "YES\n" : cout << "NO\n";
    return 0;
}