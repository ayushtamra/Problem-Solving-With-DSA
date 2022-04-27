#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

class ListNode{
public:
    int data;
    ListNode* next;
};

ListNode* inputList()
{
    int n;
    cin>>n;
    ListNode* HEAD = new ListNode();
    ListNode* ptr;
    
    for(int i=0;i<n;i++)
    {
        if(i == 0)
        {
            ptr = HEAD;
        }
        cin>>ptr->data;

        if(i != n-1) {
            ListNode* tmp = new ListNode();
            ptr->next = tmp;
            ptr = ptr->next;
        }
    }

    return HEAD;
}

void outputList(ListNode* HEAD)
{
    ListNode* ptr = HEAD;
    while(ptr != NULL)
    {
        cout<<ptr->data<<" ";
        ptr = ptr->next;
    }
}

void solve()
{
    ListNode* HEAD = inputList();
    outputList(HEAD);
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