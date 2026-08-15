#include<bits/stdc++.h>
using namespace std;
using ll = long long;

struct P{
    ll tim;
    ll id;

};



int main()
{
    ll n , m;
    cin >>n >> m;
    vector<vector<ll>> g(n + 1);
    string ans(m + 1, '0');
    for(int i = 1;i <n;i ++)
    {
        int u, v;
        cin >>u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    map<ll, vector<P>> node_with_person;
    for(int i = 1;i <= m;i++)
    {
        ll xi;
        cin >> xi;
        ll si;
        cin >> si;
        node_with_person[xi].push_back({si, i});
    }

    vector<ll> dist(n + 1, -1);
    auto bfs = [&]()
    {
        queue<ll> q;
        q.push(1);
        dist[1] = 0;
        while(!q.empty())
        {
            ll t = q.front();
            q.pop();
            for(auto e : g[t])
            {   
                if(dist[e] == -1)
                {
                    dist[e] = dist[t] + 1;
                    q.push(e);
                }
            }
        }
    };
    bfs();

    function<map<ll, pair<ll, vector<ll>>>(ll root,ll x)> = [&](ll root, ll x){

    }



    return 0;
}