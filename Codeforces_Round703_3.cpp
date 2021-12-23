#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int answer = 1, n;
        cin >> n;
        long long int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        for (int i = 1; i < n; i++)
        {
            long long int temp = arr[i - 1];
            arr[i - 1] = arr[i - 1] - arr[i - 1] + (i - 1);
            arr[i] = arr[i] + temp - (i - 1);

            if ((arr[i - 1] >= arr[i]) || (arr[i - 1] < 0))
            {
                answer = 0;
                break;
            }
        }

        if (answer == 1)
        {
            cout << "YES"
                 << "\n";
        }
        else
        {
            cout << "NO"
                 << "\n";
        }
    }
    return 0;
}