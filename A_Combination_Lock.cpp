#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, sum = 0;
    cin >> n;
    string s, s1;
    cin >> s >> s1;
    for (int i = 0; i < n; i++)
    {
        sum = sum + min(abs(s[i] - s1[i]), 10 - abs(s[i] - s1[i]));
    }
    cout << sum << "\n";
    return 0;
}