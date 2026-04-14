#include<bits/stdc++.h>
using namespace std;
const int N = 110;
int n, m, k;
int fa[N];

void init(){
    for(int i = 0; i <= n; i++){
        fa[i] = i;
    }
}

int find(int x){
    return x == fa[x] ? x : fa[x] = find(fa[x]);
}

void merge(int x, int y){
    int xx = find(x);
    int yy = find(y);
    fa[xx] = yy;
}


int edges[N][N];

int main(){
    cin >> n >> m >>k;

    init();
    
    for(int i = 1;i <= m; i++){
        int a, b;
        int re;
        cin >> a >> b >> re;
        edges[a][b] = edges[b][a] = re;
        if(re== 1){
            merge(a, b);
        }
    }

    for(int i = 1; i <= k; i++){
        int a,b;
        cin >> a >>b;
        int re = edges[a][b];
        if(re == 1){
            cout << "No problem" << endl;
        }else if(re  == -1){
            if(find(a) == find(b)){
                cout << "OK but..." <<endl;
            }else{
                cout << "No way" << endl;
            }
        }
        else{
            if(find(a) == find(b)){
                cout << "No problem" << endl;
            }else{
                cout << "OK" <<endl;
            }
        }
    }
    
}