#include<bits/stdc++.h>
using namespace std;
const int N = 510;
int edges[510][510];
int fnumber[N];
int n, m , s, d;
int mnumber[N];
int dist[N];
bool st[N];
int path[N];
int pnumber[N];

void dijkstra()
{
    memset(dist, 0x3f, sizeof(dist));
    dist[s] = 0;
    path[s] = -1;
    pnumber[s] = 1;
    mnumber[s] = fnumber[s];
    for(int _ = 0; _ < n; _++)
    {
        int a = -1;
        int va = 0x3f3f3f3f;
        for(int i = 0; i < n; i++)
        {
            if(!st[i] && dist[i] < va)
            {
                va = dist[i];
                a = i;
            }
        }
        if(a == -1)
        {
            break;
        }
        st[a] = true;

        for(int i = 0; i < n; i++)
        {
            if( !st[i] && dist[a] + edges[a][i] < dist[i] )
            {
                dist[i] = dist[a] + edges[a][i];
                path[i] = a;
                pnumber[i] = pnumber[a];
                mnumber[i] = fnumber[i] + mnumber[a];
            }
            else if(!st[i] && dist[a] + edges[a][i] == dist[i])
            {
                pnumber[i] += pnumber[a];
                if(mnumber[a] + fnumber[i] > mnumber[i])
                {
                    mnumber[i] = mnumber[a] + fnumber[i];
                    path[i] = a;
                }
            }
        }
    }  
}

void print(int d)
{
    if(d == 0)
    {
        cout << d ;
        return;
    }
    print(path[d]);
    
    cout <<" " <<  d ;
}

int main()
{
    memset(edges, 0x3f, sizeof(edges));
    cin >> n >> m >> s >> d;
    for(int i = 0; i < n; i++)
    {
        cin >> fnumber[i];
    }
    for(int i = 0; i < m ; i++)
    {
        int u , v , c;
        cin >> u >> v >> c;
        edges[u][v] = min(edges[u][v], c);
        edges[v][u] = min(edges[v][u], c);
        
    }

    dijkstra();

    cout << pnumber[d] << " " << mnumber[d];
    cout << endl;
    print(d);
    cout << endl;
  
}