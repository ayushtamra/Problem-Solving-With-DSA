// Create and print a linked list

#include<bits/stdc++.h>
using namespace std;

class ListNode
{
public:
    int val;
    ListNode* next;
};

void printList(ListNode* head)
{
    ListNode* tmp = head;
    for(int i=0;tmp != NULL;i++)
    {
        cout<<tmp->val<<" ";
        tmp = tmp->next;
    }
}

int main()
{
    ListNode* head = new ListNode();
    ListNode* prev = head;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        ListNode* nd = new ListNode;
        prev->next = nd;
        cin>>nd->val;
        prev = nd;
    }

    printList(head->next);
}