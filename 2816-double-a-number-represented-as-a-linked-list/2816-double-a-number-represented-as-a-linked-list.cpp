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
    ListNode* reverse(ListNode* h1){
        ListNode* prev=NULL;
        ListNode* next=h1;
        while(next){
            next=h1->next;
            h1->next=prev;
            prev=h1;
            h1=next;
        }
        return prev;
    }
    ListNode* doubleIt(ListNode* head) {
        int carry=0;
        head=reverse(head);
        ListNode* temp=new ListNode(0);
        ListNode* curr=temp;
        while(head||carry){
            int sum=0;
            if(head){
                sum+=head->val+head->val;
                head=head->next;
            }
            sum+=carry;
            carry=sum/10;
            sum%=10;
            
            temp->next=new ListNode(sum);
            temp=temp->next;
                
        }
        curr->next=reverse(curr->next);
        return curr->next;
    }
};