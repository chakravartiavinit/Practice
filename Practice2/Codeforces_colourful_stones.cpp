#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s, t;
    cin >> s >> t;
    int pos = 1;
    for (int i = 0; i < t.length(); i++)
    {
        if (t[i] == s[pos - 1])
        {
            pos++;
        }
    }
    cout << pos << "\n";
    return 0;
}