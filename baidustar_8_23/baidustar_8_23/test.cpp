#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
using ll = long long;
typedef pair<ll, ll> pll;

void solve() {
    ll n, k, s;
    cin >> n >> k >> s;
    vector<pll> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i].first;
        cin >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    for (int i = 0; i < n; i++)
    {
        //cout << "dbg::" << arr[i].first << " " << arr[i].second << endl;
        ll bl = arr[i].first;
        ll val = arr[i].second;
        if (s >= bl)
        {
            s += val;
        }
        else if (k != 0) {
            int flag = 1;
            while (k != 0)
            {
                s += s;
                k--;
                if (s >= val)
                {
                    s += val;
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                cout << s << endl;
                return;
            }
        }
        else {
            cout << s << endl;
            return;
        }
    }
    if (k != 0)
    {
        while (k--)
        {
            s += s;
        }
    }
    cout << s << endl;
    return;






}

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        solve();
    }
    return 0;
}