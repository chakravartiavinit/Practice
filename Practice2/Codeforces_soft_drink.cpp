#include<iostream>
#include<algorithm>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,k,l,c,d,p,nl,np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t=(k*l)/nl;
    int x=c*d;
    int y=p/np;
    cout<<(min(min(t,x),y))/n<<"\n";
    return 0;
}
