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
//    ll x, y;
//    cin >> x >> y;
//    if ((x - 2 * y) % 3 == 0 && (x - 2 * y) >= 0 && (4 * y +x) >= 0)  
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
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

//B

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
//    string a;
//    cin >> a;
//    int flag = 1;
//    if(n % 2 == 0)
//    {
//        
//        for (int i = 0; i < (n / 2); i++)
//        {
//            if (a[2 * i] != '?' && a[2 * i ] == a[2 * i + 1])
//            {
//                flag = 0;
//            }
//            
//        }
//        if (!flag)
//        {
//            cout << "NO" << endl;
//        }
//        else
//        {
//            cout <<"YES" << endl;
//        }
//    }
//    else
//    {
//        if (a[0] != 'a' && a[0] != '?')
//        {
//            flag = 0;
//        }
//        for (int i = 0; i < (n / 2); i++)
//        {
//            if (a[2 * i + 1] == a[2 *i + 2] && a[2 * i + 1] != '?')
//            {
//                flag = 0;
//            }
//        }
//        if (!flag)
//        {
//            cout << "NO" << endl;
//        }
//        else
//        {
//            cout << "YES" << endl;
//        }
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

//C1

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
    vector<int> a(n + 1);
    int cnt = 0;
    int flag = 1;
    int s = 0;
    int min = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        if (i == 0)
        {
            cnt = 1;
            flag = 1;
            min = a[i];
            s = a[i] + 1;
            continue;
        }
        if ((a[i] == (a[i - 1] + 1) || a[i] == a[i - 1]) && a[i] >= s && flag == 1)
        {
            min = a[i];
            continue;
        }
        else if (a[i] < a[i - 1] || flag == 0 )
        {
            flag = 0;
            if (a[i] >= s && a[i] <= min)
            {
                min = a[i];
                continue;
            }
            else if (a[i] == (a[i - 1] + 1))
            {
                flag = 1;
                continue;
            }
            else
            {
                s = a[i] + 1;
                cnt++;
                min = a[i];
                flag = 1;
                continue;
            }
        }
        else
        {
            cnt++;
            s = a[i] + 1;
            min = a[i];
            flag = 1;
            continue;
        }
    }
    cout << cnt << endl;
}

signed main()
{
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    int TestCase = 1;
    cin >> TestCase;
    while (TestCase--)
        solve();
}