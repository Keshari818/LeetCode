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
    ListNode* reverseList(ListNode* head){
        ListNode* prev=NULL;
        ListNode* next=head;
        while(next){
            next=head->next;
            head->next=prev;
            prev=head;
            head=next;
        }
        return prev;
    }
    
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
        // if(head->next->next==NULL && head->val!=head->next->val)
        //     return false;

            
        ListNode* slow=head;
        ListNode* fast=head->next;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        slow->next=reverseList(slow->next);
        slow=slow->next;
        while(slow){
            if(head->val!=slow->val)
                return false;
            head=head->next;
            slow=slow->next;
        }
        return true;
        
    }
};