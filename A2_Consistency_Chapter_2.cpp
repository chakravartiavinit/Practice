#include <bits/stdc++.h>
#pragma GCC target("avx2")
#pragma GCC optimization("O3")
#pragma GCC optimization("unroll-loops")
using namespace std;

// KKKKKKKKK    KKKKKKK               AAA               LLLLLLLLLLL             IIIIIIIIII        66666666           66666666           66666666
// K:::::::K    K:::::K              A:::A              L:::::::::L             I::::::::I       6::::::6           6::::::6           6::::::6
// K:::::::K    K:::::K             A:::::A             L:::::::::L             I::::::::I      6::::::6           6::::::6           6::::::6
// K:::::::K   K::::::K            A:::::::A            LL:::::::LL             II::::::II     6::::::6           6::::::6           6::::::6
// KK::::::K  K:::::KKK           A:::::::::A             L:::::L                 I::::I      6::::::6           6::::::6           6::::::6
//   K:::::K K:::::K             A:::::A:::::A            L:::::L                 I::::I     6::::::6           6::::::6           6::::::6
//   K::::::K:::::K             A:::::A A:::::A           L:::::L                 I::::I    6::::::6           6::::::6           6::::::6
//   K:::::::::::K             A:::::A   A:::::A          L:::::L                 I::::I   6::::::::66666     6::::::::66666     6::::::::66666
//   K:::::::::::K            A:::::A     A:::::A         L:::::L                 I::::I  6::::::::::::::66  6::::::::::::::66  6::::::::::::::66
//   K::::::K:::::K          A:::::AAAAAAAAA:::::A        L:::::L                 I::::I  6::::::66666:::::6 6::::::66666:::::6 6::::::66666:::::6
//   K:::::K K:::::K        A:::::::::::::::::::::A       L:::::L                 I::::I  6:::::6     6:::::66:::::6     6:::::66:::::6     6:::::6
// KK::::::K  K:::::KKK    A:::::AAAAAAAAAAAAA:::::A      L:::::L         LLLLLL  I::::I  6:::::6     6:::::66:::::6     6:::::66:::::6     6:::::6
// K:::::::K   K::::::K   A:::::A             A:::::A   LL:::::::LLLLLLLLL:::::LII::::::II6::::::66666::::::66::::::66666::::::66::::::66666::::::6
// K:::::::K    K:::::K  A:::::A               A:::::A  L::::::::::::::::::::::LI::::::::I 66:::::::::::::66  66:::::::::::::66  66:::::::::::::66
// K:::::::K    K:::::K A:::::A                 A:::::A L::::::::::::::::::::::LI::::::::I   66:::::::::66      66:::::::::66      66:::::::::66
// KKKKKKKKK    KKKKKKKAAAAAAA                   AAAAAAALLLLLLLLLLLLLLLLLLLLLLLLIIIIIIIIII     666666666          666666666          666666666

#define MOD 1000000007
#define PI 3.141592653589793238462
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

/*########################################### DEBUG ###############################################################################################*/
#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x)
#endif

void _print(long long t)
{
  cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(long double t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(unsigned long long t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

/*###############################################################################################################################################*/
void check_possible(map<char, vector<char>> &adj, vector<vector<int>> &dp, char x)
{
  int counter = 0;
  queue<char> q;
  q.push(x);
  q.push('n');
  while (q.size() > 1)
  {
    char temp = q.front();
    q.pop();
    if (temp == 'n')
    {
      counter++;
      q.push('n');
      continue;
    }

    if (dp[x - 'A'][temp - 'A'] != -1)
    {
      continue;
    }
    dp[x - 'A'][temp - 'A'] = counter;
    if (adj.find(temp) != adj.end())
    {
      for (auto k : adj[temp])
      {
        q.push(k);
      }
    }
  }
  return;
}
int main()
{
#ifndef ONLINE_JUDGE
  freopen("error.txt", "w", stderr);
#endif
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int t;
  cin >> t;
  for (int i = 1; i <= t; ++i)
  {
    string alpha;
    cin >> alpha;
    int n;
    cin >> n;
    map<char, vector<char>> graph;
    map<char, char> freq;
    while (n--)
    {
      char a1, a2;
      cin >> a1 >> a2;
      graph[a1].push_back(a2);
    }
    for (auto x : alpha)
    {
      freq[x]++;
    }
    if (freq.size() == 1)
    {
      cout << "Case #" << i << ": ";
      cout << "0\n";
    }
    else
    {
      cout << "Case #" << i << ": ";
      int ans = INT_MAX;
      string all_alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
      vector<vector<int>> possible_or_not(26, vector<int>(26, -1));
      int answer = INT_MAX;
      for (auto x : alpha)
      {
        check_possible(graph, possible_or_not, x);
      }
      for (auto x : all_alpha)
      {
        bool flag1 = true;
        int c = 0;
        for (auto y : freq)
        {
          if (possible_or_not[y.first - 'A'][x - 'A'] == -1)
          {
            flag1 = false;
            break;
          }
          else
          {
            c += possible_or_not[y.first - 'A'][x - 'A'] * y.second;
          }
        }
        if (flag1 == true)
        {
          answer = min(answer, c);
        }
      }
      if (answer == INT_MAX)
      {
        cout << "-1\n";
      }
      else
      {
        cout << answer << "\n";
      }
    }
  }
}