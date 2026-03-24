#define _CRT_SECURE_NO_WARNINGS

//A

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
//    vector<int> a(n + 1);
//    int maxi = 0;
//    int pos = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//        if (a[i] > maxi)
//        {
//            pos = i;
//            maxi = a[i];
//        }
//    }
//    swap(a[1], a[pos]);
//    for (int i = 1; i <= n; i++)
//    {
//        cout << a[i] << " ";
//    }
//    cout << endl;
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
//    ll ret = 1;
//    for (int i = 2; i <= sqrt(n); i++)
//    {
//        if (n % i == 0)
//        {
//            ret *= i;
//            while (n % i == 0)
//            {
//                n = n / i;
//            }
//        }
//
//    }
//    if (n > 1)
//    {
//        ret *= n;
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


//C;

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
const int N = 1e6 + 10;
const int MOD = 0;
#define endl '\n'

//没有返回值也别忘写return！！！！！！！！！！！！！！
int st1[N];
int st2[N];


void solve()
{
    //不要忘记清空数组；
    //你个nt递归死路记得也要写返回；
    int n;
    cin >> n;
    vector<int> ret;
    vector<vector<int>> a(n + 1);
    for (int i = 0; i < n; i++)
    {
        int l;
        cin >> l;
        for (int j = 0; j < l; j++)
        {
            int t;
            cin >> t;
            a[i].push_back(t);
        }
    }
    vector<vector<int>> re_a(n + 1);

    vector<int> ck1;

    for (int i = 0; i < n; i++)
    {
        for (int j = a[i].size() - 1; j >= 0; j--)
        {
            int tmp = a[i][j];
            if (st1[tmp] == 0)
            {
                st1[tmp] = 1;
                re_a[i].push_back(tmp);
                ck1.push_back(tmp);
            }
        }
        for (auto e : ck1)
        {
            st1[e] = 0;
        }
        ck1.clear();
    }

    vector<int> st3(n);
    vector<int> ck2;

    for (int i = 0; i < n; i++)
    {
        int idx = -1;
        vector<int> minv;


        for (int j = 0; j < n; j++)
        {
            if (st3[j]) continue;
            vector<int> Tmp;
            for (auto e : re_a[j])
            {
                if (!st2[e])
                {
                    Tmp.push_back(e);
                }
            }
            if (idx == -1 || Tmp < minv)
            {
                idx = j;
                minv = Tmp;
            }
            
            if (minv.size() == 0) break;
        }
        
        st3[idx] = 1;
        for (auto e : minv)
        {
            ret.push_back(e);
            st2[e] = 1;
            ck2.push_back(e);
        }
   
    }
    for (auto e : ret)
    {
        cout << e << " ";
    }
    cout << endl;

    for (auto e : ck2)
    {
        st2[e] = 0;
    }
    ck2.clear();
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--)
        solve();
}