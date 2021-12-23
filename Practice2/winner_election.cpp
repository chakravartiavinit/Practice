#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    map<string, int> mp;
    string winner;
    int Max = 0;
    vector<string> alpha = {"abc", "xyz", "mno", "abs", "abc"};
    for (int i = 0; i < alpha.size(); ++i)
    {
        mp[alpha[i]]++;
    }
    for (auto x:mp)
    {
        if(x.second>Max)
        {
            Max=x.second;
            winner=x.first;
        }
    }
    cout<<winner<<"\n";
    return 0;
}