#define _CRT_SECURE_NO_WARNINGS


//k级台阶问题；
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
//const int M = 100003;
//#define endl '\n'
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//
//    int n, k;
//    cin >> n >> k;
//    vector<ll> f(max(k, n) + 10000);
//    f[0] = 1;
//
// /*   for (int i = 1; i < k; i++)
//    {
//        for (int j = 0; j < i; j++)
//        {
//            f[i] = (f[i] + f[j]) % M ;
//        }
//    }
//    for (int i = k; i <= n; i++)
//    {
//        for (int j = 1; j <= k; j++)
//        {
//            f[i] = (f[i] + f[i - j]) % M;
//        }
//    }*/
//
//    //事实上，可以使用统一的逻辑：
//    for (int i = 1; i <= n; i++)
//    {
//        for (int j = i - 1; j >= 0 && (i - j) <= k; j--)
//        {
//            f[i] = (f[i] + f[j]) % M;
//        }
//    }
//    cout << f[n] % M << endl;
//
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//  
//    while (TestCase--)
//        solve();
//}

//传球问题：
//
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
//const int N = 1000;
//#define endl '\n'
//ll f[N][N] = {};
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    int n, m;
//    cin >> n >> m;
//  
//    //初始化：
//    for (int i = 0; i < n; i++)
//    {
//        f[0][i] = 0;
//    }
//    f[0][0] = 1;
//
//    for (int i = 1; i <= m; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            f[i][j] = f[i - 1][((j - 1) % n + n) % n] + f[i - 1][(j + 1) % n];
//        }
//    }
//    cout << f[m][0] << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int TestCase = 1;
//  
//    while (TestCase--)
//        solve();
//}




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
//    string s;
//    cin >> s;
//    int ret = 0;
//
//    for(int i = 0; i <n; i++)
//    {
//        string tmp = "";
//        for (int j = 0; j < n; j++)
//        {
//            tmp += s[(i + j) % n];
//        }
//        int cnt = 1;
//        for (int z = 1; z < tmp.size(); z++)
//        {
//            if (tmp[z] != tmp[z - 1])
//            {
//                cnt++;
//            }
//        }
//        ret = max(ret, cnt);
//        
//
//    }
//    cout << ret << endl;
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
//    string a;
//    cin >> a;
//    int cnt1 = 0;
//    int cnt2 = 0;
//    vector<int> idx1;
//    vector<int> idx2;
//    for(int i = 0;i < a.size()  ;i++)
//    {
//        
//        if (a[i] == '0')
//        {
//            cnt1++;
//            idx1.push_back(i);
//        }
//        else
//        {
//            cnt2++;
//            idx2.push_back(i);
//        }
//    }
//    if (cnt1 % 2 == 1)
//    {
//        cout << cnt1 << endl;
//        for (int i = 0; i < idx1.size(); i++)
//        {
//            cout << idx1[i] + 1 << " ";
//        }
//        cout << endl;
//    }
//    else if (cnt2 % 2 == 0)
//    {
//        cout << cnt2 << endl;
//        if (cnt2 != 0)
//        {
//            for (int i = 0; i < idx2.size(); i++)
//            {
//                cout << idx2[i] + 1 << " ";
//            }
//            cout << endl;
//        }
//    }
//    else
//    {
//        cout << -1 << endl;
//    }
//
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
const int N = 0;
const int MOD = 0;
const ll INF = 2e18;
#define endl '\n'

//没有返回值也别忘写return！！！！！！！！！！！！！！


void solve()
{
    //不要忘记清空数组；
    //你个nt递归死路记得也要写返回；
    ll n, h, k;
    cin >> n >> h >> k;
    vector<ll> a(n + 2);
    vector<ll> s(n + 2);
    s[0] = 0;

    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        sum += a[i];
        s[i] = a[i] + s[i - 1];
    }
    vector<ll> min_pre(n + 2);
    min_pre[0] = INF;
    for (int i = 1; i <= n; i++)
    {
        min_pre[i] = min(min_pre[i - 1], a[i]);
    }
    vector<ll> max_pre(n + 2);  //i 之后；
    max_pre[n] = a[n];
    for (int i = n - 1; i >= 1; i--)
    {
        max_pre[i] = max(a[i], max_pre[i + 1]);
    }
    ll ret = INF;
    if (sum > h)
    {
        
        for (ll i = 1; i <= n; i++)
        {
            ll sum_x = s[i];
            if (min_pre[i] < max_pre[i+ 1])
            {
                sum_x = sum_x + max_pre[i + 1] - min_pre[i];
            }
            if (sum_x > h)
            {
                ret = min(i, ret);
            }
        }
        cout << ret << endl;
    }
    else
    {
        ll round = h / sum;
        for (ll i = 1; i <= n; i++)
        {
            ll sum_x = s[i];
            if (min_pre[i] < max_pre[i + 1])
            {
                sum_x = sum_x + max_pre[i + 1] - min_pre[i];
            }
            if (sum_x > h)
            {
                ret = min(i, ret);
            }
        }
        cout << ret + round * k + round * n << endl;
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

/*for (int i = 1; i <= n; i++)
    {
        ll x_sum = s[i];
        if (min_pre[i] < max_pre[i + 1])
        {
            x_sum = x_sum - min_pre[i] + max_pre[i + 1];
        }
        ll cnt = 0;
        ll d = h - x_sum;
        if (d > 0)
        {
            cnt = (d + sum - 1) / sum;
        }
        ll tmp = cnt * n + cnt * k + i;

        ret = min(ret, tmp);
    }

    cout << ret << endl;*/

//ll cnt = 0;
//cnt = h / sum;
//ll x = h - (cnt * sum);
//ll t_ret = 0;
//ll t_ret_min = n + 1;
//for (int i = 1; i <= n; i++)
//{
//    ll min1 = a[1];
//    ll pos1 = 0;
//    ll pos2 = 0;
//    ll max2 = a[i + 1];
//    for (int j = 1; j <= i; j++)
//    {
//        if (a[j] <= min1)
//        {
//            min1 = a[j];
//            pos1 = j;
//        }
//
//    }
//    for (int j = i + 1; j <= n; j++)
//    {
//        if (a[j] >= max2)
//        {
//            pos2 = j;
//            max2 = a[j];
//        }
//    }
//    swap(a[pos1], a[pos2]);
//    ll sum_x = 0;
//    for (int j = 1; j <= n; j++)
//    {
//        sum_x += a[j];
//        if (sum_x >= x)
//        {
//            t_ret++;
//            t_ret_min = min(t_ret, t_ret_min);
//        }
//        else
//        {
//            t_ret++;
//        }
//    }
//    swap(a[pos1], a[pos2]);
//}
//cout << cnt * k + cnt * n + t_ret_min << endl;