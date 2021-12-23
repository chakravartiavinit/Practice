#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m, count = 0;
    cin >> n >> m;
    char arr[n][m], temp[n];
    int student[n] = {0};
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < m; ++j)
        {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            temp[j] = arr[j][i];
        }
        sort(temp, temp + n);
        char Max = temp[n - 1];
        for (int j = 0; j < n; ++j)
        {
            if (arr[j][i] == Max)
            {
                student[j]++;
            }
        }
    }
    for (int i = 0; i < n; ++i)
    {
        if (student[i] > 0)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}