#include<bits/stdc++.h>
using namespace std;

int fa[510];
int n;
int m;
vector<bool> ali;
struct edge{
    int u;
    int v;
};
vector<edge> edges;
int find(int x){
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void merge(int x, int y){
    int xx = find(x);
    int yy = find(y);
    fa[xx] = yy;
}

int count_cnt(int cnt){
    int cnt_r = 0;
    for(int i = 0; i <= n; i++ ){
        fa[i] = i;
    }//初始化；
    
    for(int i = 0; i < n; i++){
        if(ali[edges[i].u] && ali[edges[i].v]){
            merge(edges[i].u, edges[i].v);
        }
    }
    for(int i = 0; i < n; i++){
        if(ali[i] && fa[i] == i){
            cnt_r++;
        }
    }
    return cnt_r;
    
}



int main(){
    int cnt = 0;
    cin >> n>> m;
    
    edges.resize(m);
    ali.assign(n, true);
    
    for(int i = 0; i < m;i ++){
        int a, b;
        cin >> a >> b;
        edges[i].u = a;
        edges[i].v = b;
    }

    cnt = count_cnt(cnt);
    
    int k;
    cin >>k;
    for(int i = 0; i < k;  i++){
        int t;
        cin >> t;
        ali[t] = false;
        int cnt_t = count_cnt(cnt);
        if(cnt_t > cnt){
            cnt = cnt_t;
            cout << "Red Alert: City " <<t <<" is lost!" << endl;
        }
        else{
            cnt = cnt_t;
            if(cnt == 0){
                cout << "Game Over." << endl; 
            }else{
                cout << "City " << t <<" is lost." << endl;
            }
        }
        
    }
    


    return 0;
}
