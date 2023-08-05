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
    ListNode* reverse(ListNode* head1){
        ListNode* prev=NULL;
        ListNode* next=head1;
        while(next){
            next=head1->next;
            head1->next=prev;
            prev=head1;
            head1=next;
        }
        return prev;
    }
    
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL || head->next==NULL)
            return head;
        
        ListNode* ans=head;
        int count=0;
        while(ans){
            count++;
            ans=ans->next;
        }
        
        if(k>=count)
            k=k%count;
        if(k==0) return head;
        head=reverse(head);
        ListNode* temp=head;
        
        for(int i=0;i<k-1;i++){
            temp=temp->next;
        }
        if(temp->next){
            ListNode* curr=temp->next;
            temp->next=NULL;
            head=reverse(head);
            curr=reverse(curr);
            ListNode* res=head;
            while(res->next){
                res=res->next;
            }
            res->next=curr;
        }
        return head;
    }
};