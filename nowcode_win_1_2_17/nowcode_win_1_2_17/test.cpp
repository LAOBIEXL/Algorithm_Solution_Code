#define _CRT_SECURE_NO_WARNINGS

//E

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
//#define endl '\n'
//
//void solve()
//{
//    //不要忘记清空数组；
//    int n, k;
//    cin >> n >> k;
//
//    n++;
//
//    vector<int> a(n, k);
//    for (int i = 0; i < n - 1; i++)
//    {
//        cin >> a[i];
//    }
//    int ans = -0x3f3f3f3f;
//    for (int i = 0; i < n; i++)
//    {
//        ans = max(ans, a[i] + a[(i + 1) % n]);
//    }
//
//    cout << ans << endl;
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    int T;
//    cin >> T;
//    while(T--)
//        solve();
//}


//B

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
//const int N = 0;
//#define endl '\n'
//
//ll cal(ll x)
//{
//    int  n = 1;
//    for (int i = 1; i <= x; i++)
//    {
//        n = n * i % 998244353;
//    }
//    return n;
//}
//
//
//void solve()
//{
//    //不要忘记清空数组；
//    ll n;
//    cin >> n;
//    vector<ll> a(n);
//    vector<ll> b(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> a[i];
//    }
//    ll minb = 0x3f3f3f3f;
//    for (int i = 0; i < n; i++)
//    {
//        cin >> b[i];
//        minb = min(minb, b[i]);
//    }
//    ll cnt = 0;
//    for (int i = 0; i < n; i++)
//    {
//        if (a[i] > minb)
//        {
//            cnt++;
//        }
//    }
//    ll cntp = n - cnt;
//    ll ret = (cal(cnt) * cal(cntp)) % 998244353;
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


//A : A + B

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
//const ll N = 998244353;
//#define endl '\n'
//vector<ll> nums(10);
//
//
//ll qpow(ll a, ll m)
//{
//    ll t = a;
//    ll ret = 1;
//    while (m)
//    {
//        if (m & 1) ret = ret * t % N;
//        t = t * t % N;
//        m >>= 1;
//    }
//    return ret;
//}
//
//ll calc(ll i,vector<ll> &p,vector<ll> &p2)
//{
//    ll ret = 1;
//    ll cnt = 0;
//    ll t = nums[i];
//    while (cnt <= 6)
//    {
//        if (t & 1) {
//            ret = ret * p[cnt] % N;
//        }
//        else
//        {
//            ret = ret * p2[cnt] % N;
//        }
//        cnt++;
//        t >>= 1;
//    }
//    return ret;
//}
//
//ll calnum(ll cur, vector<ll> & p1)
//{
//    ll ans = 0;
//    ll t1 = cur % 10;
//    ll t2 = (cur / 10) % 10;
//    ll t3 = (cur / 100) % 10;
//    ll t4 = (cur / 1000) % 10;
//    ans = ((p1[t1] * p1[t2]) % N) * (p1[t3] * p1[t4] % N) % N;
//    return ans;
//
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    ll C;
//    cin >> C;
//    vector<ll> p(8);
//    vector<ll> p2(8);
//    for (int i = 0; i <= 6; i++)
//    {
//        cin >> p[i]; 
//        p2[i] = (100 - p[i]) * qpow(100, N - 2) % N;
//        p[i] = p[i] * qpow(100, N - 2) % N;
//    }
//    vector<ll> p1(10);
//
//    for (int i = 0; i <= 9; i++)
//    {
//        p1[i] = calc(i, p, p2);      
//    }
//
//    ll cur = 0;
//    ll ans = 0;
//    while (cur <= C)
//    {
//        ans = (ans + calnum(cur, p1) * calnum(C - cur, p1) % N) % N;
//        cur++;
//    }
//
//    cout << ans % N << endl;
//
//}
//
//signed main()
//{
//    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
//    nums[0] = 1 << 0 | 1 << 1 | 1 << 2 | 1 << 4 | 1 << 5 | 1 << 6;
//    nums[1] = 1 << 2 | 1 << 5;
//    nums[2] = 1 << 0 | 1 << 2 | 1 << 3 | 1 << 4 | 1 << 6;
//    nums[3] = 1 << 0 | 1 << 2 | 1 << 3 | 1 << 5 | 1 << 6;
//    nums[4] = 1 << 1 | 1 << 2 | 1 << 3 | 1 << 5;
//    nums[5] = 1 << 0 | 1 << 1 | 1 << 3 | 1 << 5 | 1 << 6;
//    nums[6] = 1 << 0 | 1 << 1 | 1 << 3 | 1 << 4 | 1 << 5 | 1 << 6;
//    nums[7] = 1 << 0 | 1 << 2 | 1 << 5;
//    nums[8] = 1 << 0 | 1 << 1 | 1 << 2 | 1 << 3 | 1 << 4 | 1 << 5 | 1 << 6;
//    nums[9] = 1 << 0 | 1 << 1 | 1 << 2 | 1 << 3 | 1 << 5 | 1 << 6;
//
//    int TestCase = 1;
//    cin >> TestCase;
//    while (TestCase--)
//        solve();
//}


