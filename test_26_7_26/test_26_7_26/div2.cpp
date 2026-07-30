// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         int n;
//         cin >> n;
//         int flag = 1;
      
//         int ansmi = 0;
//         int ansmx = 1e9 + 1;
//         vector<int> a(n + 1);
//         for(int i = 1; i <= n; i++)
//         {
//             cin >> a[i];
//         }
//           if(n  % 2 == 1)
//         {
//             cout << "NO" << endl;
//             continue;
//         }
//         for(int i = 1; i < n; i+=2)
//         {
//             int x = a[i];
//             int y = a[i + 1];
            
//             ansmi = max(y, ansmi);
//             ansmx = min(x, ansmx);
//         }
//         if((ansmx - ansmi) > 1)
//         {
//             cout << "YES" << endl;
//         }
//         else{
//             cout << "NO" << endl;
//         }
//     }


//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         int n, k;
//         cin >> n >> k;
//         int tmp = n - k;
//         if(tmp == 1)
//         {
//             cout << -1 << endl;
//             continue;
//         }
//         int cnt1 = n / 2;
//         int cnt2 = n - n / 2;
//         int start = 0;
//         int cnt3 = (tmp + 1) / 2;
//         int cnt4 = tmp / 2;

//         if(cnt3 > cnt1 || cnt4 > cnt2)
//         {
//             start = 1;
//             cnt3 = tmp / 2;
//             cnt4 = (tmp + 1) / 2;
//         }
//         int r1[2] = {cnt1 - cnt3,cnt2 - cnt4};
        
//         string ret;
//         ret.reserve(n);
//         int bit = start;

//         for (int i = 0; i < tmp; i++)
//         {
//             int length = 1 + r1[bit];

//             for (int j = 0; j < length; j++)
//             {
//                 if (bit == 0) ret += '0';
//                 else  ret += '1';
//             }

//             r1[bit] = 0;

//             if (bit == 0) bit = 1;
//             else bit = 0;
//         }
//         cout << ret << endl;
//     }
    


//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;

// const int N = 5010;
// int l[N], r[N], u[N], v[N];

// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         int n; cin >> n;
//         for(int i = 1; i <=n ;i++)
//         {
//             cin >> l[i] >>  r[i] >> u[i] >> v[i];
//         }
//         int ans = 0;
//         for(int m = n; m >= 1; m--)
//         {
//             int cnt = 0;
//             for(int i = 1; i <= n; i++)
//             {
//                 int lr = cnt + 1;
//                 int rr = m - lr + 1;
//                 int flag1 = 0;
//                 int flag2 = 0;
//                 if(rr < u[i] || rr > v[i] )
//                 {
//                     flag2 = 1;

//                 }
//                 if(lr < l[i] || lr > r[i])
//                 {
//                     flag1 = 1;
//                 }
//                 if(flag1 == 1 && flag2 == 1)
//                 {
//                     cnt++;
//                 }
//                 if(cnt == m)
//                 {
//                     break;
//                 }
//             }
//             if(cnt == m )
//             {
//                 ans = m;
//                 break;
//             }
//         }
//         cout << ans << endl;
//     }


//     return 0;
// }