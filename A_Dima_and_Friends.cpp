#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum = 0, count = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        sum = sum + arr[i];
    }
    int m = (sum - 1) / n;
    for (int i = sum + 1; i <= sum + 5; i++)
    {
        if (i % (n + 1) != 1)
        {
            count++;
        }
    }
    cout << count << "\n";

    return 0;
}
