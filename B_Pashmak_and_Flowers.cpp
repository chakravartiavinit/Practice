#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long n, count1 = 0, count2 = 0, sum = 0;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr, arr + n);
    long long ans1 = arr[n - 1] - arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == arr[0])
        {
            count1++;
        }
        else if (arr[i] == arr[n - 1])
        {
            count2++;
        }
    }
    if (sum / n == arr[0])
    {
        cout << ans1 << " " << n * (n - 1) / 2;
    }
    else
    {
        cout << ans1 << " " << count1 * count2 << "\n";
    }

    return 0;
}