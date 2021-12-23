#include <bits/stdc++.h>
using namespace std;
bool isPerfectSquare(long double x)
{
    // Find floating point value of
    // square root of x.
    if (x >= 0)
    {

        long long sr = sqrt(x);

        // if product of square root
        //is equal, then
        // return T/F
        return (sr * sr == x);
    }
    // else return false if n<0
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, count = 0;
    cin >> n;
    set<vector<int>> s;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i - 1; j++)
        {
            int k = (i * i) - (j * j);
            if (isPerfectSquare(k))
            {
                vector<int> v;
                v.push_back(i);
                v.push_back(j);
                v.push_back(sqrt(k));
                sort(v.begin(), v.end());
                s.insert(v);
                v.clear();
            }
        }
    }
    cout << s.size() << "\n";
    return 0;
}
