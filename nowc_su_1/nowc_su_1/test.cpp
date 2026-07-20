#define _CRT_SECURE_NO_WARNINGS
//#include<string>
//#include<iostream>
//using namespace std;
//
////a
//
//int n;
//
//int main() {
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		string a;
//		cin >> a;
//		int flag = 1;
//		if (a.size() != 8) {
//			flag = 0;
//		}
//		for (int i = 0; i < 8; i += 2) {
//			if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i'
//				|| a[i] == 'o' || a[i] == 'u') {
//				flag = 0;
//			}
//		}
//		for (int i = 1; i < 8; i += 2) {
//			
//			if (!(a[i] == 'a' || a[i] == 'e' || a[i] == 'i'
//				|| a[i] == 'o' || a[i] == 'u')) {
//				flag = 0;
//			}
//		}
//		if (flag) {
//			cout << "Suspected Virus" << endl;
//		}
//		else {
//			cout << "Well-Being" << endl;
//		}
//
//	}
//}

//
//#include<iostream>
//#include<vector>
//#include<set>
//using namespace std;
//
//int main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        int n, m, q;
//        cin >> n >> m >> q;
//        vector<set> arr(m);
//        for (int i = 0; i < m; i++) {
//            int k;
//            cin >> k;
//            for (int j = 0; j < k; j++) {
//                int tmp;
//                cin >> tmp;
//                arr[i].insert(tmp);
//            }
//        }
//        for (int i = 0; i < q; i++)
//        {
//            int u, v;
//            cin >> u >> v;
//            int cnt = 0;
//            for (int j = 0; j < m; j++) {
//                if (set[j].count(u) && set[j].count(v))
//                {
//                    cnt++;
//                }
//            }
//            cout << cnt << endl;
//        }
//    }
//
//
//    return 0;
//}


//
//
//#include<iostream>
//#include<vector>
//#include<set>
//#include<map>
//#include<cmath>
//using namespace std;
//
//typedef long long ll;
//int main() {
//    int t;
//    ll newarr[10] = { 4,3,2,5,1,6,9,4,7, 8 };
//    ll sz = 10;
//    ll mcnt = 0;
//    for (ll i = 0; i < sz; i++) {
//        ll initn = newarr[i];
//        ll cnt = 1;
//        for (ll j = i + 1; j < sz; j++) {
//            if (newarr[j] == 1 + initn)
//            {
//                cnt++;
//                initn = newarr[j];
//            }
//            else {
//                break;
//            }
//        }
//        mcnt = max(cnt, mcnt);
//    }
//    cout << mcnt << endl;
//
//    
//
//
//    return 0;
//}
////
//#include<iostream>
//#include<vector>
//#include<set>
//#include<map>
//#include<cmath>
//using namespace std;
//
//typedef long long ll;
//int main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        ll N, M, K;
//        cin >> N >> M >> K;
//        ll LIM = pow(2, K) - 1;
//
//        vector<ll> numN(N);
//        vector<ll> numM(M);
//        map<ll, ll> Mpos;
//        map<ll, ll> Npos;
//        for (ll i = 0; i < N; i++) { cin >> numN[i]; Npos[numN[i]] = i; }
//        for (ll i = 0; i < M; i++) { cin >> numM[i]; Mpos[numM[i]] = i; }
//        vector<ll> newarr;
//        for (ll i = 0; i < N; i++) {
//            ll tmp = numN[i] ^ LIM;
//            if (Mpos.count(tmp))
//            {
//                newarr.push_back(Mpos[tmp]);
//            }
//        }
//        ll pos = 0;
//        ll sz = newarr.size();
//        ll Mcnt = 0;
//
//        if (sz == 0) {
//            cout << 0 << endl;
//        }
//        else
//        {
//            vector<ll> dp(sz + 1);
//            dp[0] = 1;
//
//            for (int i = 1; i < sz; i++) {
//                ll tmpmax = 0;
//                for (int j = 0; j < i; j++) {
//                    if (newarr[j] < newarr[i]) {
//                        tmpmax = max(dp[j], tmpmax);
//                    }
//                }
//                dp[i] = 1 + tmpmax;
//            }
//            ll maxCnt = 0;
//            for (int i = 0; i < sz; i++) {
//                maxCnt = max(maxCnt, dp[i]);
//            }
//            cout << maxCnt << endl;
//        }
//
//
//
//
//
//    }
//    return 0;
//}

