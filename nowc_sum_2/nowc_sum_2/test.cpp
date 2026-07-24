#define _CRT_SECURE_NO_WARNINGS
//
//#include<iostream>
//using namespace std;
//typedef long long ll;
//
//int main()
//{
//	int T;
//	cin >> T;
//	while (T--)
//	{
//		ll n, m;
//		ll sum = 0;
//		cin >> n >> m;
//		if (m <= n - 1)
//		{
//			if ( m + 1 == 1 || m + 1  == 2)
//			{
//				cout << 0 << endl;
//			}
//			else
//			{
//				sum = (m + 1 - 1) * (m + 1 - 2) / 2;
//				cout << sum << endl;
//			}
//		}
//		else {
//			sum = (n - 1) * (n - 2) / 2 - (m - (n - 1));
//			cout << sum << endl;
//		}
//	}
//
//
//
//	return 0;
//}

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
typedef long long ll;
int main()
{
	int T;
	cin >> T;
	while (T--)
	{
		int n;
		cin >> n;
		vector<int> a(n + 1);
		for (int i = 1; i <= n; i++)
		{
			cin >> a[i];
		}
		sort(a.begin() + 1, a.end());
		vector<ll> prefix(n + 1);
		vector<ll> subfix(n + 1);
		prefix[0] = 0;
		for (int i = 1; i <= n; i++)
		{
			prefix[i] = a[i] ^ prefix[i - 1];
		}
		subfix[n] = 0;
		for (int i = n - 1; i >= 0; i--)
		{
			subfix[i] = a[i + 1] ^ subfix[i + 1];
		}




		ll maxi = 0;

		for (int i = 0; i <= n; i++)
		{
			ll cur = prefix[i] + subfix[i];
			maxi = max(maxi,cur);
		}
		cout << maxi << endl;

	}


	return 0;
}