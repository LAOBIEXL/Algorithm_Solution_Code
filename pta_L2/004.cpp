#include<bits/stdc++.h>
using namespace std;
const int N = 1010;
int a[N];
int ret[N], cnt;

// bool check1(int l , int r){
//     if(l >= r){
//         return 1;
//     }
//     int ro = a[l];
//     //cout << l << " : " << r << endl;
//     int pos;
//     for(pos = l + 1; pos <= r && a[pos] < ro; pos++);
//     int pos2;
//     for(pos2 = pos; pos2 <= r && a[pos2] >= ro; pos2++);
//     if(pos2 != r + 1){ return 0;}
//     else {
//         return check1(l + 1, pos - 1) && check1(pos, r);
//     }
// }

// bool check2(int l , int r){
//     if(l >= r){
//         return 1;
//     }
//     int ro = a[l];
//     //cout << l << " : " << r << endl;
//     int pos;
//     for(pos = l + 1; pos <= r && a[pos] >= ro; pos++);
//     int pos2;
//     for(pos2 = pos; pos2 <= r && a[pos2] < ro; pos2++);
//     if(pos2 != r + 1){ return 0;}
//     else {
//         return check2(l + 1, pos - 1) && check2(pos, r);
//     }
// }

//使用全局数组构建后续遍历：访问完每一个左右节点后，将根节点加入数组，那么根节点就是最后一个加入数组的；

bool check1(int l , int r){
    if(l > r){
        return 1;
    }
    int ro = a[l];
    //cout << l << " : " << r << endl;
    int pos;
    for(pos = l + 1; pos <= r && a[pos] < ro; pos++);
    int pos2;
    for(pos2 = pos; pos2 <= r && a[pos2] >= ro; pos2++);
    if(pos2 != r + 1){ return 0;}
    else {
        bool ans =  check1(l + 1, pos - 1) && check1(pos, r);
        if(ans){ ret[cnt++] = a[l]; return ans;}
        else return ans;
    }
}

bool check2(int l , int r){
    if(l > r){
        return 1;
    }
    int ro = a[l];
    //cout << l << " : " << r << endl;
    int pos;
    for(pos = l + 1; pos <= r && a[pos] >= ro; pos++);
    int pos2;
    for(pos2 = pos; pos2 <= r && a[pos2] < ro; pos2++);
    if(pos2 != r + 1){ return 0;}
    else {
        bool ans =  check2(l + 1, pos - 1) && check2(pos, r);
        if(ans){ ret[cnt++] = a[l]; return ans;}
        else return ans;
    }
}


int main()
{
    cin.tie(0),cout.tie(0);
    ios::sync_with_stdio(false);
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    if(check1(0, n - 1) || check2(0, n - 1))
    {
        cout << "YES" << endl;
        for(int i = 0; i < n; i ++)
        {
            if(i == 0) cout << ret[i];
            else cout <<" " << ret[i];
        }
    }
    else cout << "NO" << endl;


    return 0;
}