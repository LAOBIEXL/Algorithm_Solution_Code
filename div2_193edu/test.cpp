// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int t;
//     cin >> t;
//     while(t--)
//     {
//         int n;
//         cin >> n;
//         vector<int> a(n + 1);
//         for(int i = 1;i <= n;i ++)
//         {
//             cin >> a[i];
//         }
//         vector<int> mp;
//         int pos = 0;
//         mp.push_back(0);
//         mp[pos]++;
//         int flag1 = 1;
//         int flag2 = 1;
//         int diff = 0;
//         for(int i = 1;i +1 <=  n; i++)
//         {
//             if(a[i] == a[i + 1])
//             {
//                 mp[pos]++;
//             }
//             else
//             {
//                 pos++;
//                 mp.push_back(0);
//                 mp[pos]++;
//                 if(flag1 && i + 2 <= n && i >= 2)
//                 {
//                     if(a[i] != a[i + 2] && a[i + 1] != a[i - 1] && (a[i] == a[i - 1] || a[i + 1] == a[i + 2]))
//                     {
//                         if(diff < 1)
//                         {
//                             diff = 1;
//                         }
//                         //diff = 1;
//                         flag1 = 0;
//                     }
                   
//                 }
//                 if(flag2 && i + 2 <= n && i >= 2)
//                 {
                
//                     if(a[i + 1] == a[i + 2] && a[i] == a[i - 1])
//                     {
//                         diff = 2;
//                         flag2 = 0;
//                     }
//                     //cout <<"dd" << diff << endl;
//                 }
                
//                 if(i == 1)
//                 {
//                     if(n >= 3)
//                     {
//                         if(a[i + 1] == a[i + 2])
//                         {
//                             if(diff < 1)
//                             {
//                                 diff = 1;
//                             }
//                         }
//                     }
//                 }
//                 if(i == n - 1)
//                 {
//                     if(n >= 3)
//                     {
//                         if(a[i] == a[i - 1])
//                         {
//                             if(diff < 1)
//                             {
//                                 diff = 1;
//                             }
//                         }
//                     }
//                 }

            
//             }
//         }
//         //cout << diff << endl;
//         int cnt = 0;
//         for(auto e : mp)
//         {
//             if(e > 1)
//             {
//                 cnt += e - 1;
//             }
//         }
//         cout << n - cnt + diff << endl;
//     }
    






//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;



// int main()
// {
//     int t;
//     cin >> t;

//     while (t--)
//     {
//         int n, m, x, y;
//         cin >> n >> m >> x >> y;

//         vector<int> a(x);
//         vector<int> b(y);

//         for (int i = 0; i < x; i++)
//         {
//             cin >> a[i];
//         }

//         for (int i = 0; i < y; i++)
//         {
//             cin >> b[i];
//         }

//         vector<int> aa;
//         vector<int> bb;
//         vector<int> same;

//         int i = 0;
//         int j = 0;

//         while (i < x && j < y)
//         {
//             if (a[i] == b[j])
//             {
//                 same.push_back(a[i]);
//                 i++;
//                 j++;
//             }
//             else if (a[i] < b[j])
//             {

//                 aa.push_back(a[i]);
//                 i++;
//             }
//             else
//             {
//                 bb.push_back(b[j]);
//                 j++;
//             }
//         }

//         while (i < x)
//         {
//             aa.push_back(a[i]);
//             i++;
//         }

//         while (j < y)
//         {
//             bb.push_back(b[j]);
//             j++;
//         }

//         long long ans = 0;
//         int cnt = 0;
//         int minv = 1e9;

//         for (int v : same)
//         {
//             ans += v;
//             cnt++;
//             minv = min(minv, v);
//         }

//         int p = max(0, (int)aa.size() - n);

//         for (int k = p; k < aa.size(); k++)
//         {
//             ans += aa[k];
//             cnt++;
//             minv = min(minv, aa[k]);
//         }

//         p = max(0, (int)bb.size() - m);

//         for (int k = p; k < bb.size(); k++)
//         {
//             ans += bb[k];
//             cnt++;
//             minv = min(minv, bb[k]);
//         }

//         if (cnt == n + m)
//         {
//             ans -= minv;
//         }

//         cout << ans << endl;
//     }

//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;
int main()
{

    return 0;
}