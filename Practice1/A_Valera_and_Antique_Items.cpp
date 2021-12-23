#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> ans;
    int n;
    long price;
    cin >> n >> price;
    for (int i = 1; i <= n; ++i)
    {
        vector<int> temp;
        int a;
        cin >> a;
        int Min = INT_MAX;
        for (int i = 0; i < a; ++i)
        {
            int b;
            cin >> b;
            Min = min(Min, b);
            temp.push_back(b);
        }
        if (price > Min)
        {
            ans.push_back(i);
        }
    }
    if (ans.size() == 0)
    {
        cout << "0\n";
    }
    else
    {
        sort(ans.begin(), ans.end());
        cout << ans.size() << "\n";
        for (int i = 0; i < ans.size(); ++i)
        {
            cout << ans[i] << " ";
        }
    }

    return 0;
}