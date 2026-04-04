#include<bits/stdc++.h>
using namespace std;
const int N = 1e5 + 10;
int e[N];
int id;
int h;
int ne[N];
int n;
set<int> st;
int h2= -1;
int e2[N];
int ne2[N];
int pre;
int pr;

int main()
{
    memset(ne, -1, sizeof(ne));
    memset(ne2, -1, sizeof(ne2));
    string hs;
    cin >> hs >> n;
    h = stoi(hs);
    for(int i = 1; i <= n; i++)
    {
        string ps, nex;
        int k ;
        cin >> ps >> k >> nex;
        int p = stoi(ps);
        int next = stoi(nex);
        e[p] = k;
        ne[p] = next;
    }

    for(int i = h; i != -1; i = ne[i])
    {
        int v = e[i];
        int v_t = abs(v);
        if(!st.count(v_t))
        {
            st.insert(v_t);
            pr = i;
        }
        else
        {
            if(h2 == -1)
            {
                h2 = i;
                e2[h2] = v;
                pre = h2;
            }
            else
            {
                ne2[pre] = i;
                pre = i;
                e2[i] = v;
                
            }
            ne[pr] = ne[i];
        }
    }

    for(int i = h; i != -1; i = ne[i])
    {
       
        cout << setw(5) << setfill('0') << i;
        cout << " " << e[i] << " " ;
        if(ne[i] != -1) cout << setw(5) << setfill('0') << ne[i] << endl;
        else cout << -1 << endl;
    }
    for(int i = h2; i != -1; i = ne2[i])
    {
        cout << setw(5) << setfill('0') << i;
        cout << " " << e2[i] << " " ;
        if(ne2[i] != -1) cout << setw(5) << setfill('0') << ne2[i] << endl;
        else cout << -1 << endl;
    }



    return 0;
}