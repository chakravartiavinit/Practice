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
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    if (n <= 2)
    {
        cout << n << "\n";
    }
    else
    {
        long long i = 0, m = 0, x = 2;
        for (int i = 0; i < n - 2; ++i)
        {
            if (arr[i] + arr[i + 1] == arr[i + 2])
            {
                x++;
            }
            else
            {
                x = 2;
            }

            m = max(m, x);
        }

        cout << m;
    }
    return 0;
}