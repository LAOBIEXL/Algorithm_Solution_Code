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
//#define endl '\n'
//
//void solve()
//{
//    //不要忘记清空数组；
//    int n;
//    int flag = 0;
//    cin >> n;
//    for (int i = 0; i < n; i++)
//    {
//        int t;
//        cin >> t;
//        if (t == 67)
//        {
//   
//            flag = 1;
//            
//        }
//      
//    }
//    if (!flag)
//    {
//        cout << "NO" << endl;
//    }
//    else
//    {
//        cout << "YES" << endl;
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
//#define endl '\n'
//
//void solve()
//{
//    //不要忘记清空数组；
//    int n;
//    cin >> n;
//    vector<int> a(n +10);
//    for(int i = 1; i <=n;i++)
//    {
//        cin >> a[i];
//    } 
//    vector<bool> st(n + 10);
//    int flag = 1;
//    for (int i = 1; i <= n; i++)
//    {
//        vector<int> pos1;
//        vector<int> pos2;
//        if (!st[i])
//        {
//            
//            for (int j = i; j <= n; j = 2 * j)
//            {
//                if (j > n)
//                {
//                    break;
//                }
//                st[j] = true;
//                pos1.push_back(j);
//                pos2.push_back(a[j]);
//                
//            }
//            sort(pos1.begin(), pos1.end());
//            sort(pos2.begin(), pos2.end());
//            if (pos1 != pos2)
//            {
//                cout << "NO" << endl;
//                flag = 0;
//                break;
//            }
//        }
//        if (!flag)
//        {
//            break;
//        }
//    
//       
//
//    }
//    if (flag)
//    {
//        cout << "YES" << endl;
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
//#define endl '\n'
//const int INF = 0x3f3f3f3f;
//
//void solve()
//{
//    //不要忘记清空数组；
//    int n;
//    cin >> n;
//    vector<int> a(n + 10);
//    for (int i = 1; i <= n; i++)
//    {
//        cin >> a[i];
//    }
//    vector<int> f(7);
//    for (int i = 1; i <= 6; i++)
//    {
//        if (a[1] == i)
//        {
//            f[i] = 0;
//        }
//        else f[i] = 1;
//    }
//
//    for (int i = 2; i <= n; i++)
//    {
//        vector<int> fn(7);
//        for (int j = 1; j <= 6; j++)
//        {
//            if (a[i] == j)
//            {
//                int mini = INF;
//                for (int z = 1; z <= 6; z++)
//                {
//                    if (z != j && z + j != 7)
//                    {
//                        mini = min(mini, f[z]);
//                    }
//                }
//                fn[j] = mini;
//            }
//            else
//            {
//                int mini = INF;
//                for (int z = 1; z <= 6; z++)
//                {
//                    if (z != j && z + j != 7)
//                    {
//                        mini = min(mini, f[z]);
//                    }
//                }
//                fn[j] = mini + 1;
//            }
//        }
//        for (int i = 1; i <= 6; i++) f[i] = fn[i];
//    }
//    int mini = INF;
//    for (int i = 1; i <= 6; i++)
//    {
//        mini = min(mini, f[i]);
//    }
//    cout << mini << endl;
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
#define endl '\n'

void solve()
{
    //不要忘记清空数组；
    int n;
    cin >> n;
    vector<ll> f(n + 10);
    for (int i = 1; i <= n; i++)
    {
        cin >> f[i];
    }
    if (n == 2)
    {
        cout << f[2] << " " <<f[1] << endl;
    }
    else
    {
        vector<ll> t(n + 10);
        for (int i = 2; i < n; i++)
        {
            t[i] = ((f[i + 1] - f[i]) - (f[i] - f[i - 1])) / 2;
        }
        ll sum = 0;
        for (int i = 2; i < n; i++)
        {
            sum += t[i] * (i - 1);
        }
        t[n] = (f[1] - sum) / (n - 1);

        sum = 0;
        for (int i = 2; i <= n; i++)
        {
            sum += t[i] * (n - i);
        }
        t[1] = (f[n] -sum) / (n - 1);

        for (int i = 1; i <= n; i++)
        {
            cout << t[i] << " ";
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
