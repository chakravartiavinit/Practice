#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, x, recruit = 0, count = 0;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == -1)
        {
            if (recruit > 0)
            {
                recruit--;
            }
            else
            {
                count++;
            }
        }
        else
        {
            recruit += x;
        }
    }
    cout << count << "\n";
    return 0;
}