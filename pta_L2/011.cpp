#include<bits/stdc++.h>
using namespace std;
int n;
map<int,int> l;
map<int, int> r;
int in[40];
int pre[40];

int build(int l1, int r1, int l2, int r2){
    if(l1 > r1 || l2 > r2) return 0;
    int root = pre[l2];
    int pos = l1;
    while(in[pos] != root) pos++;
    l[root] = build(l1, pos - 1, l2 +1 , l2 + 1 + (pos - 1 - l1));
    r[root] = build(pos + 1, r1, r2 -(r1 - 1 - pos) , r2);
    return root;
}

int main(){
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >>in[i];
    }
    for(int i = 0;i <n ;i++){
        cin >> pre[i];
    }
    int root = build(0, n - 1, 0, n - 1);
    queue<int> q;
    q.push(root);
    int flag = 1;
    while(q.size()){
        int t = q.front();
        q.pop();
        if(r[t]) q.push(r[t]);
        if(l[t]) q.push(l[t]);
        if(flag){
            flag = 0;
            cout << t;
        }
        else{
            cout <<" " <<t ;
        }

        
    }
    cout << endl;
}