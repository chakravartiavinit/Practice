#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, count = 0;
    cin >> n >> a;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < a; i++)
    {
        if (arr[i] == 1 && arr[n - a - 2] == 1)
        {
            count++;
        }
    }
    if (a * 2 < n)
    {
        for (int i = a; i < n; i++)
        {
            if (arr[i] == 1)
            {
                count++;
            }
        }
    }
    cout << count << "\n";
    return 0;
}
