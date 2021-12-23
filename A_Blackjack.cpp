#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    int queen = 10, count = 0;
    int sum = n - queen;
    if (sum <= 0)
    {
        cout << "0\n";
    }
    else
    {
        if (sum == 11)
        {
            count += 4;
        }
        else if (sum == 10)
        {
            count += 15;
        }
        else
        {
            if (sum < 11)
            {
                count += 4;
            }
        }
        cout << count << "\n";
    }

    return 0;
}