//
//#include<iostream>
//#include<vector>
//#include<set>
//#include<map>
//#include<cmath>
//#include<string>
//using namespace std;
//
//typedef long long ll;
//int main() {
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n;
//        cin >> n;
//        string S;
//        cin >> S;
//        size_t size = S.size();
//        S = S + S;
//        string S_sub = "000100100000";
//        size_t pos = S.find(S_sub);
//        int Cnt = 0;
//
//        cout << size << endl;
//
//        while (pos != string::npos)
//        {
//            if (pos < size) {
//                Cnt++;
//                int space = (pos - size) / 4;
//                int avi = (size - 12) / 4;
//
//            }
//                Cnt++;
//                cout << pos << endl;
//                pos = S.find(S_sub, pos + 1);
//          
//          
//        }
//        cout << Cnt << endl;
//
//    }
//    000100100000 000100100000
//    
//    0001001000001111 0001001000001111
// 
//    return 0;
//}
//
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//int main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        int n;
//        cin >> n;
//        int a = 0, b = 0;
//        int tmp;
//        for (int i = 0; i < n; i++) {
//            cin >> tmp;
//            if (tmp == -1) {
//                b++;
//            }
//            else {
//                a++;
//            }
//            
//        }
//        if (abs(a - b) % 4 == 0) {
//            cout << "YES" << endl;
//        }
//        else {
//            cout << "NO" << endl;
//        }
//
//    }
//
//    return 0;
//}
//


//#include<iostream>
//#include<cstdlib>
//using namespace std;
//
//int main() {
//    int T;
//    cin >> T;
//    while (T--) {
//        int n, k, m;
//        cin >> n >> k >> m;
//        if (m < k) {
//            cout << "NO" << endl;
//        }
//        else {
//            cout << "YES" << endl;
//            for (int i = 1; i <= n; i++) {
//                if (i % k == 0) {
//                    cout << m - k + 1 << " ";
//                }
//                else
//                {
//                    cout << 1 << " ";
//                }
//           }
//            cout << endl;
//        }
//
//    }
//
//    return 0;
//}


//#include<iostream>
//#include<cstdlib>
//#include<vector>
//using namespace std;
//
//int main() {
//    int T;
//    cin >> T;
//    while (T--)
//    {
//        int n;
//        cin >> n;
//        vector<int> a(n);
//        vector<int> b(n);
//
//        int cnt1 = 0;
//        int cnt2 = 0;
//
//
//        for (int i = 0; i < n; i++) {
//            cin >> a[i];
//            if (a[i] == 1) {
//                cnt1++;
//            }
//        }
//        for (int i = 0; i < n; i++) {
//            cin >> b[i];
//            if (b[i] == 1) {
//                cnt2++;
//            }
//        }
//        int flag = 1;
//        int cnt3 = 0;
//        for (int i = 0; i < n; i++) {
//            if (a[i] != b[i]) {
//                if (a[i] == 1)
//                {
//                    cnt3++;
//                }
//                flag = 0;
//            }
//        }
//        if (flag) {
//            cout << 0 << endl;
//        }
//        else {
//            if (cnt1 == 0) {
//                cout << -1 << endl;
//             
//            }
//            else if (cnt2 == n) {
//                cout << -1 << endl;
//                
//            }
//            else if (cnt3 % 2 == 1) {
//                cout << 1 << endl;
//            }
//            else {
//                cout << 2 << endl;
//            }
//        }
//    }
//
//    return 0;
//}
//#include<vector>
//#include<iostream>
//using namespace std;
//typedef long long ll;
//int main() {
//	int n;
//	cin >> n;
//	vector<int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	ll sum = 0;
//	for (int i = 0; i < n; i++) {
//		sum += 1LL * (2 * i + 1 - n) * a[i];
//	}
//	cout << sum << endl;
//
//
//	return 0;
//}

