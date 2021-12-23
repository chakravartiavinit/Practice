#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long int t;
    cin >> t;
    while (t--)
    {
        long long int A, B, n, flag = 0;
        cin >> A >> B >> n;
        long long int a[n], b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int j = 0; j < n; j++)
        {
            cin >> b[j];
        }
        int i = 0;
        while (i < n)
        {
            B = B - ceil(b[i] / A) * a[i];
            b[i] = b[i] - ceil(b[i] / A) * A;
            if (B < 0 && b[i] > 0)
            {
                flag = 1;
                break;
            }
            i++;
        }
        if (flag == 1)
        {
            cout << "NO"
                 << "\n";
        }
        else
        {
            cout << "YES"
                 << "\n";
        }
    }
    return 0;
}