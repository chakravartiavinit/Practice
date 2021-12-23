#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, b, l, r, Max = 0, sum = 0;
    cin >> n >> a >> b;
    int arr[110] = {0};
    for (int i = a; i < b; i++)
    {
        arr[i]++;
    }
    while (n--)
    {
        cin >> l >> r;
        for (int i = l; i < r; i++)
        {
            arr[i]++;
        }
        Max = max(Max, a);
    }
    for (int i = a; i < b; i++)
    {
        if (arr[i] == 1)
        {
            sum++;
        }
    }
    cout << sum << "\n";

    return 0;
}