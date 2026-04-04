#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 + 10;
const int INF = 2147483647;
//带权图用PIIvector存节点
typedef pair<int, int> PII;

vector<PII> edges[N];
int n, m , s;
int dist[N]; //存储目前的生成的节点的最短路长
bool st[N]; //存储已经拓展了最短路的节点（已固定的节点）

void dijkstra()
{
//初始化dist数组：
    for(int i = 0; i <= n; i++) //注意要从零开始初始,便于后面找最小值；
    {
        dist[i] = INF;
    }
    dist[s] = 0;
    //总共进行n - 1次循环即可
    for(int j = 1; j < n ; j++)
    {
        
        //初始化原始节点为零：
        

        //固定生成节点中的最短路径：
        int a = 0;
        for(int i = 1; i <= n; i++)
        {
          if(!st[i] && dist[i] < dist[a])
          {
              a = i;
          }
        }
        st[a] = true;

        //开始松弛操作：
        for(auto e : edges[a])
        {
            int u, c;
            u = e.first; 
            c = e.second;
            if(dist[a] + c < dist[u]) dist[u] = dist[a] + c;
        }
    }
    
}

int main()
{
   
    cin >> n >> m >> s;
    for(int i = 1; i <= m; i++)
    {
        int u, v, w;
        cin >> u >> v >> w;
        edges[u].push_back({v, w}); //存储单向边
    }

    dijkstra();

    for(int i = 1;i  <= n; i++)
    {
        cout << dist[i] << " ";
    }
    cout << endl;

    return 0;
}