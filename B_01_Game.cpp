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
        string s;
        cin >> s;
        int count1 = 0, count2 = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '1')
            {
                count1++;
            }
            else
            {
                count2++;
            }
        }

        if (min(count1, count2) % 2 == 0)
        {
            cout << "NET\n";
        }
        else
        {
            cout << "DA\n";
        }
    }
    return 0;
}