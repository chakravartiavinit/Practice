#include <bits/stdc++.h>
using namespace std;
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int arr[n + 1];
    for (int i = 1; i <= n; ++i)
    {
        cin >> arr[i];
    }
    int j = n, i = 1;
    int ans = INT_MIN;
    while (j > i)
    {
        if (arr[j] != arr[i])
        {
            ans = max(ans, j - i);
            break;
        }
        j--;
    }
    i = 1, j = n;
    while (j > i)
    {
        if (arr[j] != arr[i])
        {
            ans = max(ans, j - i);
            break;
        }
        i++;
    }
    cout << ans << "\n";
    return 0;
}