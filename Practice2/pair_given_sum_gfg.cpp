#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool flag=false;
    vector<int> v={2,4,6,3};
    unordered_set<int> st;
    for(auto x:v)
    {
        st.insert(x);
    }
    int key=11;
    for(auto x:v)
    {
        int alpha=key-x;
        if(st.count(alpha))
        {
            flag=true;
            break;
        }
    }
    flag==true?cout<<"Found\n":cout<<"Not found\n";
    return 0;
}