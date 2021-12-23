#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, g;
    cin >> n >> g;
    for (int t; cin >> t;)
        g = __gcd(g, t);
    cout << n * g << "\n";
    return 0;
}
