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
        
        ListNode* ptr = head;
        ListNode* flag = head;
        ptr = ptr->next;
        int count = 0;
        while(ptr != NULL)
        {
            if(ptr->val == 0){
                
                if(ptr->next == NULL)
                {
                    flag->val = count;
                    flag->next = NULL;
                    break; 
                }
                else{
                    flag->val = count;
                    flag->next = ptr;
                    flag = ptr;
                }
                count = 0;
            }
            else{
                count += (ptr->val);
            }
            
            ptr = ptr->next;
        }
        return head;
    }
};