//#include<vector>
//#include<iostream>
//using namespace std;
//typedef long long ll;
//int main() {
//	int n;
//	cin >> n;
//	int x, k;
//	cin >> k >> x;
//	vector<int> a(n);
//	for (int i = 0; i < n; i++) {
//		cin >> a[i];
//	}
//	int c = x - a[k];
//	for (int i = 0; i < n; i++) {
//		a[i] = ((a[i] + c) % n + n) % n;
//	}
//	for (int i = 0; i < n; i++) {
//		cout << a[i] << " ";
//	}
//	cout << endl;
//
//	return 0;
//}

//#include<iostream>
//#include<iomanip>
//using namespace std;
//
//int main() {
//	int T;
//	cin >> T;
//	while (T--) {
//		int n;
//		cin >> n;
//		cout << 2 * n << endl;
//		int cnt = 0;
//		int m = n / 10;
//		for (int i = 0; i <= m; i++) {
//			for (int j = 0; j < 10; j++) {
//				if (cnt == n) {
//					break;
//				}
//				cnt++;
//				cout << fixed << setprecision(9) << 0.11 * j << " " << 0.11 * i << " " << 0.0 << endl;
//			}
//			
//		}
//		cnt = 0;
//		for (int i = 0; i <= m; i++) {
//			for (int j = 0; j < 10; j++) {
//				if (cnt == n) {
//					break;
//				}
//				cnt++;
//				cout << fixed << setprecision(9) << 0.11 * j << " " << 0.11 * i << " " << 1.0 << endl;
//			}
//
//		}
//
//	}
//
//
//	return 0;
//}

#include<iostream>
#include<iomanip>
#include<string>
#include<algorithm>
#include<vector>
#include<array>
using namespace std;


using HandValue = array<int, 6>;

enum Handtype {
	High, //0
	Pair1, //1
   	Pair2,  //2
	Three,  //3
	Stright,//4
	Flush,//5
	Full,//6
	Four,//7
	StraightFlu //8
};

int getRank(char s)
{
	if (s == 'A') return 14;
	else if (s == 'K') return 13;
	else if (s == 'Q') return 12;
	else if (s == 'J') return 11;
	else if (s == 'T') return 10;
	else {
		return int(s - 48);
	}
}

int getSuit(char s)
{
	if (s == 'C') return 0;
	else if (s == 'D') return 1;
	else if (s == 'H') return 2;
	else if (s == 'S') return 3;
	else return -1;
}

int parseCard(const string& s)
{
	int rank = getRank(s[0]);
	int suit = getSuit(s[1]);
	int idx = (rank - 2) * 4 + suit;
	return idx;
}

int rankOf(int card) {
	return card / 4 + 2;
}

int suitOf(int card) {
	return card % 4;
}

int isStright(const array<int, 5>& ranks, const array<int, 15>& cnt)
{
	if (ranks == array<int, 5>{14, 5, 4, 3, 2})
	{
		return 5;
	}
	for (int i = 0; i < 4; i++) {
		if (ranks[i + 1] != ranks[i] - 1) {
			return 0;
		}
	}
	return ranks[0];
}

