#include<bits/stdc++.h>
using namespace std;

struct node1{
    double totalvalue, numku, perval;
};

node1 node[1010];

bool cmp(node1& a, node1& b)
{
    return a.perval > b.perval;
}

int main()
{   
    int n;
    cin >> n;
    int d;
    cin >> n;
    for(int i = 1;i <= n; i++)
    {
        cin >> node[i].numku;
    }
    for(int i = 1; i <= n; i++)
    {
        cin >> node[i].totalvalue;
        node[i].perval = node[i].perval / node[i].numku;
    }
    sort(node + 1, node + n + 1, cmp);
    double ret = 0;
    for(int i = 1; i <= n; i++)
    {
        if(d >= node[i].numku){ ret += node[i].totalvalue; d -= node[i].numku;}
        else 
        {
            ret += (d / node[i].numku) * node[i].perval;
            break;
        }

    }
    cout << ret ;



    return 0;
}