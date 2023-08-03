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
    ListNode* mergeList(ListNode* head1,ListNode* head2){
        ListNode* temp=new ListNode(0);
        ListNode *curr2=temp;
        if(head1==NULL)
            return head2;
        if(head2==NULL)
            return head1;
        while(head1 && head2){
            if(head1->val<head2->val){
                temp->next=new ListNode(head1->val);
                temp=temp->next;
                head1=head1->next;
            }
            else{
                temp->next=new ListNode(head2->val);
                temp=temp->next;
                head2=head2->next;
            }
        }
        while(head1){
            temp->next=new ListNode(head1->val);
            temp=temp->next;
            head1=head1->next;
        }
        while(head2){
            temp->next=new ListNode(head2->val);
            temp=temp->next;
            head2=head2->next;
        }
        return curr2->next;
    }
    
    ListNode* sortList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *fast=head->next;
        ListNode *slow=head;
        // ListNode *curr=head;
        while(fast && fast->next){
            // curr=slow;
            slow=slow->next;
            fast=fast->next->next;
        } 
        ListNode *curr=slow->next;
        slow->next=NULL;
        ListNode* l1=sortList(head);
        ListNode* l2=sortList(curr);
        return mergeList(l1,l2);
    }
};