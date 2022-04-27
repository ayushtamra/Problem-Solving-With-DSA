/*
This recursion will form a tree of approx n levels so complexity will be
O(2^n)
*/

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

int couunt = 0;
int solve(int n)
{
    couunt++;

    if(n == 0 || n == 1){
        return 1;
    }
    return solve(n-1) + solve(n-2);
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
        couunt = 0;
    }
    return 0;
}






/*
Recursion using dynamic programming, time complexity: O(n)
*/

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define fast ios::sync_with_stdio(0); cin.tie(0);


// int countt = 0;

// int solve(int n)
// {
//     static std::vector<int> store(50);

//     countt++;

//     if(n == 0 || n == 1){
//         return 1;
//     }

//     if(store[n] != 0)
//     {
//         return store[n];
//     }
//     else{
//         store[n] = solve(n-1) + solve(n-2);
//         return store[n];
//     }

// }


// signed main()
// {
//     fast;

// #ifndef ONLINE_JUDGE
//     freopen("/home/ayush/Desktop/CP-DSA/input.txt", "r", stdin);
//     freopen("/home/ayush/Desktop/CP-DSA/output.txt", "w", stdout);
// #endif

//     int t = 1;
//     cin >> t;
//     for (int tt = 1; tt <= t; tt++)
//     {
//         int n;
//         cin>>n;
//         cout<<solve(n)<<" count= "<<countt<<"\n";
//         countt = 0;
//     }
//     return 0;
// }