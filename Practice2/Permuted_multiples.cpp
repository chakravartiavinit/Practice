#include <bits/stdc++.h>
using namespace std;
bool check(int a)
{
    string a1, a2, a3, a4, a5, a6;
    a1 = to_string(a);
    a2 = to_string(2 * a);
    a3 = to_string(3 * a);
    a4 = to_string(4 * a);
    a5 = to_string(5 * a);
    a6 = to_string(6 * a);
    if (is_permutation(a2.begin(), a2.end(), a1.begin()) && is_permutation(a3.begin(), a3.end(), a1.begin()) && is_permutation(a4.begin(), a4.end(), a1.begin()) && is_permutation(a5.begin(), a5.end(), a5.begin()) && is_permutation(a6.begin(), a6.end(), a1.begin()))
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
    for (int i = 1; i < 1000000; ++i)
    {
        if (check(i) == true)
        {
            cout << i << "\n";
            break;
        }
    }
    return 0;
}