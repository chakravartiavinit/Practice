#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k, i = 0, count = 0;
    cin >> n >> k;
    int a[n];
    for (i = 0; i < n; i++)
    {
        cin >> a[i];
        a[i] = a[i] + k;
    }
    sort(a, a + n);
    int number = n / 3;
    i = 0;
    while (number--)
    {
        if (a[i] <= 5 && a[i + 1] <= 5 && a[i + 2] <= 5)
        {
            count++;
        }
        i = i + 3;
    }
    cout << count << "\n";
    return 0;
}