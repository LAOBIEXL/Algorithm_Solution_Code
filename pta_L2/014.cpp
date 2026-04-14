#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    set<int> st;
    int INF = 0x3f3f3f3f;
    st.insert(INF);
    vector<int> a(n + 1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
        if(st.size() == 1){
            st.insert(a[i]);
        }
        else{
            auto t = st.upper_bound(a[i]);
            if(*t != INF){
                st.erase(t);
                st.insert(a[i]);
            }
            else{
                st.insert(a[i]);
            }

        }
    }

    cout << st.size() - 1;

    return 0;
}