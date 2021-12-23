#include <bits/stdc++.h>
#include <iostream>
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
        int n, even=0, odd=0;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
            {
                odd++;
            }
        }
        cout << min(even, odd) << "\n";
    }
    return 0;
}
