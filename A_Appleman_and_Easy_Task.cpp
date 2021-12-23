#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = false;
    int n, s = 0;
    cin >> n;
    char arr[n + 1][n + 1];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (!flag)
            {
                int s = 0;
                if (arr[i - 1][j] == 'o' && i - 1 > 0 && i - 1 <= n && j > 0 && j <= n)
                    s++;
                if (arr[i + 1][j] == 'o' && i + 1 > 0 && i + 1 <= n && j > 0 && j <= n)
                    s++;
                if (arr[i][j - 1] == 'o' && i > 0 && i <= n && j - 1 > 0 && j - 1 <= n)
                    s++;
                if (arr[i][j + 1] == 'o' && i > 0 && i <= n && j + 1 > 0 && j + 1 <= n)
                    s++;
                if (s % 2 == 1)
                {
                    flag = true;
                    break;
                }
            }
        }
        if (flag)
            break;
    }
    flag == true ? cout << "NO\n" : cout << "YES\n";

    return 0;
}