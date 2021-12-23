#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        long long arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cin >> k;
        int temp = arr[k - 1];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == temp)
            {
                cout << i + 1 << "\n";
                break;
            }
        }
    }
    return 0;
}