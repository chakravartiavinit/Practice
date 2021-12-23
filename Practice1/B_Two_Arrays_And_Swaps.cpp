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
        cin >> n >> k;
        int arr[n], brr[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < n; ++i)
        {
            cin >> brr[i];
        }
        sort(arr, arr + n);
        sort(brr, brr + n, greater<int>());
        int i = 0;
        while (i < n && k > 0)
        {
            if (arr[i] < brr[i])
            {
                swap(arr[i], brr[i]);
                k--;
            }
            i++;
        }
        int sum = 0;
        for (auto x : arr)
        {
            sum += x;
        }
        cout << sum << "\n";
    }
    return 0;
}