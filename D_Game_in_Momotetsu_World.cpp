#include<bits/stdc++.h>
using namespace std;

#define MOD 1000000007
#define PI 3.141592653589793238462

/*########################################### DEBUG ###############################################################################################*/
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(long long t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(long double t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(unsigned long long t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}

/*###############################################################################################################################################*/
int main() {
#ifndef ONLINE_JUDGE
freopen("error.txt", "w", stderr);
#endif
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);                    
    cout.tie(NULL);
    int h,w;
    cin>>h>>w;
    char arr[h+10][w+10];
    for(int i=1;i<=w;++i)
    {
        for(int j=1;j<=h;++j)
        {
            cin>>arr[i][j];
        }
    }
    int player1=0,player2=0;
    int i=0,j=0,count=0;
    while(i<=w&&j<=h)
    {
        if(arr[i+1][j]=='+')
        {
            if(count%2==0)
            {
                player1++;
            }
            else
            {
                player2++;
            }
            i=i+1;
            
        }
        else if(arr[i][j+1]=='+')
        {
            if(count%2==0)
            {
                player1++;
            }
            else
            {
                player2++;
            }
            j=j+1;
        }
        
    }
}
