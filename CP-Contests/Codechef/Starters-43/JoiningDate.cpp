// Link: https://www.codechef.com/START43C/problems/JOINING

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

void solve()
{
    int n, k;
    cin>>n>>k;

    int grpCount = ceil(double(n)/5);
    int grpCateg = ceil(double(k)/5);

    cout<<grpCount - grpCateg<<"\n";
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