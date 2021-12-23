#include<bits/stdc++.h> 
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int count = 0;
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
    if(s1==s2)
    {
        cout<<"0"<<"\n";
    }
    else
    {
        if(s1>s2)
        {
            cout<<"1"<<"\n";
        }
        else
        {
            cout<<"-1"<<"\n";
        }
        
    }
    
    return 0;
}
