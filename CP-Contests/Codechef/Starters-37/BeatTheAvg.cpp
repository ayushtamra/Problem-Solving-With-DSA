#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

int solve(int n, int m, int x)
{
    int sum = n*x;
    
    int ans;

    // If x == m, it means a1 = a2 = .. = an = m = x, so no value is greater than average hence ans = 0
    if(x == m)
    {
        ans = 0;
    }
    else{
        ans = sum/(x+1);
    }

    return ans;
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
        int n, m, x;
        cin>>n>>m>>x;
        cout<<solve(n, m, x)<<endl;
    }
    return 0;
}