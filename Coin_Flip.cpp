#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long int N;
    int G, T, I, Q;
    cin >> T;
    while (T--)
    {
        cin >> G;
        while (G--)
        {
            cin >> I >> N >> Q;
            if (N % 2 == 0 || I == Q)
                cout << N / 2 << "\n";
            else
                cout << N / 2 + 1 << "\n";
        }
    }
    return 0;
}