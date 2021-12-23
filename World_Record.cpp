#include <bits/stdc++.h>
using namespace std;
float round(float var)
{

    float value = (int)(var * 100);
    return (float)value / 100;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        double k1, k2, k3, v;
        cin >> k1 >> k2 >> k3 >> v;
        double ans = (100) / (k1 * k2 * k3 * v);
        if (round(ans) < 9.58)
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