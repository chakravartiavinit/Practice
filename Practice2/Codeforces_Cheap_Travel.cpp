#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, a, b, number;
    cin >> n >> m >> a >> b;
    number = n / m;

    if (m * a <= b)
        cout << n * a << "\n";
    else
        cout << (n / m) * b + min((n % m) * a, b) << "\n";

    return 0;
}