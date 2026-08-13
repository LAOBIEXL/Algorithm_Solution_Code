#include<bits/stdc++.h>
using namespace std;
const int MOD = 998244353;
void solve()
{
    int n, m;
    cin >>n >> m;
    set<int> st;
    int flag = 0;
    for(int i = 0; i < m;i++)
    {
        int t;
        cin >> t;
        st.insert(t);
        if(t >= 2 * n)
        {
           
            flag = true;
            //return;
        }
    }
    if(flag)
    {
         cout << 0 << endl;
        return;
    }
    vector<int> dp(n + 2) ;
    dp[0] = 1;
    for(int i = 1;i <= 2*n; i++)
    {
        if(st.count(i))
        {
            for(int j = n; j >= 1; j--)
            {
                dp[j] = dp[j - 1];
            }
            dp[0] = 0;
        }
        else
        {
            vector<int> pre(dp);
            int pre1 = dp[1];
            for(int j = n;j >= 1;j--)
            {
                dp[j] = (dp[j - 1] + pre[j + 1]) % MOD;
            }
            dp[0] = pre[1];
        }
    }
    cout << dp[0] % MOD << endl;
    // for(int i = 0; i <= 2 * n ;i++)
    // {
    //     for(int j = 0;j <= n + 1;j ++)
    //     {
    //         cout << dp[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        solve();
    }

    return 0;
}