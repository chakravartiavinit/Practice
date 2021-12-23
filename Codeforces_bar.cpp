#include <bits/stdc++.h>
#include <string>
using namespace std;
int number(string s)
{
    int ans = 0;
    for (int i = 0; i < s.length(); i++)
        ans = ans * 10 + s[i] - '0';
    return ans;
}
string words[] = {"ABSINTH", "BEER", "BRANDY", "CHAMPAGNE", "GIN", "RUM", "SAKE", "TEQUILA", "VODKA", "WHISKEY", "WINE"};
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    int n, count = 0, ans = 0;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s[0] >= '0' && s[0] <= '9')
        {
            if (number(s) < 18)
                ans++;
        }
        else
        {
            for (int i = 0; i < 11; i++)
            {
                if (s == words[i])
                    ans++;
            }
        }
    }
    cout << ans << "\n";
    return 0;
}
