#include <bits/stdc++.h>
#include <cmath>
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
        int n, k, minusone = 0, zero = 0, nonzero = 0, maximum;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] == -1)
            {
                minusone++;
            }
            else if (a[i] = 0)
            {
                zero++;
            }
            else if (a[i] > 0)
            {
                nonzero++;
            }
        }
        if (n-minusone < ceil(n / 2))
        {
            cout << "Rejected"
                 << "\n";
        }
        else
        {
            if (maximum > k)
            {
                cout << "Too Slow"
                     << "\n";
            }
            else
            {
                if (minusone + zero + nonzero == n && maximum <= 1)
                {
                    cout << "Bot"
                         << "\n";
                }
                else
                {
                    cout << "Accepted"
                         << "\n";
                }
            }
        }
    }
    return 0;
}
