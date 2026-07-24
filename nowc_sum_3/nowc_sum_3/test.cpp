#define _CRT_SECURE_NO_WARNINGS

//#include<vector>
//#include<iostream>
//using namespace std;
//
//using ll = long double;
//
//using PII = pair<ll, ll>;
//
//int dx[4] = { 1, -1, 0, 0 };
//int dy[4] = { 0 , 0, 1, -1 };
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n;
//		cin >> n;
//		vector<PII> a(n);
//		for (int i = 0; i < n; i++)
//		{
//			cin >> a[i].first;
//			cin >> a[i].second;
//		}
//		for (int i = 2; i < n; i++)
//		{
//			ll dx2 = a[i].first - a[i - 1].first;
//			ll dy2 = a[i].second - a[i - 1].second;
//
//			ll dx1 = a[i - 1].first - a[i - 2].first;
//			ll dy1 = a[i - 1].second - a[i - 2].second;
//
//			long double cos1 = (dx2 * dx1) + (dy1 * dy2);
//			if (cos1 > 0)
//			{
//				cout << "RIGHT" << endl;
//			}
//			else if (cos1 < 0)
//			{
//				cout << "LIFT" << endl;
//			}
//			else cout << "STRAIGHT" << endl;
//
//
//		}
//
//
//	}
//
//
//
//
//
//	return 0;
//}

//
//#include<vector>
//#include<algorithm>
//#include<iostream>
//#include<map>
//using namespace std;
//
//using ll = long double;
//
//using PII = pair<ll, ll>;
//
//int dx[4] = { 1, -1, 0, 0 };
//int dy[4] = { 0 , 0, 1, -1 };
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		int n, m, q;
//		cin >> n >> m ;
//		map<int, int> pos;
//		vector<int> h(n * m);
//		
//		//vector<vector<int>> height(n + 1, vector<int>(m + 1));
//		for (int i = 1; i <= n; i++)
//		{
//			for (int j = 1; j <= m; j++)
//			{
//				
//				//cin >> height[i][j];
//				int id = (i - 1) * m + j - 1;
//			
//				cin >> h[(i - 1) * m + j - 1];
//				pos[h[id]] = (i - 1) * m + j - 1;
//			}
//		}
//		vector<int> h1(h);
//		
//		sort(h1.rbegin(), h1.rend());
//		vector<int> dp(n * m, 0);
//		for (auto e : h1)
//		{
//			cout << "deal: " << e << endl;
//			for (int d = 0; d < 4; d++)
//			{
//				int x = pos[e] / m + 1;
//				int y = pos[e] % m + 1;
//				int xx = x + dx[d];
//				int yy = y + dy[d];
//				int id = (xx - 1) * m + yy - 1;
//				if (xx < 1 || xx > n || yy < 1 || yy > m)
//				{
//					continue;
//				}
//				if (h[id] > e && !dp[id])
//				{
//					
//					dp[e] = 1;
//					break;
//				}
//				else
//				{
//					cout << h[id] << " " << dp[id]  << " " << id << endl << endl;
//				}
//			}
//		}
//		for (auto e : dp)
//		{
//			cout << e << " ";
//		}
//
//		cin >> q;
//		while (q--)
//		{
//			int a, b;
//			cin >> a >> b;
//			int id = (a - 1) * m + b - 1;
//			if (dp[id])
//			{
//				cout << "First" << endl;
//			}
//			else {
//				cout << "Second" << endl;
//			}
//		}
//
//		
//
//
//
//
//	}
//
//
//
//
//
//	return 0;
//}

#include<iostream>
#include<vector>
#include<set>
#include<map>
using namespace std;


const int INF = 10000000;

struct Node {
	int c1 = INF;
	int c2 = 0;
	int r1 = INF;
	int r2 = 0;
};


int main() {
	int n, m;
	cin >> n >> m;
	map<int, Node> mp;
	set<int> st;
	vector<vector<int>> a(n + 1, vector<int>(m + 1));
	
	for (int i = 1;i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int tmp;
			cin >> tmp;
			st.insert(tmp);
			a[i][j] = tmp;
			mp[tmp].r1 = min(i, mp[tmp].r1);
			mp[tmp].r2 = max(i, mp[tmp].r2);
			mp[tmp].c1 = min(j, mp[tmp].c1);
			mp[tmp].c2 = max(j, mp[tmp].c2);
		}
	}

	vector<vector<int>> f(n + 2, vector<int>(m + 2));

	/*for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			int t;
			t = 0;
			f[i][j] += t;
			f[i][j + 1] -= t;
			f[i + 1][j] -= t;
			f[i + 1][j + 1] += t;
		}
	}*/
	for (auto& e : mp)
	{
		if (st.count(e.first))
		{
			int c1 = e.second.c1;
			int c2 = e.second.c2;
			int r1 = e.second.r1;
			int r2 = e.second.r2;
			if (c1 == c2 || r1 == r2) continue;
			f[c1][r1] += 1;
			f[c1][r2 + 1] -= 1;
			f[c2 + 1][r1] -= 1;
			f[c2 + 1][r2 + 1] += 1;
		}
		
		
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			f[i][j] = f[i][j] + f[i - 1][j] + f[i][j - 1] - f[i - 1][j - 1];
			if (f[i][j]) cout << 1 << " ";
			else cout << 0 << " ";
		}
		cout << endl;
	}



	return 0;
}


