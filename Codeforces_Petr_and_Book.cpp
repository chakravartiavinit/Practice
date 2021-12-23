#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, i = 0, last = 0;
    cin >> n;
    int a[7];
    for (int i = 0; i < 7; i++)
    {
        cin >> a[i];
    }

    while (n>0)
    {

        n = n - a[i];
        i++;
        if (i == 7&&n>0)
        {
            i = 0;
        }
    }
    cout << i << "\n";
    return 0;
}
