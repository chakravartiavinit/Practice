#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    double a, b, c, d;
    cin >> a >> b >> c >> d;
    double alpha = a * d;
    alpha /= (b * c + a * d - a * c);
    cout << fixed << setprecision(12) << alpha << "\n";

    return 0;
}