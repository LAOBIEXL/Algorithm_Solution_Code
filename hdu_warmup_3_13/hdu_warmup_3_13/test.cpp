#define _CRT_SECURE_NO_WARNINGS


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
//
//    int n;
//    cin >> n;
//    int INF = 0x3f3f3f3f;
//    int mini = INF, maxi = 0;
//
//    for (int i = 0; i < n; i++)
//    {
//        int t;
//        cin >> t;
//        mini = min(mini, t);
//        maxi = max(maxi, t);
//    }
//    cout << maxi - mini + 1 << endl;
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

//杂草：

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
//    ll n, m;
//    cin >> n >> m;
//    ll ret = (n + m + 1) / 2;
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
    for (int i = 3; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << (n / i) << endl;
            return;
        }
    }
    if (n % 2 == 0)
    {
        if (n / 2 >= 3)
        {
            cout << 2 << endl;
            return;
        }
    }
    //本身
    cout << 1 << endl;
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