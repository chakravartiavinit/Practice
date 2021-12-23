#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    set<int> s;
    int r1, r2, d1, d2, c1, c2, a, b, c, d;
    cin >> r1 >> r2;
    cin >> c1 >> c2;
    cin >> d1 >> d2;
    if ((r1 + r2 == c1 + c2) && (c1 + c2 == d1 + d2))
    {
        a = (d1 + r1 - c2) / 2;
        b = (d2 + r1 - c1) / 2;
        c = (d2 + r2 - c2) / 2;
        d = (d1 + r2 - c1) / 2;
        s.insert(a);
        s.insert(c);
        s.insert(b);
        s.insert(d);
        if (s.size() == 4 && a > 0 && a < 10 && b > 0 && b < 10 && c > 0 && c < 10 && d > 0 && d < 10)
        {
            cout << a << " " << b << "\n";
            cout << c << " " << d << "\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
        
    }
    else
    {
        cout << "-1"
             << "\n";
    }
    return 0;
}