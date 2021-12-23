#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m;
    cin >> n >> m;
    int arr[n], brr[m];
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    for (int j = 0; j < m; ++j)
    {
        cin >> brr[j];
    }
    sort(arr, arr + n);
    sort(brr, brr + m);
    int Min = 2 * arr[0];
    Min = max(Min, arr[n - 1]);
    if (brr[0] <= Min)
    {
        cout << "-1\n";
    }
    else
    {
        cout << Min << "\n";
    }

    return 0;
}