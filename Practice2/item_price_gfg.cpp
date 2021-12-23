#include <bits/stdc++.h>
using namespace std;
map<int, string> mp;
void add(int item, string s)
{
    mp[item] = s;
}
string find(int price)
{
    auto it = mp.find(price);
    if (it == mp.end())
    {
        return " ";
    }
    return it->second;
}
void PrintSorted()
{
    for (auto x : mp)
    {
        cout << x.first << " " << x.second << '\n';
    }
}
void PrintGreaterSorted(int price)
{
    auto it = mp.upper_bound(price);
    if (it == mp.end())
    {
        cout << " ";
    }
    else
    {
        for (auto it1 = it; it1 != mp.end(); it1++)
        {
            cout << it1->first << " " << it1->second << " \n";
        }
    }
}
void PrintSmallerSorted(int price)
{
    auto it = mp.lower_bound(price);
    for (auto it1 = mp.begin(); it1 != it; it1++)
    {
        cout << it1->first << " " << it1->second << '\n';
    }
}
int main(int argc, char const *argv[])
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    add(10, "abc");
    add(5, "abcd");
    add(6, "abcef");
    cout << find(10) << '\n';
    PrintSorted();
    PrintGreaterSorted(7);
    PrintSmallerSorted(10);
    return 0;
}