//统计计算牌型所需要的数据：
HandValue evaluate(const array<int, 5>& cards)
{
	array<int, 15> cnt{};
	array<int, 5> ranks{}; //排序；
	bool flush = true;
	
	int firstSuit = suitOf(cards[0]);

	for (int i = 0; i < 5; i++)
	{
		int rank = rankOf(cards[i]);
		cnt[rank]++;
		ranks[i] = rankOf(cards[i]);
		if (firstSuit != suitOf(cards[i]))
		{
			flush = false;
		}

	}
	sort(ranks.rbegin(), ranks.rend());


	//判断同花顺子；
	int stright = isStright(ranks, cnt);

	vector<int> pairs;
	vector<int> singles;
	int four = 0;
	int three = 0;

	for (int i = 14; i >= 2; i--) {
		if (cnt[i] == 4) {
			four = i;
		}
		else if (cnt[i] == 3) {
			three = i;
		}
		else if (cnt[i] == 2) {
			pairs.push_back(i);
		}
		else if (cnt[i] == 1) {
			singles.push_back(i);
		}
			
	}
	 
	if (flush && stright)
	{
		//同花顺后面几项没有意义
		return {
			StraightFlu,stright, 0, 0, 0, 0
		};
	}
	if (four) {
		return { Four, four, four, four, four, singles[0] };
	}
	if (three && !pairs.empty()) {
		return { Full, three, three, three, pairs[0], pairs[0] };
	}
	if (flush) {
		return { Flush, ranks[0], ranks[1], ranks[2], ranks[3], ranks[4] };
	}
	if (stright) {
		return { Stright, stright, 0, 0, 0, 0 };
	}
	if (three) {
		return { Three, three,three, three, singles[0], singles[1] };
	}
	if (pairs.size() == 2) {
		return { Pair2, pairs[0], pairs[0], pairs[1], pairs[1],singles[0] };
	}
	if (!pairs.empty()) {
		return { Pair1, pairs[0], pairs[0], singles[0], singles[1], singles[2] };
	}
	else {
		return { High, ranks[0],ranks[1], ranks[2],ranks[3],ranks[4] };
	}

}

array<int, 5> buildHand(const array<int, 4>& faceup, int holeCard)
{
	array<int, 5> hand{};
	for (int i = 0; i < 4; i++) {
		hand[i] = faceup[i];
	}
	hand[4] = holeCard;
	return hand;
}

int main() {
	int T = 1;
	cin >> T;
	while (T--)
	{
		ios::sync_with_stdio(false);
		cin.tie(nullptr);
		string s;
		array<int, 4> my{};
		array<int, 4> opp{};
		array<bool, 52> st{};

		for (int i = 0; i < 4; i++)
		{
			cin >> s;
			my[i] = parseCard(s);
			st[my[i]] = 1;
		}

		for (int i = 0; i < 4; i++) {
			cin >> s;
			opp[i] = parseCard(s);
			st[opp[i]] = 1;
 		}

		vector<int> availible;

		for (int i = 0; i < 52; i++) {
			if (!st[i]) {
				availible.push_back(i);
			}
		}

		array<HandValue, 52> myValue{};
		array<HandValue, 52> oppValue{};


		//预处理
		for (auto e : availible) {
			myValue[e] = evaluate(buildHand(my, e));
			oppValue[e] = evaluate(buildHand(opp, e));
		}

		int ret = 1;

		for (auto opp_card : availible) {

			int cur_r = -1;
			for (auto my_card : availible)
			{
				int cur;
				if (my_card == opp_card) continue;
				if (myValue[my_card] > oppValue[opp_card])
				{
					cur = 1;
				}
				else if (myValue[my_card] == oppValue[opp_card]) {
					cur = 0;
				}
				else {
					cur = -1;
				}
				cur_r = max(cur, cur_r);
			}
			ret = min(cur_r, ret);
		}
		if (ret == 1)
		{
			cout << "WoYaoYanPai\n";
		}
		else if (ret == 0)
		{
			cout << "PaiMeiYouWenTi\n";
		}
		else {
			cout << "GeiWoCaPiXie\n";
		}


		//cout << parseCard("TS") << endl;
		//cout << suitOf(parseCard("TS")) << endl;
		//cout << rankOf(parseCard("TS")) << endl;

	}


	return 0;
}
