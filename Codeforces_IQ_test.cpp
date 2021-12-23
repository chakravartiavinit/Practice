#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int even = 0, odd = 0, evenindex = 0, oddindex = 0;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            even++;
            evenindex = i;
        }
        else
        {
            odd++;
            oddindex = i;
        }
    }
    even > odd ? cout << oddindex + 1 : cout << evenindex + 1;

    return 0;
}