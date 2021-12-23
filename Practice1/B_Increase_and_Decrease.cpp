#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin>>n;
    vector<int> v(n);
    long long sum=0;
    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
        sum+=v[i];
    }
    if(sum%n==0)
    {
        cout<<n<<"\n";
    }
    else
    {
        cout<<n-1<<"\n";
    }
    

    return 0;
}