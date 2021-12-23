#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, sum = 0, ans = 0;
    cin >> t;
    vector<pair<int, int>> vect;
    for (int i = 0; i < t; ++i)
    {
        int a, b;
        cin >> a >> b;
        vect.push_back({a, b});
        sum += a;
    }
    sort(vect.begin(), vect.end());
    for (int i = 0; i<vect.size(), sum> 0; ++i)
    {
        if (sum >= vect[i].first)
        {
            ans = ans + (vect[i].first) * (vect[i].second);
            sum = sum - (vect[i].second) * (vect[i].first);
        }
        else
        {
            
            ans=ans+(vect[i].first)*(sum);
        }
        
    }
    cout << ans << "\n";
    return 0;
}