#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, m,increase=0;
    cin >> n >> m;
    int arr[n];
    vector<int> answer;
    for (int i = 0; i < n; ++i)
    {
        cin >> arr[i];
    }
    while (m--)
    {
        int query;
        cin >> query;
        if (query == 1)
        {
            int vi, xi;
            cin >> vi >> xi;
            arr[vi-1] = xi-increase;
        }
        else if (query == 2)
        {
            int yi;
            cin >> yi;
            increase+=yi;
        }
        else
        {
            int qi;
            cin >> qi;
            answer.push_back(arr[qi-1]+increase);
        }
    }
    for (int i = 0; i < answer.size(); ++i)
    {
        cout << answer[i] << "\n";
    }
    return 0;
}
