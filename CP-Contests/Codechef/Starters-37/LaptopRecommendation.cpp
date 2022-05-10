#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

void solve(int n)
{
    vector<int> arr;

    vector<int> count(11, 0);
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr.push_back(x);
    }

    for(auto it:arr)
    {
        count[it]++;
    }

    int max = -1;
    int maxIndex;
    for(int i=0;i<11;i++)
    {
        if(max < count[i])
        {
            max = count[i];
            maxIndex = i;
        }
    }

    int tempCount = 0;
    for(int i=0;i<11;i++)
    {
        if(max == count[i])
        {
            tempCount++;
        }
    }

    if(tempCount > 1)
    {
        cout<<"CONFUSED"<<"\n";
    }
    else{
        cout<<maxIndex<<"\n";
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
        solve(n);
    }
    return 0;
}