## Problem on order - CDC question

Problem Link: https://www.codechef.com/problems/CHEFROUT


#### Solution in CDC

```
#include<iostream>
#include <cstring>
using namespace std;
int main()
{
    char a[10];
    int i,len,count=0;
    cin>>a;
    len=strlen(a);
    for(i=0;i<=len;i++)
    {
        if(a[i]=='C')
        {
            count=1;
            break;
        }
        else if((a[i]=='S')||(a[i]='E')){break;}
    }
    for(;i<=len;i++)
    {
        if(a[i]=='E')
        {
            count++;
            break;
        }
        else if((a[i]=='S')&&(count==1)){count=-100;break;}
        else if(a[i]=='S'){break;}
    }
    for(;i<=len;i++)
    {
        if(a[i]=='S')
        {
            count++;
        }
        else if(a[i]=='C'){count=-100;break;}
    }
    (count>0)?cout<<"yes":cout<<"no";
    return 0;
}

```


#### My solution

```
#include<iostream>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    
    int len = s.length();
    int flag, i, j;
    char Activity[] = {'C', 'E', 'S'};
    
    for(i=0;i<len;i++)
    {
        for(j=0;j<3;j++)
        {
            if(s[i] == Activity[j])
            {
                flag = j;
                break;
            }
        }
        if(j != 3)
        {
            break;
        }
    }
    for(;i<len;i++)
    {
        for(j=0;j<flag;j++)
        {
            if(s[i] == Activity[j])
            {
                cout<<"no";
                return 0;
            }
        }
    }
    cout<<"yes";
}
```



### Solution very much optimised- complexity O(N)

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

void solve()
{
    string str;
    cin>>str;

    int len = str.length();
    for(int i=0;i<len;i++)
    {
        if((str[i] == 'E' && str[i+1] == 'C') || (str[i] == 'S' && str[i+1] == 'E') || (str[i] == 'S' && str[i+1] == 'C'))
        {
            cout<<"no"<<"\n";
            return;
        }
    }
    cout<<"yes"<<"\n";
}

signed main()
{
    fast;

#ifndef ONLINE_JUDGE
    freopen("/home/ayush/Desktop/CP-DSA/input.txt", "r", stdin);
    freopen("/home/ayush/Desktop/CP-DSA/output.txt", "w", stdout);
#endif

    int t = 1;
    cin >> t;
    for (int tt = 1; tt <= t; tt++)
    {
        solve();
    }
    return 0;
}



