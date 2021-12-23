#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int num;
    int prf[150000];
    int mi = INT_MAX;
    int start = 0;
    for (int i = 1; i <= n; ++i)
    {
        cin >> num;
        prf[i] = prf[i - 1] + num;
        if (i >= k)
        {
            int sum = prf[i] - prf[i - k];
            if (sum < mi)
            {
                mi = sum;
                start = i - k + 1;
            }
        }
    }

    cout << start;
    return 0;
}