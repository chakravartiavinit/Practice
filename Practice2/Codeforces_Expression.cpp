#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int a, b, c, s1, s2, s3, s4, s5, s6, final;
    cin >> a >> b >> c;
    s1 = a + b + c;
    s2 = a * b * c;
    s3 = a * (b + c);
    s4 = a + (b * c);
    s5 = (a + b) * c;
    s6 = (a * b) + c;
    final = max(s1, max(s2, max(s3, max(s4, max(s5, s6)))));
    cout << final << "\n";

    return 0;
}