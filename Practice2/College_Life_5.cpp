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
        long long n, m;
        cin >> n >> m;
        long long arr[n], brr[m];
        vector<long long> final;
        unordered_set<long long> alpha, beta;
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
            final.push_back(arr[i]);
            alpha.insert(arr[i]);
        }
        for (int i = 0; i < m; ++i)
        {
            cin >> brr[i];
            final.push_back(brr[i]);
            beta.insert(brr[i]);
        }
        sort(final.begin(), final.end());
        bool football = true;
        long long count = 0;
        for (int i = 0; i < final.size(); ++i)
        {
            if (alpha.find(final[i]) != alpha.end())
            {
                if (football == false)
                {
                    count++;
                    football=true;
                }
            }
            else if (beta.find(final[i]) != beta.end())
            {
                if (football == true)
                {
                    count++;
                    football = false;
                }
            }
        }
       cout<<count<<"\n";
    }
    return 0;
}