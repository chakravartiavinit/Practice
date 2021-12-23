#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag=false;
    vector<int> v1, v2;
    long n;
    cin >> n;
    pair<int, int> arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr, arr + n);
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i].first < arr[i + 1].first && arr[i].second > arr[i + 1].second)
        {
            flag = true;
            break;
        }
    }
    flag == true ? cout << "Happy Alex\n" : cout << "Poor Alex\n";

    return 0;
}