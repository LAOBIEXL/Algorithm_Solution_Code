#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstring>
#include<unordered_set>
#include<vector>
using namespace std;

char graph[401][11];
int h = 1;


int main() {
	int n;
	cin >> n;
	for (int _ = 0; _ < n; _++) {
		int a, p;
		cin >> p >> a;
		if (p == 0) {
			int cur = h + 1;
			for (int tr = h; tr >= 1; tr--) {
				if (graph[tr][a] == 0 && graph[tr][a + 1] == 0)
				{
					cur = tr;
				}
				else {
					break;
				}
			}
			h = max(h, cur + 2);
			graph[cur][a] = '#';
			graph[cur][a + 1] = '#';
			graph[cur + 1][a] = '#';
			graph[cur + 2][a] = '#';
		}
		else if (p == 90) {
			int cur = h + 1;
			for (int tr = h; tr >= 1; tr--) {
				if (graph[tr][a] == 0 && graph[tr][a + 1] == 0 && graph[tr][a + 2] == 0)
				{
					cur = tr;
				}
				else {
					break;
				}
			}
			h = max(h, cur + 1);
			graph[cur][a] = '#';
			graph[cur][a + 1] = '#';
			graph[cur][a + 2] = '#';
			graph[cur + 1][a + 2] = '#';
		}
		else if (p == 180) {
			int cur = h + 1;
			for (int tr = h; tr >= 1; tr--) {
				if (graph[tr + 2][a] == 0 && graph[tr][a + 1] == 0)
				{
					cur = tr;
				}
				else {
					break;
				}
			}
			h = max(h, cur + 2);
			graph[cur + 2][a] = '#';
			graph[cur][a + 1] = '#';
			graph[cur + 1][a + 1] = '#';
			graph[cur + 2][a + 1] = '#';
		}
		else if (p == 270) {
			int cur = h + 1;
			for (int tr = h; tr >= 1; tr--) {
				if (graph[tr][a] == 0 && graph[tr + 1][a + 1] == 0 && graph[tr + 1][a + 2] == 0/*   */)
				{
					cur = tr;
				}
				else {
					break;
				}
			}
			h = max(h, cur + 1);
			graph[cur][a] = '#';
			graph[cur + 1][a] = '#';
			graph[cur + 1][a + 1] = '#';
			graph[cur + 1][a + 2] = '#';
		}
		unordered_set<int> st;
		for (int i = 1; i <= h; i++) {
			bool flag = true;
			for (int j = 1; j <= 10; j++) {
				if (graph[i][j] == 0) {
					flag = false;
				}
			}
			if (flag) {
				st.insert(i);
			}
		}

		for (int i = 1, cnt = 0; i <= h; i++) {
			if (st.count(i)) {
				continue;
			}
			else {
				cnt++;
				for (int j = 1; j <= 10; j++) {
					if (graph[i][j] == '#') {
						graph[cnt][j] = '#';
					}
					else {
						graph[cnt][j] = 0;
					}
				}
			}


		}
		for (int z = 0; z < int(st.size()); z++) {
			for (int w = 1; w <= 10; w++) {
				graph[h - z][w] = 0;
			}

			h = h - int(st.size());
			cout << h << endl;
			for (int i = h; i >= 1; i--) {
				for (int j = 1; j <= 10; j++) {
					if (graph[i][j] == '#') {
						cout << '#';
					}
					else {
						cout << '.';
					}
				}
				cout << endl;
			}

		}






		return 0;
	}