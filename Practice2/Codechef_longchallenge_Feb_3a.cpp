#include <bits/stdc++.h>
using namespace std;
void check(int a, int l, int r)
{
    if ((l <= a && a <= r) || (l == a || r == a))
    {
        cout << "1";
    }
    else
    {
        cout << "0";
    }
}
int calculateHour(string a, string b)
{
    int h;
    h = 10 * (a[0] - '0') + 1 * (a[1] - '0');
    if (b[0] == 'P')
    {
        if (h != 12)
        {
            h = h + 12;
        }
    }
    if (b[0] == 'A')
    {
        if (h == 12)
        {
            h = h - 12;
        }
    }
    return h;
}
int calculateMinute(string a)
{
    int min;
    min = 10 * (a[3] - '0') + (a[4] - '0');
    return min;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        string main1, main2;
        cin >> main1;
        cin >> main2;
        int p;
        cin >> p;
        while (p--)
        {
            string s1, s2, s3, s4;
            cin >> s1;
            cin >> s2;
            cin >> s3;
            cin >> s4;
            int mainhour, mainminute, fshour, fsminute, fehour, feminute, final1, final2, final3;
            mainhour = calculateHour(main1, main2);
            mainminute = calculateMinute(main1);
            fshour = calculateHour(s1, s2);
            fsminute = calculateMinute(s1);
            fehour = calculateHour(s3, s4);
            feminute = calculateMinute(s3);
            final1 = mainhour * 60 + mainminute;
            final2 = fshour * 60 + fsminute;
            final3 = fehour * 60 + feminute;
            check(final1, final2, final3);
        }
        cout << "\n";
    }
    return 0;
}