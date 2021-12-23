#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<string> word={"I hate","I love"};
    for(int i=1;i<=n;++i)
    {
        if((i-1)%2==0)
        {
            cout<<word[0]<<" ";
        }
        else if((i-1)%2==1)
        {
             cout<<word[1]<<" ";
        }
        if(i!=n)
        {
            cout<<"that ";
        }
    }
    cout<<"it";
    return 0;
}