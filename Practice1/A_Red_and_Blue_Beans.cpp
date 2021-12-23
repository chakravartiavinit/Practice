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
        long long r, b, d;
        cin >> r >> b >> d;
        if (r > b)
        {
            swap(r, b);
        }
        if (b > (d + 1) * r)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }
    return 0;
}
