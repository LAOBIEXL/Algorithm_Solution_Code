#include<bits/stdc++.h>
using namespace std;
const int N = 1e4 +10;
struct node{
    int id;
    double money;
    int cnt;
    bool operator<(const node & b) const{
        if(money != b.money) return money > b.money;
        else if(cnt != b.cnt) return cnt > b.cnt;
        else return id < b.id;
    }
    
    
}peo[N];

int main(){
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        peo[i].id = i;
    }
    for(int i = 1; i <= n; i++){
        int k;
        cin >> k;
        double sum = 0;
        for(int j = 1; j <= k ;j ++){
            int idk;
            double mon;
            cin >> idk >>mon;
            sum += mon;
            peo[idk].money += mon;
            peo[idk].cnt++;
        }
        peo[i].money -= sum;
    }

    sort(peo + 1, peo + n + 1);

    for(int i = 1; i <= n; i++){
        cout << peo[i].id << " " << fixed<< setprecision(2)<< (peo[i].money / 100) <<endl;
    }
    
    return 0;
}