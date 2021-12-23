#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    bool flag = true;
    char a[n + 1][n + 1];
    for (int i = 1; i <= n; ++i)
    {
        for (int j = 1; j <= n; ++j)
        {
            cin >> a[i][j];
        }
    }
    char x = a[1][1];
    char y = a[1][2];
    if (x == y)
    {
        cout << "NO\n";
    }
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
            {
                if (i == j)
                {
                    if (a[i][j] != x)
                    {
                        flag = false;
                        break;
                    }
                }
                else if (j == n - i + 1)
                {
                    if (a[i][j] != x)
                    {
                        flag = false;
                        break;
                    }
                }
                else
                {
                    if (a[i][j] != y)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            if (flag == false)
            {
                break;
            }
        }
        flag == true ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}