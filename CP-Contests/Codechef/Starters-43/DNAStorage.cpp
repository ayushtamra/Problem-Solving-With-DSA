// Link: https://www.codechef.com/START43C/problems/DNASTORAGE

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

void solve()
{
    int n;
    cin>>n;
    string str;
    cin>>str;

    int i=0;
    string dna = "";
    while(i<n)
    {
        string enc = str.substr(i, 2);

        if(enc == "00")
        {
            dna += "A";
        }
        else
        if(enc == "01")
        {
            dna += "T";
        }
        else
        if(enc == "10")
        {
            dna += "C";
        }
        else
        if(enc == "11")
        {
            dna += "G";
        }
        i += 2;
    }
    cout<<dna<<"\n";
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