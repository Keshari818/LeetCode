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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL && list2==NULL)
            return NULL;
        if(list1==NULL)
            return list2;
        if(list2==NULL)
            return list1;
        ListNode* temp=new ListNode(0);
        ListNode *curr = temp;
        while(list1 && list2){
            if(list1->val >list2->val){
                curr->next=new ListNode(list2->val);
                curr=curr->next;
                list2=list2->next;
            }
            else if(list1->val <list2->val){
                curr->next=new ListNode(list1->val);
                curr=curr->next;
                list1=list1->next;
            }
            else{
                curr->next=new ListNode(list1->val);
                curr=curr->next;
                curr->next=new ListNode(list2->val);
                curr=curr->next;
                list2=list2->next;
                list1=list1->next;
            }
        }
        while(list1){
            curr->next=new ListNode(list1->val);
            curr=curr->next;
            list1=list1->next;
        }
        while(list2){
            curr->next=new ListNode(list2->val);
            curr=curr->next;
            list2=list2->next;
        }
        return temp->next;
    }
};