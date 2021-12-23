#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, sum = 0;
    cin >> n >> m;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }
    if (sum + 10 * (n - 1) > m)
    {
        cout << "-1"
             << "\n";
    }
    else
    {

        cout << (m - sum) / 5 << "\n";
    }

    return 0;
}