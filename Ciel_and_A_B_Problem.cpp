#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b;
    cin >> a >> b;
    int diff = a - b;
    string s;
    s = to_string(diff);
    if (s[0] == '4')
    {
        s[0] = '1';
    }
    else
    {
        s[0] = '4';
    }

    cout << s;
    return 0;
}