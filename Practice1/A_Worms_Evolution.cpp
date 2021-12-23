#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[101];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    bool found = false;
    for (int i = 1; !found && i <= n; ++i)
    {
        for (int j = 1; !found && j <= n; ++j)
        {
            if (j != i)
            {
                for (int k = j + 1; k <= n; ++k)
                {
                    if (k != i && arr[i] == arr[j] + arr[k])
                    {
                        cout << i << " " << k << " " << j;
                        found = true;
                        break;
                    }
                }
            }
        }
    }

    if (!found)
    {
        cout << "-1\n";
    }
    return 0;
}