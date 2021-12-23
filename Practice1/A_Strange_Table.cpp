#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, x;
        cin >> n >> m >> x;
        x--;
        long long col = x / n;
        long long row = x % n;
        cout << row * m + col + 1 << "\n";
    }
    return 0;
}