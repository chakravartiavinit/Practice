#include <iostream>
using namespace std;
int main() {
	//code
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--)
    {
        long long int n,nextterm;
        cin>>n;
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        for(int i=4;i<=n;i++)
        {
            nextterm=(a1%1000007+a2%1000007+a3%1000007)%1000007;
            a1=a2;
            a2=a3;
            a3=nextterm;
        }
        cout<<nextterm<<"\n";
    }
	return 0;
}