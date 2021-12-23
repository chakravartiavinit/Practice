#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a = 0, b = 0, c = 0, i = 0;
    cin >> n;
    int arr[n];
    for (i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i % 3 == 0)
        {
            a = a + arr[i];
        }
        else if (i % 3 == 1)
        {
            b = b + arr[i];
        }
        else if (i % 3 == 2)
        {
            c = c + arr[i];
        }
    }
    if (max(a, max(b, c)) == a)
    {
        cout << "chest\n";
    }
    else
    {
        if (max(b, c) == b)
        {
            cout << "biceps\n";
        }
        else
        {
            cout << "back\n";
        }
    }

    return 0;
}