#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, mindiff = INT_MAX;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (n == 2)
    {
        cout <<"1" << " " <<"2" << "\n";
    }
    else
    {

        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                mindiff = min(mindiff, abs(a[n - 1] - a[0]));
            }
            mindiff = min(mindiff, abs(a[i + 1] - a[i]));
        }
        for (int i = 0; i < n; i++)
        {
            if (i == n - 1)
            {
                if (abs(a[n - 1] - a[0]) == mindiff)
                {
                    cout << n << " "
                         << "1"
                         << "\n";
                }
            }
            if (abs(a[i + 1] - a[i]) == mindiff)
            {
                cout << i + 1 << " " << i + 2 << "\n";
                break;
            }
        }
    }
    return 0;
}
