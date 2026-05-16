#include<iostream>
#include<set>
#include<vector>
#include<string>
#include<cstring>
#include<algorithm>
#include<map>
#include<stack>

//#include<bits/stdc++.h>
using namespace std;
typedef pair<int, int> PII;

bool cmp(PII& a, PII& b) {
	if (a.second != b.second) {
		return a.second < b.second;
	}
	else {
		return a.first < b.first;
	}
}

map<int, int> mp;

int main() {
	int n;
	cin >> n;
	vector<int> s(n + 1);
	int maxi = -1;
	for (int i = 1; i <= n; i++) {
		cin >> s[i];
		if (!mp.count(s[i])) {
			mp[s[i]] = i;
		}
		
		maxi = max(maxi, s[i]);
	}
	int flag1 = 1;
	for (int i = 1; i <= n; i++) {
		if (s[i] == maxi && flag1) {
			cout << i;
			flag1 = 0;
		}
		else if (s[i] == maxi) {
			cout << " " << i;
		}
	}
	cout << endl;
	set<int> st;
	for (auto e : s) {
		st.insert(e);
	}
	
	st.insert(0x3f3f3f3f);
	int m;
	cin >> m;
	for (int i = 0; i < m; i++) {
		vector<PII> f;
		int x;
		cin >> x;
		auto e = st.upper_bound(x);
		if (*e == 0x3f3f3f3f) {
			cout << 0;
		}
		else {
			cout << mp[*e] << endl;
		}
		
	}
	return 0;
}