#include<bits/stdc++.h>
using namespace std;
const int N  = 1200;
int heap[N];
int n, m;
int num;
map<int, int> mp;

void Heapswap(int a, int b){
    swap(heap[a], heap[b]);
    swap(mp[heap[a]], mp[heap[b]]);
}

//比较的是存储的地址，要小心不要直接用堆中存储的值进行比较；
//注意，兄弟节点的定义不是他们的位置下标相差一，而是他们有着同样一个父亲节点；


void up(int p){
    while(p > 1){
        if(heap[p / 2] > heap[p]){
            Heapswap(p / 2, p);
            p = p / 2;
        }else{
            break;
        }
    }
}

void down(int p){
    int s = 2 *p;
    while(s <= n){
        if(s + 1 <= n && heap[s+ 1] < heap[s]){
            s = s + 1;
        }
        if(heap[s] < heap[p]){
            Heapswap(s, p);
            p = s;
            s = 2 * p;
        }else{
            break;
        }
    }
}


int main(){
    cin >> num >> m;
    for(int i = 1; i <= num ; i++){
        int t;
        cin >> t;
        heap[++n] = t;
        mp[t] = n;
        up(n);
    }
  
    for(int i  = 0; i < m; i++){
        int a;
        cin >> a;
   
        string o ;
        cin >> o ;
   
        if(o == "and"){
            int b;
            cin >> b;
            string t;
            cin >> t >> t;
            if(mp[b] / 2== mp[a] / 2){
                cout << "T" << endl;
            }else{
                cout << "F" << endl;
            }
            
        }else if(o == "is"){
            string t;
            cin >> t ;
            if(t == "a")
            {
                cin >> t >> t ;
                int b;
                cin >> b;
                if(mp[a]/2  == mp[b] ){
                    cout <<"T" << endl;
                }
                else
                {
                    cout << "F"<< endl;
                }
            }
            else{
                cin >> t;
                if(t == "parent")
                {
                cin >> t;
                int b;
                cin >> b;
                    if(mp[a]  == mp[b] /2){
                        cout << "T" << endl;
                    }
                    else{
                        cout << "F" << endl;
                    }
                }
                else
                {
                    if(a == heap[1]){
                        cout << "T" << endl;
                  }else{
                        cout <<"F" << endl;
                  }
                }
            }
        
        }
    }
}