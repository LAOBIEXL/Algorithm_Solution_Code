#include<bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;
int e[N], ne[N];
bool vis[10005]; // 极速判重哈希表

// 两个 Vector 就像两列火车，专门用来装节点的地址
vector<int> keep; // 保留的链表
vector<int> drop; // 剔除的链表

// 封装一个打印函数，彻底告别重复劳动
void printList(const vector<int>& vec) {
    for(int i = 0; i < vec.size(); i++) {
        // 输出当前节点地址和值
        cout << setw(5) << setfill('0') << vec[i] << " " << e[vec[i]] << " ";
        
        // 输出下一个节点的地址
        if(i == vec.size() - 1) {
            cout << "-1\n"; // 最后一个节点，指向 -1
        } else {
            cout << setw(5) << setfill('0') << vec[i+1] << "\n"; // 下一个就在 vector 的下一个位置
        }
    }
}

int main() {
    int h, n;
    string hs;
    cin >> hs >> n;
    h = stoi(hs);
    
    // 1. 读入数据
    for(int i = 0; i < n; i++) {
        int address, k, next;
        cin >> address >> k >> next;
        e[address] = k;
        ne[address] = next;
    }

    // 2. 顺藤摸瓜，分类装车（不需要修改任何 ne 指针！）
    for(int i = h; i != -1; i = ne[i]) {
        int val = abs(e[i]);
        if(!vis[val]) {
            vis[val] = true;
            keep.push_back(i); // 没见过的，塞进保留队伍
        } else {
            drop.push_back(i); // 重复的，塞进剔除队伍
        }
    }

    // 3. 完美输出
    printList(keep);
    printList(drop);

    return 0;
}