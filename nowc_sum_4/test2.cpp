#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T;
    cin >> T;
    while(T--)
    {
        
        string s;
        cin >> s;
        int sz = s.size();
        int k;
        cin >> k;
        string tmp = "Rounddo";
        
        for(int i = 0; i < k; i++)
        {
            tmp += 'g';
        }
        int sz2 = tmp.size();
        //int df = sz - sz2 + 1;
        //cout << tmp << endl;
        int cnt = 0;
        
        if(sz < sz2)
        {
            cout << 0 << endl;
            return 0;
        }
        size_t p = s.find(tmp);
        if(p != string::npos)
        {
            //cout << "yes" << endl;
            string t = s.substr(p);
            s = t + s.substr(0, p - 0);
            for(int i = 0;i < sz2; i ++)
            {  
                //cout << "pre:" << s << endl;
                s += s[0];
                s.erase(s.begin());
                if(s.find(tmp) == string::npos)
                {
                    cnt++;
                    //cout << s << endl;
                }
            }
            cout <<sz - cnt << endl;
        }
        else{
            int flag = 0;
            //cout << "yes" << endl;
            for(int i = 0;i < sz2 ; i ++)
            {    
                //cout << s << endl; 
                s += s[0];
                s.erase(s.begin());
                size_t p2 = s.find(tmp);
                if(p2  != string::npos)
                {
                    //cout<< "p : " << p2 << " ";
                    flag = 1;
                    string t = s.substr(p2);
                    s = t + s.substr(0, p2 - 0);
                    //cout << " s : " << s << endl;
                     for(int i = 0;i < sz2; i ++)
                    {  
                    //cout << "pre:" << s << endl;
                        s += s[0];
                        s.erase(s.begin());
                        if(s.find(tmp) == string::npos)
                        {
                            cnt++;
                            //cout << s << endl;
                        }
                    }
                    break;
                
                }
              
            }
            if(!flag)
            {
                cout << 0 << endl;
            }
            else
            {
                cout <<sz - cnt << endl;
            }
        }
        
        
        
      
       
        
    }
    
    
    
    return 0;
}