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
        int count = 0, res = 0;
        string s;
        cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == '0' && res > 0)
            {
                count++;
                res = 0;
            }
            else if (s[i] == '1')
            {
                res++;
            }
            else if (s[i] == '0')
            {
                res = 0;
            }
        }
        if (res > 0)
        {
            count++;
        }

        cout << count << '\n';
    }
    return 0;
}