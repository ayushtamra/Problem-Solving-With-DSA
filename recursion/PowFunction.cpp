/*
When the solve function is called in return, which therefore forms a tree
The complexity is O(2^m), where m = log2n, as the levels are log2n

,ie, Time complexity = O(n)
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

int countss = 0;

int solve(int x, int n)
{
    countss++;
    if(n == 1){
        return x;
    }

    // int val = solve(x, n/2);
    if(n % 2 == 0){
        return solve(x, n/2) * solve(x, n/2);
    }
    else{
        return solve(x, n/2) * solve(x, n/2) * x;
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
        int x, n;
        cin>>x>>n;
        cout<<solve(x, n)<<"\n";
        cout<<"Count: "<<countss<<"\n";
        countss = 0;
    }
    return 0;
}



/*
This tree is now reduced using calculating the value of solve(x,n/2)
and then using it in the return statement to save time complexity
Now the time complexity will be O(log2n), as we removed the other branch and the function is called for log2n times.
*/



#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

int countss = 0;

int solve(int x, int n)
{
    countss++;
    if(n == 1){
        return x;
    }

    int val = solve(x, n/2);
    
    if(n % 2 == 0){
        return val* val;
    }
    else{
        return val * val * x;
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
        int x, n;
        cin>>x>>n;
        cout<<solve(x, n)<<"\n";
        cout<<"Count: "<<countss<<"\n";
        countss = 0;
    }
    return 0;
}


// Compare the countss values for both the programs.