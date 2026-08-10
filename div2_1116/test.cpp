// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         int a, b, c;
//         cin >> a >> b >> c;
//         int ret = 0x3f3f3f3f;
//         vector<int> arr;
//         arr.push_back(a);
//         arr.push_back(b);
//         arr.push_back(c);
//         sort(arr.begin(), arr.end());
//         //cout << arr[0] <<" " << arr[1] << " " << arr[2];
//         ret = min(ret, arr[2] - arr[0]);
//         ret = min(ret, arr[2]);
//         ret = min(ret, arr[1]);
//         cout << ret << endl;
//     }

//     return 0;
// }

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
//         string s;
//         cin >> s;

//         int ans = 0;

//         for(int x =0; x <= 1; x++)
//         {
//             for(int y= 0; y<= 1; y++)
//             {
//                 vector<int> a(n);
//                 a[0] =x;
//                 a[1] = y;

//                 for(int i = 2; i < n; i++)
//                 {
//                     a[i] = 1 - a[i - 2];
//                 }

//                 bool flag = true;
//                 for(int i = 0; i < n; i++)
//                 {
//                     if(s[i] != '?' && s[i] - '0' != a[i])
//                     {
//                         flag = false;
//                         break;
//                     }
//                 }

//                 if(flag)
//                 {
//                     ans++;
//                 }
//             }
//         }

//         cout << ans<< endl;
//     }

//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
using ll = long long;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        ll k;
        cin >> n >> k;
        string s;
        cin >> s;
        int len = 2*n;
        int red = 0;
        int blue = 0;

        for(int i = 0; i < len; i++)
        {
            if(s[i] == '1')
            {
                int p = i;
                int next = (i + 1) % len;

                if(s[next] == '0')
                {
                    p = next;
                }

                if(p % 2 == 0)
                {
                    blue++;
                }
                else
                {
                    red++;
                }
                //cout << i + 1 << " " << p + 1 << " " << red << " " << blue<< endl << endl;
            }
        }

        cout << red << " " << blue <<endl;
    }

    return 0;
}
