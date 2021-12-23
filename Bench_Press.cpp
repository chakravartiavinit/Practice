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
        int n, w, r, i;
        cin >> n >> w >> r;
        map<long long, long long> mp;
        long long arr[n];
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
            mp[arr[i]]++;
        }
        if (r >= w)
        {
            cout << "YES" << endl;
        }
        else
        {
            long long sum = 0;
            for (auto x : mp)
            {
                if (x.second >= 2)
                {
                    int t = x.second / 2;
                    sum = sum + (x.first) * (t)*2;
                }
            }
            if (sum + r >= w)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}