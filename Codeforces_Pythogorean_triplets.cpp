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
        int count = 0;
        long long n;
        cin >> n;
        long long temp = sqrt(2 * n - 1);
        cout << (temp - 1) / 2 << "\n";
    }

    return 0;
}