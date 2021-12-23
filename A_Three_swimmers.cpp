#include <bits/stdc++.h>
using namespace std;
int mins(int a, int b)
{
    if (b < a)
        a = b;
    return a;
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
        long long  p, a, b, c, ans = 0;
        cin >> p >> a >> b >> c;

        cout << min(min((a - p % a) % a, (b - p % b) % b), (c - p % c) % c) << "\n";
    }

    return 0;
}