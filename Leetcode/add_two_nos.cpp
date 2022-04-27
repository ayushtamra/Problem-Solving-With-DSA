#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

class ListNode
{
public:
    int val;
    ListNode *next;
};

void solve()
{
    ListNode* l1 = new ListNode();
    ListNode* l2 = new ListNode();
    ListNode* l3 = new ListNode();

    l1->val = 54;
    l2->val = 13;
    l3->val = 85;

    l1->next = l2;
    l2->next = l3;
    l3->next = NULL;

    cout<<l1->val<<"\n";
    cout<<l2->val<<"\n";
    cout<<l3->val<<"\n";

    cout<<"Address of l1, l2, l3: "<<l1<<" "<<l2<<" "<<l3;
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