//G:

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
//#define endl '\n'
//
//ll caln(ll x)
//{
//    ll cnt = 0;
//    while (x)
//    {
//        cnt++;
//        x = x / 10;
//    }
//    return cnt;
//}
//
//void solve()
//{
//    //不要忘记清空数组；
//    ll l, r;
//    cin >> l >> r;
//    if (l == r)
//    {
//        cout << l << endl;
//    }
//    else if (caln(l) < caln(r))
//    {
//        ll t = r / ll(pow(10, caln(r) - 1)) - 1;
//        ll ti = caln(r) - 1;
//        ll ret = 0;
//        while (ti--)
//        {
//            ret = ret + 9;
//            ret = ret * 10;
//        }
//        ret = ret + t;
//        if (t == 0)
//        {
//            ret = ret / 10;
//        }
//        string tmp = to_string(r);
//        reverse(tmp.begin(), tmp.end());
//        ll cmp = stoll(tmp);
//        if (ret > cmp)
//        {
//            cout << ret << endl;
//            return;
//        }
//        cout << cmp << endl;
//    }
//    else
//    {
//        string L = to_string(l);
//        string R_ret = to_string(r);
//        string R = to_string(r);
//        int i = 0;
//        while (L[i] == R[i]) i++;
//        R[i] = R[i] - 1;
//        i++;
//        while (i < R.size()) R[i++] = '9';
//        reverse(R.begin(), R.end());
//        reverse(R_ret.begin(), R_ret.end());
//
//        if (stoll(R) > stoll(R_ret))
//        {
//            cout << stoll(R) << endl;
//        }
//        else
//        {
//            cout << stoll(R_ret) << endl;
//        }
//        
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

//G ： 贪心：

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
#define endl '\n'

ll get_fold(ll x)
{
    string t = to_string(x);
    reverse(t.begin(), t.end());
    
    return stoll(t);
}

void solve()
{
    //不要忘记清空数组；
    string L, R;
    cin >> L >> R;
    ll l = stoll(L), r = stoll(R);
    ll maxbase = max(get_fold(l), get_fold(r));
    ll lenr = R.size(), lenl = L.size();
    if (lenr > lenl)
    {
        int ok = 1;
        int i = 1;
        while (i < lenr)
        {
            ok &= (R[i] == '0');
            if (!ok) break;
            i++;
        }
        if (ok && R[0] == '1')
        {
            cout << r - 1 << endl;
        }
        else
        {
            if (R[0] != '1')
            {
                i = 0;
            }
            R[i++] -= 1;
            for (int j = i; j < lenr; j++)
            {
                R[j] = '9';
            }
            ll cmp = get_fold(stoll(R));
            if (cmp > maxbase)
            {
                cout << cmp << endl;
            }
            else
            {
                cout << maxbase << endl;
     
            }
         
        }
    }
    else
    {
        int pos = 0;
        while (L[pos] == R[pos] && pos < lenr)
        {
            pos++;
        }
        if (pos == lenr )
        {
            cout << maxbase << endl;

        }
        else
        {
            R[pos++] -= 1;
            while (pos < lenr)
            {
                R[pos] = '9';
                pos++;
            }
            ll cmp = get_fold(stoll(R));
            if (cmp > maxbase)
            {
                cout << cmp << endl;

            }
            else
            {
                cout << maxbase << endl;
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