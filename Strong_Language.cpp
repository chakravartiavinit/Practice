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
        int n, k, count = 0;
        cin >> n >> k;
        string s;
        cin >> s;
        char c = '*';
        for (int i = 0; i < s.length() && count < k; ++i)
        {
            if (s[i] == c)
            {
                count++;
            }
            else
            {
                count = 0;
            }
        }
        if (count == k)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
