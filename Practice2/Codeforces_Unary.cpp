#include<bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int a;
    string s1;
    vector<int> s2;
    cin>>s1;
    for(int i=0;i<s1.length();i++)
    {
        if(s1[i]=='>')
        {
            s2.push_back(1000);
        }
        if(s1[i]=='<')
        {
            s2.push_back(1001);
        }
        if(s1[i]=='+')
        {
            s2.push_back(1010);
        }
        if(s1[i]=='-')
        {
            s2.push_back(1011);
        }
        if(s1[i]=='.')
        {
            s2.push_back(1100);
        }
        if(s1[i]==',')
        {
            s2.push_back(1101);
        }
        if(s1[i]=='[')
        {
            s2.push_back(1110);
        }
        if(s1[i]==']')
        {
            s2.push_back(1111);
        }
    }
    cout<<s2[0]<<s2[1]<<s2[2]<<endl;

    return 0;
}
