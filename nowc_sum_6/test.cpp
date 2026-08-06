#include<bits/stdc++.h>
using namespace std;

const int N = 2e5 + 10;


int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        int n , m , k;
        cin >> n >> m >> k;
        vector<int> edges[n + 1];
        for(int i  = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            edges[a].push_back(b);
            edges[b].push_back(a);
        }
        queue<int> q;
        vector<int> st(n + 1);
        vector<int> num(n + 1);
        for(int i = 0; i < k; i++)
        {
            int t;
            cin >> t;
            q.push(t);
            st[t] = -1;
        }
        vector<int> ret;
        while(!q.empty())
        {
            int v = q.front();
            q.pop();
            if(st[v] == -1)
            {
                for(auto e : edges[v])
                {
                    if(st[e] != -1 )
                    {
                        if(st[e] == -2)
                        {
                            num[e]++;
                        }
                        else
                        {
                            ret.push_back(e);
                            num[e]++;
                            st[e] = -2;
                            q.push(e);
                        }
                    }
                }
            }
            else{
                if(num[v] < 2) continue;
                for(auto e : edges[v])
                {
                    if(st[e] != -1 )
                    {
                        if(st[e] == -2 && num[e] == 1)
                        {
                            num[e]++;
                            q.push(e);
                        }
                        else
                        {
                            ret.push_back(e);
                            num[e]++;
                            st[e] = -2;
                            q.push(e);
                        }
                    }
                    
                }
            }
        }
        cout << ret.size() << endl;
        for(auto e : ret) 
        {
            cout << e << " ";
        }
        cout << endl;
        
    }


    return 0;
}