#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, q;
    cin >> n >> q;
    int arr[n + 1];
    int Max = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
        if (arr[i] == 1)
        {
            Max++;
        }
    }
    while (q--)
    {
        int temp1, temp2;
        cin >> temp1 >> temp2;
        if (temp1 == 1)
        {
            if (arr[temp2] == 1)
            {
                Max--;
            }
            else
            {
                Max++;
            }
            arr[temp2] = 1 - arr[temp2];
        }
        else if (temp1 == 2)
        {
            if (Max >= temp2)
            {
                cout << "1\n";
            }
            else
            {
                cout << "0\n";
            }
        }
    }
    return 0;
}