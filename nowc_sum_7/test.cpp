// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     int n;
//     cin >> n;
//     vector<vector<string>> a(n + 1);
//     cin.get();
    
//     for(int i = 1; i <= n; i++)
//     {
//         string s;
//         getline(cin, s);
//         string ss;
//         for(int j = 0;j < s.size(); j++)
//         {
//             if(s[j] != ' ')
//             {
//                 ss += s[j];
//             }
//             else
//             {
//                 a[i].push_back(ss);
//                 ss = "";
//             }
//         }
//         a[i].push_back(ss);
//     }
//     vector<int> b(n + 1);

//     while(1)
//     {
//         vector<string> c(n + 1);
//         for(int i = 1; i <= n; i++)
//         {
//             for(int j = 0; j < a[i].size(); j++)
//             {
//                 if(j < b[i])
//                 {
//                     c[i] += a[i][j];
//                  }
//                  else{
//                     c[i] += a[i][j][0];
//                  }
//             }
//         }
//         //进行最新一轮的更新；
//         map<string, vector<int>> repeat;
//         for(int i = 1; i <= n; i++)
//         {
//             repeat[c[i]].push_back(i);
//         }
//         //统计重叠集合；

//         int flag = 1;
//         for(auto e : repeat)
//         {
//             string key = e.first;
//             auto idset = e.second;
//             if(idset.size() != 1)
//             {
//                 flag = 0;
//                 for(auto ee : idset )
//                 {
//                     b[ee]++;
//                 }
//             }
//         }
//         if(flag)
//         {
//             for(int i = 1; i <= n; i++)
//             {
//                 cout << c[i] << endl;
//             }
//             break;
//         }
        
//     }

    
    

  


//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    //ios::sync_with_stdio(false);
    //cin.tie(0);
    //cout.tie(0);
    int n;
    cin >> n;
   int cnt = 0;
    for(int i = 1; i <= sqrt(n); i++)
    {

        int m = (i + 1) * i;
        int q = n / m;
        cnt += q * i;
        int r = n % m;
        if(r-(m - i - 1) > 0)
        {

            cnt += (r - (m - i - 1));
        }
        
        
        //cout << "i=" << i << " " << "q = " << q << " " << "=" << r - (m - i - 1) << endl;
    }
    cout << cnt << endl;

    return 0;
}