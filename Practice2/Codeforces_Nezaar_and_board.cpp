#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;
int GcdNumber(int a, int b)
{
    if (b == 0)
        return a;
    return GcdNumber(b, a % b);
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        long long int n, k, input, store;
        long int first;
        bool test = false;
        cin >> n >> k;
        vector<long long int> v, v1;
        for (int i = 0; i < n; i++)
        {
            cin >> input;
            v.push_back(input);
            v1.push_back(abs(k - input));
        }
        sort(v.begin(), v.end());
        first = v[1] - v[0];
        for (int i = 2; i < n; i++)
        {
            first = GcdNumber(first,v[i] - v[i - 1]);
        }
        for (int i = 0; i < n; i++)
        {
            if (v1[i] % first == 0)
            {
                test = true;
                break;
            }
        }
        test == true ? cout << "YES" : cout << "NO";
        cout << "\n";
    }
    return 0;
}
