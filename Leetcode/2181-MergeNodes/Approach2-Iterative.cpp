/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        
        ListNode *ptr = head;
        
        ListNode *flag = head;
                
        long long int sum = 0;
        while(ptr->next != NULL)
        {
            ptr  = ptr->next;
            
            if(ptr->val != 0)
            {
                sum += ptr->val;
            }
            else{
                ptr->val = sum;
                flag->next = ptr;
                flag = flag->next;
                sum = 0;
            }
        }
        
        return head->next;
    }
};