#include<iostream>
#include<vector>
#include<set>
#include<stack>
#include<algorithm>
#include<map>
#include<string>
using namespace std;

const int N = 1e4 + 10;
typedef pair<int, int> PII;

const int end3 = 23 * 60 * 60 + 59 * 60 + 59;

void print(int l, int r) {
	int s1 = l % 60;
	int m1 = (l / 60) % 60;
	int h1 = (l / 60) / 60;
	int s2 = r % 60;
	int m2 = (r / 60) % 60;
	int h2 = (r / 60) / 60;
	printf("%02d:%02d:%02d - %02d:%02d:%02d", h1, m1, s1, h2, m2, s2);
}

int cov(int h, int m, int s) {
	int sum = 0;
	sum += h * 60 * 60;
	sum += m * 60;
	sum += s;
	return sum;
}

bool cmp(PII a, PII b) {
	return a.first < b.first;
}

int main()
{
	int n;
	vector<PII> inter;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int h1, m1, s1, h2, m2, s2;
		scanf("%d:%d:%d - %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
		int t1 = cov(h1, m1, s1);
		int t2 = cov(h2, m2, s2);
		inter.push_back({ t1, t2 });
	}
	sort(inter.begin(), inter.end(), cmp);
	//接下来维护右端点和左端点，直到和下一个区间断开之后再压入新数组；
	vector<PII> merge;
	int L = inter[0].first;
	int R = inter[0].second;
	for (int i = 0; i < (int)inter.size(); i++) {
		int l = inter[i].first;
		int r = inter[i].second;
		if (l < R + 1) {
			R = max(R, r);
		}
		else {
			merge.push_back({ L, R });
			L = l;
			R = r;
		}
	}

	//再循环内进行的操作循坏外一定要继续；
	merge.push_back({ L, R });

	cout << "wodhs" << merge.size() << endl;
	for (int i = 0; i < (int)merge.size(); i++) {
		int l = merge[i].first;
		int r = merge[i].second;
		if (i == 0 && l > 0) {
			print(0, l);
		}
		if (i + 1 == (int)merge.size()) {
			print(r, end3);
		}
		else {
			print(r, merge[i + 1].first);
		}
		cout << endl;
	}

	return 0;
}