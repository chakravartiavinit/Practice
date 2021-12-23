#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = true;
    int k;
    cin >> k;
    char arr[5][5];
    char temp[150] = {0};
    for (int i = 1; i < 5; ++i)
    {
        for (int j = 1; j < 5; ++j)
        {
            cin >> arr[i][j];
            if (arr[i][j] != '.')
            {
                temp[arr[i][j]]++;
            }
        }
    }
    for (int i = 0; i < 150; ++i)
    {
        if (temp[i] > 2 * k)
        {
            flag = false;
            break;
        }
    }

    flag == true ? cout << "YES\n" : cout << "NO\n";

    return 0;
}