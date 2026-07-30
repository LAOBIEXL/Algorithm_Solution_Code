#define _CRT_SECURE_NO_WARNINGS

//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> a(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> a[i];
//	}
//	stack<int> st;
//	vector<int> ret(n);
//	for (int i = n - 1; i >= 0; i--)
//	{
//		while (st.size() && a[st.top()] <= a[i]) st.pop();
//		if (st.size())
//		{
//			ret[i] = st.top() +1;
//		}
//		else
//		{
//			ret[i] = 0;
//		}
//		st.push(i); //push的是下标
//	}
//	for (int i = 0; i < n; i++)
//	{
//		cout << ret[i] << " ";
//		
//	}
//	cout << endl;
//
//
//	return 0;
//}

//
//
//#include<iostream>
//#include<vector>
//#include<stack>
//using namespace std;
//
//int main()
//{
//	int n;
//	cin >> n;
//
//	vector<int> value(n + 1);
//	vector<int> heigth(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> heigth[i];
//		cin >> value[i];
//	}
//	vector<int> ret(n + 1);
//
//	stack<int> st1;
//	stack<int> st2;
//
//	for (int i = 1; i <= n; i++)
//	{
//		while (st1.size() && heigth[st1.top()] <= heigth[i]) st1.pop();
//		if (st1.size()) ret[st1.top()] += value[i];
//		st1.push(i);
//	}
//
//	for (int i = n; i >= 1; i--)
//	{
//		while (st2.size() && heigth[st2.top()] <= heigth[i]) st2.pop();
//		if (st2.size()) ret[st2.top()] += value[i];
//		st2.push(i);
//	}
//	int maxi= 0;
//
//	for (int i = 1; i <= n; i++)
//	{
//		maxi = max(maxi, ret[i]);
//	}
//	cout << maxi << endl;
//	
//
//
//	return 0;
//}



//#include<iostream>
//#include<vector>
//#include<stack>
//#include<array>
//using namespace std;
//
//const int N = 1e6;
//
//array<int, N> ret1;
//array<int, N> ret2;
//array<int, N> a;
//int n;
//
//int main()
//{
//
//	
//	
//	while (cin >> n)
//	{
//		stack<int> st1;
//		stack<int> st2;
//		if (n == 0)
//		{
//			break;
//		}
//		for (int i = 1; i <= n; i++)
//		{
//			cin >> a[i];
//		}
//
//		for (int i = 1; i <= n; i++)
//		{
//			while (st1.size() && a[st1.top()] >= a[i]) st1.pop();
//			if (st1.size())
//			{
//				ret1[i] = st1.top();
//			}
//			else
//			{
//				ret1[i] = 0;
//			}
//			st1.push(i);
//		}
//
//		for (int i = n; i >= 1; i--)
//		{
//			while (st2.size() && a[st2.top()] >= a[i]) st2.pop();
//			if (st2.size())
//			{
//				ret2[i] = st2.top();
//			}
//			else
//			{
//				ret2[i] = n + 1;
//			}
//			st2.push(i);
//		}
//
//		long long ans = 0;
//		for (int i = 1; i <= n; i++)
//		{
//			
//			int width = ret2[i] - (ret1[i] + 1);
//			int height = a[i];
//			long long cur = 1LL * a[i] * width;
//			ans = max(ans, cur);
//
//			if (n == 1)
//			{
//				cout << cur << endl;
//			}
//
//		}
//		cout << ans << endl;
//
//	}
//
//
//	
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<stack>
//#include<deque>
//#include<array>
//using namespace std;
//
//const int N = 1e6;
//
//array<int, N> ret1;
//array<int, N> ret2;
//array<int, N> a;
//int n;
//
//int main()
//{
//	int n, k;
//	cin >> n >> k;
//	vector<int> a(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//
//	deque<int> dq;
//	for (int i = 1; i <= n; i++)
//	{
//		while (dq.size() && a[dq.back()] >= a[i]) dq.pop_back();
//		dq.push_back(i);
//		if (dq.back() - dq.front() + 1 > k) dq.pop_front();
//
//		if (i >= k && dq.size())
//		{
//			cout << a[dq.front()] << " ";
//		}
//	}
//	cout << endl;
//	dq.clear();
//	for (int i = 1; i <= n; i++)
//	{
//		while (dq.size() && a[dq.back()] <= a[i]) dq.pop_back();
//		dq.push_back(i);
//		if (dq.back() - dq.front() + 1 > k) dq.pop_front();
//		if (i >= k)
//		{
//			cout << a[dq.front()] << " ";
//		}
//		
//	}
//	cout << endl;
//	
//
//
//	
//
//	return 0;
//}

