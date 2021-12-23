#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long n, c, count = 1, Max = 0;
    cin >> n >> c;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i + 1] - arr[i] <= c)
        {
            count++;
            Max = max(Max, count);
        }
        else
        {
            count = 1;
        }
    }
    cout << count << "\n";

    return 0;
}
