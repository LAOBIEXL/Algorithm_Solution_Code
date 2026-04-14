#include<bits/stdc++.h>
using namespace std;
const int N = 2e5 + 10;
int fa[N];
int n;

//查询操作
int find(int x){
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

int main()
{
    int T;
    cin >> n >> T;
    for(int i = 1; i <= n; i++){ fa[i] = i ;} // 初始化
    //所有的节点均初始化为单独的节点；

    while(T--){
        int z , x, y;
        cin >> z >> x >> y;
        if(z== 1){
            int fx = find(x);
            int fy = find(y);
            fa[fx] = fy;
        }
        else{
            if(find(x) == find(y)) cout << "Y" << endl;
            else cout << "N" << endl;
        }
    }
}

