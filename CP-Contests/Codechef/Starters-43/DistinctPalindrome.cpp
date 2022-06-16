// Link: https://www.codechef.com/START43C/problems/DISPAL


// 1st thought solution, giving TLE

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);

void solve()
{
    int n, x;
    cin >> n >> x;

    if (x > ceil(double(n) / 2))
    {
        cout << -1 << "\n";
    }
    else
    {
        unordered_map<char, int> count;
        string palind = "";
        int repeatNum = ceil(double(n) / 2) - x;
        int cnt = 0;
        while (palind.length() < ceil(double(n)/2))
        {
            unsigned seed = time(0);
            srand(seed);
            char ch = 'a' + rand() % 26;

            if (count[ch] == 0 && cnt <= x)
            {
                cnt++;
                palind += ch;
                count[ch]++;
            }
            else
            if (count[ch] >= 1 && repeatNum > 0)
            {
                palind += ch;
                repeatNum--;
                count[ch]++;
            }
        }
        if (n % 2 == 0)
        {
            string revPal = palind;
            reverse(revPal.begin(), revPal.end());
            palind += revPal;
        }
        else
        {
            string revPal = palind.substr(0, n - 1);
            reverse(revPal.begin(), revPal.end());
            palind += revPal;
        }

        cout << palind << "\n";
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
        solve();
    }
    return 0;
}