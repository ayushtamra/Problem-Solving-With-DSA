#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);


    double evenSum = 0, oddSum = 0;
    for(int i=0;i<n;i++)
    {
        cin>>v[i];

        if(v[i] % 2 == 0)
        {
            evenSum += v[i]*1.0;
        }
        else{
            oddSum += v[i]*1.0;
        }
    }

    double avgEvenSum = evenSum/(n/2), avgOddSum = oddSum/(n/2);
    double fractEvenPart = avgEvenSum - floor(avgEvenSum), fractOddPart = avgOddSum - floor(avgOddSum);

    

    if(fractEvenPart == 0 && fractOddPart == 0 && (int)floor(avgEvenSum) % 2 == 0 && (int)floor(avgOddSum) % 2 != 0)
    {
        cout<<"YES";
    }
    
    else{
        cout<<"NO";
    }

    return;
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
        cout<<"\n";
    }
    return 0;
}