#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, azero = 0, aone = 0, bzero = 0, bone = 0, a, b, sum1 = 0, sum2 = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a == 0)
        {
            azero++;
        }
        if (a == 1)
        {
            aone++;
        }
        if (b == 0)
        {
            bzero++;
        }
        if (b == 1)
        {
            bone++;
        }
    }
    if (azero > aone)
    {
        sum1 = aone;
    }
    else
    {
        sum1 = azero;
    }
    if (bzero > bone)
    {
        sum2 = bone;
    }
    else
    {
        sum2 = bzero;
    }
    cout << sum1 + sum2 << "\n";

    return 0;
}
