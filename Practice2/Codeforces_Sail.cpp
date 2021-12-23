#include <bits/stdc++.h>
using namespace std;
bool check(int a, int b)
{
    if (a == b)
    {
        return true;
    }
    return false;
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, count = -1;
    long sx, sy, ex, ey;
    cin >> t;
    cin >> sx >> sy >> ex >> ey;
    string inst;
    cin >> inst;
    for (int i = 0; i < t; ++i)
    {
        switch (inst[i])
        {
        case 'E':
            if (sx < ex)
            {
                sx += 1;
            }
            break;
        case 'S':
            if (sy > ey)
            {
                sy -= 1;
            }
            break;
        case 'W':
            if (sx > ex)
            {
                sx -= 1;
            }
            break;
        case 'N':
            if (sy < ey)
            {
                sy += 1;
            }
            break;
        default:
            break;
        }
        if (sx == ex && sy == ey)
        {
            count = i + 1;
            break;
        }
    }
    cout << count  << "\n";
    return 0;
}