#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin >> s;
    int n=s.length() - 1, ind=n;

    for (int i = 0; i < n; i++)
        if ((s[i] - '0') % 2 == 0)
        {
            ind = i;
            if (s[n] > s[i])
                break;
        }

    if (n == ind)
        cout << -1 << endl;
    else
    {
        swap(s[ind], s[n]);
        cout << s << endl;
    }
    return 0;
}