#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{

    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    int i, j, k;
    int n, m;

    cin >> n >> m;

    if (n > m)
    {
        for (i = 1; i <= m; i++)
            cout << "BG";
        for (i = 1; i <= n - m; i++)
            cout << "B";
    }

    else
    {
        for (i = 1; i <= n; i++)
            cout << "GB";
        for (i = 1; i <= m - n; i++)
            cout << "G";
    }

    return 0;
}