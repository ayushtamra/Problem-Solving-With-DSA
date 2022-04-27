// For structure

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define fast ios::sync_with_stdio(0); cin.tie(0);


// struct Human{
//     int size;
//     char name;
// };

// int solve()
// {
//     Human H;
//     H.size = 4;
//     H.name = 'd';
//     struct Human &rh = H;

//     cout<<rh.name<<" "<<rh.size;
//     return 0;
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
//         solve();
//     }
//     return 0;
// }



// For class

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);


class Human{
public:
    int size;
    char name;
};

int solve()
{
    Human H;
    H.size = 5;
    H.name = 'x';

    class Human &rH = H;
    cout<<rH.name<<" "<<rH.size;

    return 0;
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