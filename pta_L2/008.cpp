#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin , s);
    int ret = 0;
    int pos = 0;
    for(int i = 0; i < (int)s.size(); i++){
        int l = i - 1; int r = i + 1;
        while(l >= 0 && r < (int)s.size() && s[l] == s[r]) {
            l-- , r++;
        }
        l++, r--;
        ret = max(r - l + 1, ret);
        int pos0 = i;
        int pos1 = i + 1;
        while(pos0 >= 0 && pos1 < (int)s.size() && s[pos0] == s[pos1]){
            pos0--, pos1++;
        } 
        pos0++, pos1--;
        ret = max(ret, pos1 - pos0 + 1);
    }
    cout <<ret << endl;
    return 0;
}