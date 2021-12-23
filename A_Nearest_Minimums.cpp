#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    long long arr[n];
    long long Min = INT_MAX;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
        Min = min(arr[i], Min);
    }
    vector<long long> alpha;
    for (int i = 0; i < n; ++i)
    {
        if (arr[i] == Min)
        {
            alpha.push_back(i);
        }
    }
    long long ans = INT_MAX;
    for (int i = 0; i < alpha.size() - 1; ++i)
    {
        ans = min(ans, alpha[i + 1] - alpha[i]);
    }
    cout << ans << "\n";

    return 0;
}