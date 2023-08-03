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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return head;
        if(head->next==NULL && n==1) return NULL;
        int count=0;
        ListNode* temp=head;
        ListNode* curr=head;
        ListNode* ans=curr;
        while(temp){
            count++;
            // cout<<count<<endl;
            temp=temp->next;
        }
        int count2=0;
        while(count2<count-n-1){
            count2++;
            cout<<curr->val<<endl;

            curr=curr->next;
            
        }
        if(count==n)
            return head->next;
        curr->next=curr->next->next;
        return head;
    }
};