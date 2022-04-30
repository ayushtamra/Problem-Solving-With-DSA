# C++ Template

## CP template with output and input files

```
#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

void solve()
{

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
```




## CP template without input and output files


```
#include <bits/stdc++.h>
using namespace std;
int func()
{
    return 0;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    return 0;
}
```