#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int arr[]={1,1,2,1,3,3};
    int k,n;
    n=sizeof(arr)/sizeof(arr[0]);
    cin >> k;
    int alpha = n / k;
    set<int> st;
    for (auto x : arr)
    {
        st.insert(x);
    }
    if (alpha > st.size())
    {
        cout << st.size() << " ";
    }
    else
    {
        cout << alpha << " ";
    }
    return 0;
}