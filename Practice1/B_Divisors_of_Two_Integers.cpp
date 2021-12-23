#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    map<int, int> v;
    int alpha = 0;
    for (int i = 0; i < n; ++i)
    {
        int temp;
        cin >> temp;
        alpha = max(alpha, temp);
        v[temp]++;
    }
    for (int i = 2; i <= alpha; i++)
    {
        if (alpha % i == 0)
        {
            v[i]--;
        }
    }
    int beta = 0;
    for (auto x : v)
    {
        if (x.second > 0)
        {
            beta = max(beta, x.first);
        }
    }
    cout << alpha << " " << beta << "\n";
    return 0;
}