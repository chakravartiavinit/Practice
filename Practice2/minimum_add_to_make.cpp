#include <bits/stdc++.h>
using namespace std;
int check(string &s)
{
    stack<char> se;
    for (int i = 0; i < s.length(); i++)
    {

        if (se.empty() == false && ((s[i] == ')' && se.top() == '(') || (s[i] == ']' && se.top() == '[') || (s[i] == '}' && se.top() == '{')))
        {
            se.pop();
        }
        else
        {
            se.push(s[i]);
        }
    }
    return se.size();
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    cout << check(s);
    return 0;
}