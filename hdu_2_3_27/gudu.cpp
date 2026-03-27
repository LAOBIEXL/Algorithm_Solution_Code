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
    int n;
    cin >> n;

    vector<ll> a(2 * n + 10);
    vector<ll> f(2 * n + 10);
    for(int i = 1; i <= n; i++)
    {
        ll t;
        cin >> t;
        a[i] = t;
        a[i + n] = a[i];
        f[i] = f[i - 1] + a[i]; 
    }
    for(int i = 1; i <= n; i++)
    {
        f[n + i] = f[n + i - 1] + a[i];
    }
    int i = 1;
    ll tmp = a[n];
    while(tmp > 0)
    {
        tmp = f[n + i] - f[n - 1];
        i++;
    }
    ll sum = i;
    if(i == n )
    {
        cout << n << endl;
    }
    else
    {
        int j = 1;
        while(true)
        {
            tmp += a[n - j];
            sum ++;
            while(tmp > 0)
            {
                tmp += a[n + i];
                i++;
                sum ++;
            }
            if(tmp == 0 && sum == n)
            {
                cout << n - j << endl;
                break;
            }
            j++;
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