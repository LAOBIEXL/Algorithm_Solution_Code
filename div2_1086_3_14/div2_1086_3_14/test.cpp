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
//const int N = 110;
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
//    int a[N][N];
//    unordered_map<int, int> mp;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            cin >> a[i][j];
//            mp[a[i][j]]++;
//        }
//    }
//    int flag = 1;
//    for (int i = 0; i < n; i++)
//    {
//        for (int j = 0; j < n; j++)
//        {
//            if (mp[a[i][j]] >= n * n - n + 1)
//            {
//                flag = 0;
//                break;
//            }
//        }
//    }
//    if (flag)
//    {
//        cout << "YES" << endl;
//    }
//    else
//    {
//        cout << "NO" << endl;
//    }
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
//
//void solve()
//{
//    //不要忘记清空数组；
//    //你个nt递归死路记得也要写返回；
//    int n, k, p, m;
//    queue<int> q;
//    cin >> n >> k >> p >> m;
//    int a_p = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        int t;
//        cin >> t;
//        if (i == p)
//        {
//            a_p = t;
//            q.push(-1);
//        }
//        else
//        {
//            q.push(t);
//        }
//    }
//    priority_queue<int, vector<int>, greater<int>> heap;
//    if (n == k)
//    {
//        cout << m / a_p << endl;
//        return;
//    }
//    int cnt = 0;
//    for (int i = 1; i <= k; i++)
//    {
//        heap.push(q.front());
//        q.pop();
//    }
//    
//    int ret = 0;
//    
//    while (true)
//    {
//        while (heap.top() != -1)
//        {
//            int tmp = heap.top();
//            heap.pop();
//            if (cnt + tmp <= m)
//            {
//                cnt += tmp;
//            }
//            else
//            {
//                cout << ret << endl;
//                return;
//            }
//         
//            q.push(tmp);
//            heap.push(q.front());
//            q.pop();
//        }
//        if (cnt + a_p <= m)
//        {
//            cnt += a_p;
//            ret++;
//        }
//        else
//        {
//            cout << ret << endl;
//            return;
//        }
//        heap.pop();
//        q.push(-1);
//        heap.push(q.front());
//        q.pop();
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

//C

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
//    vector<double> c(n + 1);
//    vector<double> p(n + 1);
//
//    for (int i = n; i >= 1; i--)
//    {
//        cin >> c[i];
//        cin >> p[i];
//    }
//    
//    vector<double> f(n + 1);
//    f[0] = 0;
//    for (int i = 1; i <= n; i++)
//    {
//        f[i] = max(f[i - 1], c[i] + (1 - p[i] / 100) * f[i - 1]);
//    }
//    cout << fixed << setprecision(10) << f[n] << endl;
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
