#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

void solve(int n, int x)
{
    vector<int> h(n);

    for(int i=0;i<n;i++)
    {
        cin>>h[i];
    }
    int t1;
    int max = -1;
    for(int i=0;i<n;i++)
    {
        if(max < h[i])
        {
            max = h[i];
        }
    }

    t1 = max;

    int t2 = 0;
    for(int i=0;i<n;i++)
    {
        t2 += ceil(h[i]*1.0/x);
    }

    int maxTime = t1<t2?t1:t2;

    cout<<maxTime<<"\n";
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
        int n, x;
        cin>>n>>x;
        solve(n, x);
    }
    return 0;
}