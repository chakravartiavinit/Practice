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
        int n, i = 0, j = 0, check = 0, ans = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        if (n > 3)
        {
            i = 0;
            j = 2;
            check = arr[1];

            while (i < j)
            {
                if (arr[i] < arr[j] && arr[j] > check)
                {
                    cout<<j<<"  "<<i<<"\n";
                    ans = max(ans, j - i);
                    check = arr[j];
                    j++;
                }
                else if (arr[j] < check)
                {
                    i++;
                }
            }
            cout << ans << "\n";
        }
        else
        {
            if (n == 2)
            {
                if (arr[0] != arr[1])
                {
                    cout << "1\n";
                }
            }
            else if (n == 3)
            {
                if (arr[0] > arr[1] > arr[2] || arr[0] < arr[1] < arr[2])
                {
                    cout << "2\n";
                }
                else if (arr[0] > arr[1] || arr[1] > arr[2] || arr[0] < arr[1] || arr[1] < arr[2])
                {
                    cout << "1\n";
                }
            }
        }
    }
    return 0;
}
