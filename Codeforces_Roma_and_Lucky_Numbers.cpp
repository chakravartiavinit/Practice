#include <bits/stdc++.h>
using namespace std;
bool lucky(int n, int k)
{
    int count = 0;
    while (n > 1)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            count++;
        }
        n = n / 10;
    }
    if (count <= k)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long a;
    int n, k, count = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (lucky(a, k))
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}