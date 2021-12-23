#include <bits/stdc++.h>
#include <algorithm>
using namespace std;
int getMin(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = min(res, arr[i]);
    return res;
}

int getMax(int arr[], int n)
{
    int res = arr[0];
    for (int i = 1; i < n; i++)
        res = max(res, arr[i]);
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        long int A[n];
        for (int i = 0; i < n; i++)
            cin >> A[i];
        sort(A, A + n);
        cout << 2 * (A[n - 1] - A[0]) << "\n";
    }
    return 0;
}
