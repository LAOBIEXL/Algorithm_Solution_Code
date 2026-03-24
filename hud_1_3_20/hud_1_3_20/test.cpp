#define _CRT_SECURE_NO_WARNING

//#include<iostream>
//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<cstring>
//#include<vector>
//#include<set>
//#include<map>
//#include<unordered_map>
//#include<unordered_set>
//#include<algorithm>
//#include<cmath>
//#include<queue>
//#include <deque>
//#include <stack>
//#include<iomanip>
//#include <chrono>
//#include<random>
//using namespace std;
//typedef long long ll;
//typedef unsigned long long ull;
//typedef pair<int, int> PII;
//const int N = 0;
//const int MOD = 0;
//#define endl '\n'
//
////没有返回值也别忘写return！！！！！！！！！！！！！！
//
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    int n;
//    cin >> n;
//
//    multimap<ll, ll> mp;
//
//    for (int i = 0; i < n; ++i)
//    {
//        ll s, d;
//        cin >> s >> d;
//        mp.insert({ s, d });
//    }
//    ll tmp = 0;
//    for (auto e : mp)
//    {
//        ll s = e.first;
//        ll d = e.second;
//
//        tmp = max(tmp, s);
//
//        tmp += d;
//    }
//     
//    cout << tmp << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//    cin >> TestCase;
//    while (TestCase--)
//        solve();
//}

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<cstring>
#include<vector>
#include<set>
#include<map>
#include<unordered_map>
#include<unordered_set>
#include<algorithm>
#include<cmath>
#include<queue>
#include <deque>
#include <stack>
#include<iomanip>
#include <chrono>
#include<random>
#include<numeric>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
const int N = 0;
const int MOD = 0;
#define endl '\n'

//没有返回值也别忘写return！！！！！！！！！！！！！！

ll gcd(ll a, ll b)
{
    return  b == 0 ? a : gcd(b, a % b);
}

ll lcm(ll a, ll b)
{
    if (a == 0 || b == 0) return 0;
    return (a / gcd(a, b)) * b;
}

void solve()
{
    //不要忘记清空数组；
    //你个nt递归死路记得也要写返回；
    int n, m, q;
    cin >> n >> m >> q;

    vector<ll> a(n + 1, 1);

    for (int i = 0; i < m;i++)
    {
        int x, y;
        ll g;
        cin >> x >> y >> g;

        a[x] = lcm(a[x], g);
        a[y] = lcm(a[y], g);
    }

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        cout << gcd(a[x], a[y]) << endl;
    }
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--)
        solve();
}