#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<double, int> a, pair<double, int> b)
{
    return a.first > b.first;
}

int main()
{
    int n;
    cin >> n;
    int d;
    cin >> d;
    vector<double> a(n + 1);
    vector<double> b(n + 1);
    vector<pair<double,int>> c(n + 1);
    for(int i = 1; i <= n; i++)
    {
        cin >> a[i];
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> b[i];
        double v = b[i] * 1.0 / a[i];
        c[i] = {v, i};
    }
    sort(c.begin() + 1, c.end() , cmp);
    int sum = 0;
    double ret = 0;
    int posf;
    for(int i = 1; i < c.size(); i++)
    {
        auto t = c[i];
        int pos = t.second;
        int qun = a[pos];
        int num = b[pos];
        if(qun <= d)
        {
            d = d - qun;
            ret += num;
        }
        else
        {
            ret += (d * 1.0 / a[pos] ) * b[pos];
            break;
        }
    }
    cout << fixed << setprecision(2) << ret ;
  
}