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
    ListNode* oddEvenList(ListNode* head) {
        // ListNode* os=NULL;
        // ListNode* oe=os;
        // ListNode* es=NULL;
        // ListNode* ee=es;
        // bool f=true;
        // if(head->val%2==0)
        //     f=true;
        // else
        //     f=false;
        // while(head){
        //     if(head->val%2==0){
        //         oe->next=new ListNode(head->val);
        //         oe=oe->next;
        //     }
        //     else{
        //         ee->next=new ListNode(head->val);
        //         ee=ee->next;
        //     }
        //     head=head->next;
        // }
        // if(f==true){
        //     ee->next=os;
        //     return ee;
        // }
        // else
        //     oe->next=es;
        // return oe;
        
        
        ListNode* temp=head;
        ListNode* os=new ListNode(0);
        ListNode* oe=os;
        ListNode* es=new ListNode(0); 
        ListNode* ee=es;
        bool f=true;
        while(temp){
            if(f==true){
                oe->next=new ListNode(temp->val);
                temp=temp->next;
                oe=oe->next;
                f=false;
            }
            else{
                ee->next=new ListNode(temp->val);
                temp=temp->next;
                ee=ee->next;
                f=true;
            }
        }
        oe->next=es->next;
        return os->next;
    }
};