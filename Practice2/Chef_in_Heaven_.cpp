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
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool flag = false;
        double good = 0, total = 0;
        for (int i = 0; i < s.length(); ++i)
        {
            if (s[i] == '1')
            {
                good++;
            }
            total++;
            double ans = (good * 100) / (total);
            if (ans >= 50)
            {
                flag = true;
                break;
            }
        }
        if (flag == true)
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