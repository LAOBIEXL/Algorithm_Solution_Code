#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<vector>
#include<map>
#include<algorithm>
double r;
using namespace std;
const int N = 1e5 + 10;



vector<int> edges[N];




vector<int> ret;
int maxd = 0;
map<int, double> mp;

void dfs(int p, int d) {
	if (edges[p].empty()) {
		if (d == maxd) {
			maxd = d;//如果更新了max，旧的ret数组要清空；
			ret.push_back(p);
		}
		else if(d > maxd){
			ret.clear();
			ret.push_back(p);
		}
	}
	else {
		for (auto e : edges[p]) {
			dfs(e, d + 1);
		}
	}
}

int main() {
	int n;
	cin >> n;
	int r;
	for (int i = 1; i <= n; i++) {
		int t;
		cin >> t;
		if (t == -1) {
			r = i;
		}//注意分支要写全；
		else {
			edges[t].push_back(i);
		}
		
	}

	dfs(r, 0);
	sort(ret.begin(), ret.end());
	for (int i = 0; i < (int)ret.size(); i++) {
		if (i == 0) {
			cout << ret[i];
		}
		else {
			cout << " " << ret[i];
		}
	}

	return 0;
}