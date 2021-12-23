#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum1 = 0, sum2 = 0, count = 0;
    cin >> n;
    vector<int> left(n), right(n);
    for (int i = 0; i < n; i++)
    {
        cin >> left[i] >> right[i];
        sum1 = sum1 + left[i];
        sum2 = sum2 + right[i];
    }

    if ((sum1 % 2 == 0 && sum2 % 2 == 1) || (sum1 % 2 == 1 && sum2 % 2 == 0))
    {
        cout << "-1\n";
    }
    else if (sum1 % 2 == 0 && sum2 % 2 == 0)
    {
        cout << "0\n";
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            swap(left[i], right[i]);
            sum1 = accumulate(left.begin(), left.end(), 0);
            sum2 = accumulate(right.begin(), right.end(), 0);
            if (sum1 % 2 == 0 && sum2 % 2 == 0)
            {
                count++;
                break;
            }
        }
        if (sum1 % 2 == 0 && sum2 % 2 == 0)
        {
            cout << count << "\n";
        }
        else
        {
            cout << "-1\n";
        }
    }

    return 0;
}