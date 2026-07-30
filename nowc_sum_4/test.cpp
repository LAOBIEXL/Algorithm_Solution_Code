// #include<bits/stdc++.h>
// using namespace std;



// int main()
// {
//     int T;
//     cin >> T;
//     while(T--)
//     {
//         string s;
//         cin >> s;
//         int sz1 = s.size();
//         int k;
//         cin >> k;
//         string tmp = "Rounddo";
//         for(int i = 0; i < k; i++)
//         {
//             tmp += 'g';
//         }
//         int sz2 = tmp.size();

//         string s_c = s + s;
//         vector<int> pos;
//         size_t p = s_c.find(tmp);
//         while(p != string::npos)
//         {
//             pos.push_back(p);
//             p = s_c.find(tmp, p + 1);
//         }
        
//         vector<int> diff(2 * sz1 + 10);

//         for(int i = 0;i < pos.size(); i++)
//         {
//             int begin = pos[i] + sz2 - sz1;
//             int end = pos[i];
//             if(begin < 0)
//             {
//                 begin = 0;
//             }
//             //cout << "do:" << begin << " " << end << endl;
            
//             int l = begin + 1;
//             int r = end + 1;
//             diff[l] += 1;
//             diff[r + 1] -= 1;
//         }
//         for(int i = 1; i <= diff.size(); i++)
//         {
//             diff[i] = diff[i] + diff[i - 1];
//         }
//         int cnt = 0;
//         for(int i = 1; i <= sz1; i++)
//         {
//             if(diff[i] > 0)
//             {
//                 cnt ++;
//             }
//         }
//         cout << cnt << endl;

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
//         string s;
//         cin >> s;
//         int k;
//         cin >> k;
//         string tmp = "Rounddo";
//         for(int i = 0; i <k; i++)
//         {
//             tmp += 'g';
//         }
//         int sz = s.size();
        
//         s += s;
//         int cnt = 0;
//         int p = 0;
//         while((p = s.find(tmp, p)) != string::npos)
//         {
//             if(p < sz)
//             {
//                 cnt++;
//             }
//             p = p + 1;
//         }
//         if(cnt == 0)
//         {
//             cout << 0 << endl;
//         }
//         else if(cnt == 1)
//         {
//             cout << sz - tmp.size() + 1 << endl;
//         }
//         else if(cnt > 1)
//         {
//             cout << sz << endl;
//         }
//     }
    
    
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        ll p;
        cin >> p;
        int flag = 1;
        ll s = floor(sqrt(p)) + 1;
        while(flag)
        {   
            ll q = s * s - p;
            ll x1 = s % q;
            ll x2 = s % p;
            if(x1 == 0 || x2 == 0)
            {
                s = s + 1;
                continue;
            }
            else if(q < 2)
            {
                s = s + 1; 
                continue;
            }
            cout << x1 << " " << x2 << " " << q << endl; 
            break;
        }
      
        
    }
    
    return 0;
}
