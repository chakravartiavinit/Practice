#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long ans = 0;
    long long n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    long long arr[30] = {0};
    for (int i = 0; i < s.length(); i++)
    {
        arr[s[i] - 'A']++;
    }
    sort(arr, arr + 30);
    for (int i = 29; i >= 0 && k;i--)
    {
        if (k >= arr[i])
        {

            k = k - arr[i];
            ans = ans + arr[i] * arr[i];
        }
        else
        {
            ans = ans + k * k;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}
