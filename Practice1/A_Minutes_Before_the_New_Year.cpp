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
        int h, mm;
        cin >> h >> mm;
        int ans;
        if (mm == 0)
        {
            ans = (24 - h) * 60;
        }
        else
        {
            ans = (24 - h - 1) * 60 + (60 - mm);
        }

        cout << ans << "\n";
    }
    return 0;
}