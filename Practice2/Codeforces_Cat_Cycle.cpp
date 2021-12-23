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
        int n, k, count = 1, i, j;
        cin >> n >> k;
        i = n;
        j = 1;
        while (count < k)
        {
            if (i == 1)
            {
                i = n;
            }

            i--;
            j++;
            if (j == n)
            {
                j = 1;
            }

            if (i == j)
            {
                i++;
            }
            count++;
        }
        cout << j << "\n";
    }
    return 0;
}
