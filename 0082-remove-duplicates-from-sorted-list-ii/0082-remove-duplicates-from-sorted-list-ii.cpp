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
        // if(head==NULL||head->next==NULL)
        //     return head;
        // ListNode* temp=head;
        // ListNode* prev=head;
        // while(temp){
        //     while(temp->val==temp->next->v)
        // }
//         while(temp->next){
//             if(temp->val==temp->next->val)
//                 temp=temp->next;
//         }
            
//         while(temp->next){
//             prev=temp;
//             if(temp->val==temp->next->val){
//                 if(temp->next->next==NULL)
//                     prev->next=NULL;
//                 else{
//                     temp=temp->next->next;
//                     prev->next=temp;
//                 }
                
//             }
//             else{
//                 prev=temp;
//                 temp=temp->next;
                
//             }
            
//         }
//-----------------------------------------------------------------------
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* temp=head;
        ListNode* systumm = new ListNode(0);
        ListNode* ans=systumm;
        map<int,int>m;
        while(temp){
            m[temp->val]++;
            temp=temp->next;
        }
        for(auto i:m){
            if(i.second==1){
                systumm->next = new ListNode(i.first);
                systumm=systumm->next;
            }
            
        }
        return ans->next;
    }
};