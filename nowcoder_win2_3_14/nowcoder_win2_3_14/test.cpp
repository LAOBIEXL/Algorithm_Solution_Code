#define _CRT_SECURE_NO_WARNINGS


//  A

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
//    ll a, b, c;
//    cin >> a >> b >> c;
//    ll mini = 2e17;
//    mini = min(a, mini);
//    mini = min(b, mini);
//    mini = min(c, mini);
//    ll maxi = -1;
//    maxi = max(a, maxi);
//    maxi = max(b, maxi);
//    maxi = max(c, maxi);
//    if (maxi - mini > 1)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        cout << "YES" << endl;
//    }
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

// B；

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
//    ll n;
//    cin >> n;
//    unordered_map<ll, int> mp;
//    vector<ll> a(n + 1);
//    unordered_map<ll, int> st;
//    vector<ll> num;
//    ll maxi = 0;
//    for (int i = 1; i <= n; i++)
//    {
//
//        cin >> a[i];
//        maxi = max(a[i], maxi);
//        if (!mp.count(a[i]))
//        {
//            num.push_back(a[i]);
//        }
//        mp[a[i]]++;
//    }
//    if (mp[maxi] % 2 == 0)
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            if (a[i] != maxi)
//            {
//                cout << 1; 
//            }
//            else
//            {
//                cout << 0;
//            }
//        }
//    }
//    else
//    {
//        for (int i = 1; i <= n; i++)
//        {
//            if (a[i] != maxi)
//            {
//                cout << 0;
//            }
//            else
//            {
//                cout << 1;
//            }
//        }
//    }
//    cout << endl;
//    /*sort(num.begin(), num.end());
//    bool flag = true;
//    for (int j = num.size() - 1; j >= 0; j--)
//    {
//        if (j == num.size() - 1)
//        {
//            if (mp[num[j]] % 2 == 0)
//            {
//                flag = true;
//                st[num[j]] = 0;
//            }
//            else
//            {
//                flag = false;
//                st[num[j]] = 1;
//            }
//            continue;
//        }
//        if (!flag)
//        {
//            for (int z = j; z >= 0; z--)
//            {
//                st[num[z]] = 0;
//            }
//            break;
//        }
//        if (flag)
//        {
//            st[num[j]] = 1;
//        }
//    }*/
//
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

//C:

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
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> PII;
const int MOD = 0;
#define endl '\n'

//没有返回值也别忘写return！！！！！！！！！！！！！！

void solve()
{
    //不要忘记清空数组；
    //你个nt递归死路记得也要写返回；
    int n, m;
    cin >> n >> m;
    int cnt1 = 0;
    int cnt2 = 0;
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int t;
            cin >> t;
            if (t == 0)
            {
                cnt1++;
            }
            else
            {
                cnt2++;
            }
        }
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