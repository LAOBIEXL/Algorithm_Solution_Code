#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
int fa[10010];
int n;

struct hou{
    int num;
    int hn;
    int id;
    double hs;
    double av_s = hs / num;
    double av_n = hn / num;
    bool operator<(const struct hou& b)const{
        if(av_s != b.av_s) return av_s > b.av_s;
        else{
            return id < b.id;
        }
    }
}idmap[10010];

void init(){
    for(int i = 0; i < 10010; i++) {
        fa[i] = i;
        idmap[i].id = i;
    }
}

int find(int x){
    return fa[x] == x ? x : fa[x] = find(fa[x]);
}

void merge(int x, int y){
    int xx = fa[x];
    int yy = fa[y];
    if(xx == yy) return;
    if(xx > yy) {
        fa[xx] = yy;
        return;
    }
    else{
        fa[yy] = xx;
        return ;
    }
}



int main()
{
    cin >>n;
    set<int> st;
    init();
    for(int i = 0; i < n; i++){
        int idself, faid, maid, k, hn, hs;
        st.insert(idself);
        idmap[idself].num++;
        cin >> idself >> faid >> maid >> k;
        if(faid != -1) {
            merge(idself, faid);
            idmap[idself].num++;
        }
        if(maid != -1){
             merge(idself, maid);
            idmap[idself].num++;
        }
        for(int j = 0; j < k; j++){
            int kid;
            cin>> kid;
            merge(kid, idself);
            idmap[idself].num++;
        }
        cin >> hn >> hs;
        idmap[idself].hn = hn;
        idmap[idself].hs = hs;
    }
    set<int> stf;
    vector<const hou&> ret;
    for(auto e : st){
        if(fa[e] == e){
            continue;
        }
        else{
            idmap[fa[e]].num += idmap[e].num;
            idmap[fa[e]].hn += idmap[e].hn;
            idmap[fa[e]].hs += idmap[e].hs;
        }
        if(!stf.count(fa[e])) {
            stf.insert(fa[e]);
        }
    }
    for(auto e : stf){
        ret.push_back(idmap[e]);
    }
    sort(ret.begin(), ret.end());
    cout<< stf.size() << endl;
    for(int i = 0 ; i < ret.size(); i++){
        cout << ret[i].id <<" " << ret[i].num <<" " << ret[i].av_n << " "<< ret[i].av_s << endl;
    }
}