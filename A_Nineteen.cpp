#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int arr[30] = {0}, count = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'n' || s[i] == 'i' || s[i] == 'e' || s[i] == 't')
        {
            arr[s[i] - 'a']++;
        }
    }
    int n = (arr['n' - 'a'] - 1) / 2;
    int i = arr['i' - 'a'];
    int e = arr['e' - 'a'] / 3;
    int t = arr['t' - 'a'];
    count = min(n, min(i, min(e, t)));
    cout << count << "\n";
    return 0;
}
