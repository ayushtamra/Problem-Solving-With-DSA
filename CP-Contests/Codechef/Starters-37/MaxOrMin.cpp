#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

int solve(int n)
{
    vector<int> binary(n);

    for(int i=0;i<n;i++)
    {
        cin>>binary[i];
    }

    unordered_map<int, int> umap;

    for(int i=0;i<n;i++)
    {
        umap[binary[i]]++;
    }

    if(umap[0] > umap[1])
    {
        return 0;
    }
    else{
        return 1;
    }
    
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
        int n;
        cin>>n;
        cout<<solve(n)<<"\n";
    }
    return 0;
}