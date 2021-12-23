#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a1, a2, a3, a4, sum = 0;
    cin >> a1 >> a2 >> a3 >> a4;
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '1')
        {
            sum = sum + a1;
        }
        else if (s[i] == '2')
        {
            sum = sum + a2;
        }
        else if (s[i] == '3')
        {
            sum = sum + a3;
        }
        else
        {
            sum = sum + a4;
        }
    }
    cout << sum << '\n';

    return 0;
}