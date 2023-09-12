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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* temp=head;
        ListNode* curr=temp;
        while(temp){
            while(curr && curr->val==temp->val){
                curr=curr->next;        
            }
            if(curr==NULL&& temp->next!=NULL){
                temp->next=NULL;
                return head;
            }
            temp->next=curr;
            temp=temp->next;
        }
        return head;
    }
};