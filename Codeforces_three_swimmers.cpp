#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        int p, a, b, c;
        cin >> p >> a >> b >> c;
        cout << min(min((a - p % a) % a, (b - p % b) % b), (c - p % c) % c) << "\n";
    }
    return 0;
}
