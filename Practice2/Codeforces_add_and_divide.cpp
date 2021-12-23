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
        int count = 0;
        long int a, b;
        cin >> a >> b;
        while (a > b)
        {
            if (b == 1)
            {
                a = a / b;
                count++;
                b++;
                count++;
            }
            else
            {
                a = a / b;
                count++;
                if (a == b)
                {
                    b++;
                    count++;
                }
            }
        }
        cout << count << "\n";
    }
    return 0;
}