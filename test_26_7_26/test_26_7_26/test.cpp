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



#include<iostream>
#include<vector>
#include<stack>
#include<array>
using namespace std;

const int N = 1e6;

array<int, N> ret1;
array<int, N> ret2;
array<int, N> a;
int n;

int main()
{

	
	
	while (cin >> n)
	{
		stack<int> st1;
		stack<int> st2;
		if (n == 0)
		{
			break;
		}
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}

		for (int i = 1; i <= n; i++)
		{
			while (st1.size() && a[st1.top()] >= a[i]) st1.pop();
			if (st1.size())
			{
				ret1[i] = st1.top();
			}
			else
			{
				ret1[i] = 0;
			}
			st1.push(i);
		}

		for (int i = n; i >= 1; i--)
		{
			while (st2.size() && a[st2.top()] >= a[i]) st2.pop();
			if (st2.size())
			{
				ret2[i] = st2.top();
			}
			else
			{
				ret2[i] = n + 1;
			}
			st2.push(i);
		}

		long long ans = 0;
		for (int i = 1; i <= n; i++)
		{
			
			int width = ret2[i] - (ret1[i] + 1);
			int height = a[i];
			long long cur = 1LL * a[i] * width;
			ans = max(ans, cur);

			if (n == 1)
			{
				cout << cur << endl;
			}

		}
		cout << ans << endl;

	}


	
	return 0;
}