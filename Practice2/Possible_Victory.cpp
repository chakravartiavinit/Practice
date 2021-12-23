#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int r,o,c;
    cin>>r>>o>>c;
    int temp=(20-o)*6*6;
    if(c+temp>r)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    

    return 0;
}