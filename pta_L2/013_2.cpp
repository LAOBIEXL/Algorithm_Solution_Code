#include<bits/stdc++.h>
using namespace std;
int n, m;
vector<int> edges[510];
vector<bool> vis;
vector<int> ali;

void dfs(int d){
    vis[d] = true;
    for(auto e : edges[d]){
        if(ali[e] && !vis[e]){
            dfs(e);
        }
    }

}

int count(){
    int cnt_r = 0;
    vis.assign(n, false);
    for(int i = 0; i < n; i++){
        if(!vis[i] && ali[i]){
            cnt_r ++;
            dfs(i);
        }
    }
    return cnt_r;
}

int main(){
    int cnt = 0;
    cin >> n >> m;
    
    ali.assign(n,true);
    for(int i = 0; i < m;i ++){
        int a; int b;
        cin >> a >> b;
        edges[a].push_back(b);
        edges[b].push_back(a);
    }

    cnt = count();

    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        int t;
        cin >> t;
        ali[t] = false;
        int cnt_t = count();
        if(cnt_t > cnt){
            cnt = cnt_t;
            cout << "Red Alert: City " <<t <<" is lost!" << endl;
        }
        else{
            cnt = cnt_t;
            if(cnt == 0){
                cout << "City " << t << " is lost." << endl;
                cout << "Game Over." << endl; 
            }else{
                cout << "City " << t <<" is lost." << endl;
            }
        }

    }


}