#include<bits/stdc++.h>
using namespace std;
unordered_map<int, int> mp[51];

int main()
{
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        int m;
        cin >> m;
        for(int j = 0; j <m ; j++){
            int t;
            cin >> t;
            if(!mp[i].count(t)) mp[i][t]++;
        }
    }
    int k;
    cin >>k;
    
    
    for(int i = 0; i < k ; i++)
        {
            double cnt = 0;
            double cntc = 0;
            int a, b;
            cin >> a >>b;
            unordered_map<int,int> tmp;
            for(auto e : mp[a]){
                int key = e.first;
                int val = e.second;
                if(mp[b].count(key)) cntc++;
            }
            cnt = int(mp[a].size()) + (int)mp[b].size() - cntc;

            cout <<fixed <<setprecision(2) << 100 * (cntc / cnt) << "%" << endl;
        }
    return 0;
}