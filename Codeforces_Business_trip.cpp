#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int k, sum = 0, count = 0;
    cin >> k;
    int a[12];
    for (int i = 0; i < 12; i++)
    {
        cin >> a[i];
    }
    sort(a, a + 12);
    int i = 11;
    while (k > 0 && i >= 0)
    {
        count++;
        k = k - a[i];
        i--;
    }
    if (k > 0)
    {
        cout << "-1"
             << "\n";
    }
    else
    {
        cout << count << "\n";
    }

    return 0;
}