#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r, c, count = 0, r1 = 0, c1 = 0;
    cin >> r >> c;
    char arr[r][c];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 'S')
            {
                count++;
            }
        }
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (arr[i][j] == 'S')
            {
                r1++;
                break;
            }
        }
    }
    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < r; j++)
        {
            if (arr[j][i] == 'S')
            {
                c1++;
                break;
            }
        }
    }
    cout << r*c-r1*c1 << '\n';
    return 0;
}