#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    if (t > 2)
    {
        vector<string> alpha;
        while (t--)
        {
            string s;
            cin >> s;
            alpha.push_back(s);
        }
        int ans = INT_MAX;
        for (int i = 0; i < alpha.size() - 1; ++i)
        {
            string temp1 = alpha[i];
            string temp2 = alpha[i + 1];
            int count = 0;
            for (int i = 0; i < temp1.length(); ++i)
            {
                if (temp1[i] == temp2[i])
                {
                    count++;
                }
                else
                {
                    break;
                }
            }
            ans = min(count, ans);
        }
        cout << ans << "\n";
    }
    else
    {
        string a, b;
        cin >> a >> b;
        int count1 = 0;
        for (int i = 0; i < a.length(); ++i)
        {
            if (a[i] == b[i])
            {
                count1++;
            }
            else
            {
                break;
            }
        }
        cout << count1 << "\n";
    }

    return 0;
}