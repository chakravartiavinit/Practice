#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    char arr[12][12];
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            cin >> arr[i][j];
        }
    }
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (arr[i][j] == 'W')
            {
                if (arr[i - 1][j] == 'P' || arr[i + 1][j] == 'P' || arr[i][j + 1] == 'P' || arr[i][j - 1] == 'P')
                {
                    sum++;
                }
            }
        }
    }
    cout << sum << "\n";
    return 0;
}