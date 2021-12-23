#include <bits/stdc++.h>
using namespace std;

bool Array(string a, string b)
{
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

bool automaton(string a, string b)
{
    int n = 0;
    for (int i = 0; i < a.length() and n < b.length(); i++)
        n += a[i] == b[n];
    return n == b.length();
}

bool both(string a, string b)
{
    for (int i = 0; i < b.length(); i++)
    {
        int p = a.find(b[i]);
        if (p == -1)
            return false;
        a[p] = '0';
    }
    return true;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s1, s2;
    cin >> s1 >> s2;
    if (Array(s1, s2))
        cout << "array" << endl;
    else if (automaton(s1, s2))
        cout << "automaton" << endl;
    else if (both(s1, s2))
        cout << "both" << endl;
    else
        cout << "need tree" << endl;
    return 0;
}