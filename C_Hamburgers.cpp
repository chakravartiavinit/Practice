#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    string s;
    cin>>s;
    int nb,ns,nc,pb,ps,pc;
    cin>>nb>>ns>>nc>>pb>>ps>>pc;
    long long r;
    int countb,counts,countc;
    for(int i=0;i<s.length();++i)
    {
        if(s[i]=='B')
        {
            countb++;
        }
        else if(s[i]=='S')
        {
            counts++;
        }
        else
        {
            countc++;
        }
    }
    int alpha=min(nb/countb,min(ns/counts,nc/countc));
    

    return 0;
}