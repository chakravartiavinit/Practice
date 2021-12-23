#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, sum = 0, sum1;
        cin >> n;
        long long arr[n];
        for (long long i = 0; i < n; i++)
        {
            cin >> arr[i];
            sum += arr[i];
        }
        sum1 = n * (n - 1) / 2;
        if (sum > sum1)
        {
            cout << "Second\n";
        }
        else
        {
            if ((sum1 - sum) % 2 == 0)
            {
                cout << "Second\n";
            }
            else
            {
                cout << "First\n";
            }
        }
    }
    return 0;
}