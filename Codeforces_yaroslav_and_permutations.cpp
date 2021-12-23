#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag = true;
    int n, temp[1001] = {0};
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        temp[arr[i]]++;
    }
    if (n == 1)
    {
        cout << "YES\n";
    }
    else
    {
        for (int i = 0; i < 1001; i++)
        {
            if (temp[i] <= ((n + 1) / 2))
            {
                continue;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if (flag == false)
        {
            cout << "NO\n";
        }
        else
        {
            cout << "YES\n";
        }
    }

    return 0;
}
