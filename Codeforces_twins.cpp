#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, a, sum = 0, count = 0, totalsum, psum, i = 0;
    cin >> n;
    vector<int> coins;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        coins.push_back(a);
    }
    sort(coins.begin(), coins.end(), greater<int>());
    totalsum = accumulate(coins.begin(), coins.end(), 0);
    for (int i = 0; i < n; i++)
    {

        psum = totalsum - sum;
        if (sum > psum)
        {
            break;
        }
        else
        {
            sum += coins[i];
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}
