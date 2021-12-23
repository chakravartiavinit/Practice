#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    vector<int> vect = {1, 3, 5};
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        for (int i = 0; i < x; ++i)
        {
            cout << vect[(i + 1) % 3] << " ";
        }
        cout << "\n";
    }
    return 0;
}