//#include<iostream>
//#include<vector>
//#include<stack>
//#include<deque>
//#include<array>
//using namespace std;
//
//const int N = 1e6;
//
//array<int, N> ret1;
//array<int, N> ret2;
//array<int, N> a;
//int n;
//
//int main()
//{
//	int n, m;  
//	cin >> n >> m;
//	vector<int> a(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	deque<int> q;
//	for (int i = 1; i <= n; i++)
//	{
//		while (q.size() && a[q.back()] >= a[i]) q.pop_back();
//		q.push_back(i);
//		if (q.back() - q.front() + 1 > m) q.pop_front();
//		if (i >= m)
//		{
//			cout << a[q.front()] << endl;
//		}
//	}
//
//	return 0;
//}

//
//#include<iostream>
//#include<vector>
//#include<stack>
//#include<deque>
//#include<array>
//using namespace std;
//
//const int N = 1e6;
//
//array<int, N> ret1;
//array<int, N> ret2;
//array<int, N> a;
//int n;
//
//int main()
//{
//	int n, m;
//	cin >> n >> m;
//	vector<int> a(n + 1);
//	for (int i = 1; i <= n; i++)
//	{
//		cin >> a[i];
//	}
//	deque<int> q;
//	for (int i = 1; i <= n; i++)
//	{
//		while (q.size() && a[q.back()] >= a[i]) q.pop_back();
//		q.push_back(i);
//		if (q.back() - q.front() + 1 > m) q.pop_front();
//		if (i >= m)
//		{
//			cout << a[q.front()] << endl;
//		}
//	}
//
//	return 0;
//}

//
//#include<iostream>
//#include<vector>
//#include<stack>
//#include<deque>
//#include<set>
//#include<array>
//using namespace std;
//const int MX = 1e5;
//const int N = 1000;
//const int M = 1000;
//int n, m;
//int dx[8] = { 1, -1, 0, 0, -1, 1, 1, -1 };
//int dy[8] = { 0, 0, 1, -1, -1, 1, -1, 1 };
//char a[N][M];
//int f[MX];
//
//void init()
//{
//	for (int i = 0; i < MX; i++)
//	{
//		f[i] = i;
//	}
//}
//
//int find(int x)
//{
//	if (f[x] == x)
//	{
//		return x;
//	}
//	return f[x] = find(f[x]);
//}
//
//void unite(int id1, int id2) {
//	int xx = find(id1);
//	int yy = find(id2);
//	if (xx == yy) return;
//	f[xx] = yy;
//}
//
//int getId(int x, int y)
//{
//	return x * m + y;
//}
//
//int main()
//{
//	init();
//	cin >> n >> m;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			cin >> a[i][j];
//		}
//	}
//	
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i][j] == 'W')
//			{
//				int id1 = getId(i- 1, j-1);
//				for (int d = 0; d < 8; d++)
//				{
//					int xx = i + dx[d];
//					int yy = j + dy[d];
//					if (xx < 1 || xx > n || yy < 1 || yy > m) continue;
//					if (a[xx][yy] == 'W')
//					{
//						
//						int id2 = getId(xx- 1, yy-1);
//						unite(id1, id2);
//					}
//				}
//			}
//		}
//	}
//	set<int> st;
//	for (int i = 1; i <= n; i++)
//	{
//		for (int j = 1; j <= m; j++)
//		{
//			if (a[i][j] == 'W')
//			{
//				int id = getId(i - 1, j - 1);
//		
//				if (!st.count(find(id)))
//				{
//					st.insert(find(id));
//				}
//			}
//			
//		}
//		
//	}
//
//	cout << st.size() << endl;
//
//	return 0;
//}


#include<iostream>
#include<vector>
#include<stack>
#include<deque>
#include<set>
#include<array>
#include<queue>
using namespace std;
const int MX = 1e5;
const int N = 1000;
const int M = 1000;
int n, m;
int dx[8] = { 1, -1, 0, 0, -1, 1, 1, -1 };
int dy[8] = { 0, 0, 1, -1, -1, 1, -1, 1 };
char a[N][M];
int vis[N][M];
int st[N][M];

using pii = pair<int, int>;

void bfs(pii p)
{
	queue<pii> q;
	q.push(p);
	vis[p.first][p.second] = 1;
	while (q.size())
	{
		
		pii t = q.front();
		q.pop();
		for (int d = 0; d < 8; d++)
		{
			int xx = t.first + dx[d];
			int yy = t.second + dy[d];
			if (xx < 1 || xx > n || yy < 1 || yy > m) continue;
			if (a[xx][yy] != 'W' || vis[xx][yy]) continue;
			pii new_p = { xx, yy };
			q.push(new_p);
			vis[xx][yy] = 1;
		}
	}
}

int main()
{
	cin >> n >> m;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			cin >> a[i][j];
			if (a[i][j] == 'W') {
				st[i][j] = 1;
			}
		}
	}
	int ans = 0;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= m; j++)
		{
			if (st[i][j] && !vis[i][j])
			{
			
				ans++;
				pii start= { i, j };
				bfs(start);
			}
		}
	}
	cout << ans << endl;

	return 0;
}