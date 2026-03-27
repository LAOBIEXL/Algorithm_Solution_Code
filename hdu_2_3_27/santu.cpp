#include<cstdio>
#include<iostream>
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
    int k;
    cin >> k;
    for(int i = 0; i < n - 2; i++)
    {
        cout << 1 << " ";
    }
    cout << 2 << " ";
    cout << k + n << endl;
    
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--)
        solve();
}