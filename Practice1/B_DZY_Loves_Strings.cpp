#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int k;
    cin >> k;
    long long sum = 0;
    vector<int> arr(26);
    for (int i = 0; i < 26; ++i)
    {
        cin >> arr[i];
    }
    int alpha = *max_element(arr.begin(), arr.end());
    for (int i = 0; i <s.length(); ++i)
    {
        sum = sum + (i+1) * arr[s[i] - 'a'];
    }
    for (int i = s.length() + 1; i < s.length() + k + 1; i++)
    {
        sum = sum + i * alpha;
    }
    cout << sum << "\n";
    return 0;
}