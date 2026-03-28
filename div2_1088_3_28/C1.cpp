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
#define endl '\n'

//没有返回值也别忘写return！！！！！！！！！！！！！！


void solve()
{
    //不要忘记清空数组；
    //你个nt递归死路记得也要写返回；
    int n ,k;
    cin >> n >> k;
    int key = n / 2;
    vector<int> a(n + 1);
    vector<int> b(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
    }
    int cnt;
    set<int> mp;
    set<int> mp2;
    bool flag = true;
    if(n % 2 == 0)
    {
        if(k > key)
        {
            cnt = (k - key) * 2 ;
            int cnt_r = k - key;
            for(int i = 1; i <= key - cnt_r; i++)
            {
                if(b[i] != a[i] && b[i] != -1)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            for(int i = key + 1+  cnt_r; i <= n; i++)
            {
                if(b[i] != a[i] && b[i] != -1)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            for(int i = key - cnt_r + 1; i <= key + 1 + cnt_r - 1; i++)
            {
                mp.insert(a[i]);
            }
            for(int i = key - cnt_r + 1; i <= key + 1 + cnt_r - 1; i++)
            {
                
                if((b[i] != -1 && mp.count(b[i]) == 0 )|| (mp2.count(b[i]) && b[i] != -1))
                {
                    cout << "NO" << endl;
                    return;
                }
                mp2.insert(b[i]);
            }
        }
        else
        {
            for(int i = 1; i <= n; i++)
            {
                if(b[i] != a[i] && b[i] != -1)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    else
    {
        if(k > key + 1)
        {
            cnt ++;
            cnt += (k - key - 1) * 2;
            int cnt_r = k - key - 1;
            for(int i = 1; i <= key - cnt_r; i++)
            {
                if(b[i] != a[i] && b[i] != -1)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            for(int i = key + 2 + cnt_r; i <= n; i++)
            {
                if(b[i] != a[i] && b[i] != -1)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
            for(int i = key - cnt_r + 1; i <= key + 2 + cnt_r - 1; i++)
            {
                mp.insert(a[i]);
            }
            for(int i = key - cnt_r + 1; i <= key + 2 + cnt_r - 1; i++)
            {
              
                if((b[i] != -1 && mp.count(b[i]) == 0 )|| (mp2.count(b[i]) && b[i] != -1))
                {
                    cout << "NO" << endl;
                    return;
                }
                mp2.insert(b[i]);
            }
        }
        else
        {
            for(int i = 1; i <= n; i++)
            {
                if(b[i] != a[i] && b[i] != -1)
                {
                    cout << "NO" << endl;
                    return;
                }
            }
        }
    }
    cout << "YES" << endl;
    return;
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--)
        solve();
}