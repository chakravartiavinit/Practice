#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; ++i)
    {
        if (s[i] != '.')
        {
            if (s[i] == 'R')
            {
                while (s[i] == 'R')
                {
                    i++;
                }
                cout << i << " " << i + 1 << "\n";
                break;
            }
            else
            {
                cout << i + 1 << " " << i << "\n";
                break;
            }
        }
    }
    return 0;
}