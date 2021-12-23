#include <bits/stdc++.h>
using namespace std;
unordered_map<int, int> mp;
void Set(int a, int b)
{
    mp[a] = b;
}
int Get(int a)
{
    return mp[a];
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    Set(1, 100);
    Set(2, 100);
    Set(1, 110);
    cout << Get(1);

    return 0;
}