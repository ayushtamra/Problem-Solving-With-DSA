// Inserting at the first position

// #include <bits/stdc++.h>
// using namespace std;
// #define int long long
// #define fast ios::sync_with_stdio(0); cin.tie(0);

// class ListNode{
// public:
//     int data;
//     ListNode* next;
// };

// void solve()
// {
//     ListNode* HEAD = new ListNode();
//     HEAD->data = 10;

//     ListNode* ptr = new ListNode();
//     ptr->data = 5;

//     ptr->next = HEAD;
//     HEAD = ptr;

//     while(ptr != NULL)
//     {
//         cout<<ptr->data<<" ";
//         ptr = ptr->next;
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
//         solve();
//     }
//     return 0;
// }



// Inserting at the end

#include <bits/stdc++.h>
using namespace std;
#define int long long
#define fast ios::sync_with_stdio(0); cin.tie(0);

class Student
{
    int reg;
    string name;
    Student* next;
};

void solve()
{
    Student* HEAD = new Student();

    // Defining the linked list
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
    {
        Student* ptr = new Student();
        cin>>ptr->data;
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