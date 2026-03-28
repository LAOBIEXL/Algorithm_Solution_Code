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
    ll x, y;
    cin >> x >> y;
    ll tmp = x - y;
    if(tmp == 0)
    {
        cout << 1 << endl;
        for(int i = 0; i< x; i++)
        {
            cout << 1 << " " ;
        }
        for(int i = 0; i < y; i++)
        {
            cout << -1 << " ";
        }
        cout << endl;
    }
    else
    {
        if(tmp < 0)
        {
            tmp = -tmp;
        }
        ll cnt = 0;
        for(int i = 1; i <= sqrt(tmp); i++)
        {
            if(i == sqrt(tmp))
            {
                cnt++;
                continue;
            }
            if(tmp % i == 0)
            {
                cnt += 2;
            }
        }
        cout << cnt % 676767677 << endl;
        for(int i = 0; i< x; i++)
        {
            cout << 1 << " " ;
        }
        for(int i = 0; i < y; i++)
        {
            cout << -1 << " ";
        }
        cout << endl;
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