#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n, k;
    cin >> n >> k;
    int c1 = 0, c2 = 0;
    vector<int> s;
    string password;
    while (n--)
    {
        string temp;
        cin >> temp;
        s.push_back(temp.length());
    }
    cin >> password;
    int plength = password.length();
    sort(s.begin(), s.end());
    for (auto x : s)
    {
        if (x < plength)
        {
            c1++;
        }
        else if (x == plength)
        {
            c2++;
        }
        else
        {
            break;
        }
    }
    int Min = 0, Max = 0, sum = 0;
    int z = c1 + c2;
    int a = c1 + (c1 / k) * 5 + 1;
    int b = z + ((z - 1) / k) * 5;
    cout << a << " " << b << "\n";
    return 0;
}