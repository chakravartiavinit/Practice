#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int d, sumTime, minTime[30], maxTime[30];
    cin >> d >> sumTime;
    for (int i = 0; i < d; ++i)
    {
        cin >> minTime[i] >> maxTime[i];
    }
    int minTimeSum = accumulate(minTime, minTime + d, 0);
    int maxTimeSum = accumulate(maxTime, maxTime + d, 0);
    if (minTimeSum <= sumTime && sumTime <= maxTimeSum)
    {
        cout << "YES\n";
        for (int i = 0; i < d; ++i)
        {
            int t = min(minTime[i] + sumTime - minTimeSum, maxTime[i]);
            cout<<t<<" ";
            sumTime -= (t - minTime[i]);
        }
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}