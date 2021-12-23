#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    getline(cin,s);
    set<char> letters;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]>=97&&s[i]<=122)
        {
            letters.insert(s[i]);
        }
    }
    cout<<letters.size()<<"\n";
    
    return 0;
}