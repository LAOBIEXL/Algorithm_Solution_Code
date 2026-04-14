#include<bits/stdc++.h>
using namespace std;
int a[50];
int b[50];
map<int, int> l;
map<int, int> r;

int find(int p1, int p2, int p3, int p4)
{
    if(p1 > p2 || p3 > p4) return 0;
    int root = b[p4];
    int pos = p1;
    while(a[pos] != root) pos++;
    l[root] = find(p1, pos - 1, p3, p3 + pos - 1 - p1);
    r[root] = find(pos + 1, p2, p4 - p2 + pos  , p4 - 1);
    return root;
}

void bfs(int root)
{
    queue<int> q;
    q.push(root);
    bool flag = true;
    while(q.size()){
        int t = q.front();
        q.pop();
        if(flag){
          cout << t ;
            flag = !flag;
        } 
        else cout << " " << t;
        if(l[t]) q.push(l[t]);
        if(r[t]) q.push(r[t]);
      
    }
}

int main()
{
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
    for(int i = 0; i < n; i++){
        cin >>a[i];
    }

    int root = find(0, n - 1, 0, n - 1);

    bfs(root);
    cout << endl;
    return 0;
}