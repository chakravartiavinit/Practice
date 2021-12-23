#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n], brr[n];
    int start = INT_MIN, end = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        start = max(start, arr[i]);
    }
    for (int j = 0; j < n; ++j)
    {
        cin >> brr[j];
        end = min(brr[j], end);
    }
    cout << max(0, end - start + 1) << "\n";

    return 0;
}