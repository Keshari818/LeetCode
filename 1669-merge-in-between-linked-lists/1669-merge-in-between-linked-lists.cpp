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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* start=list1;
        ListNode* end=list1;
        int cnt1=0,cnt2=0;
        while(start && cnt1<a-1){
            start=start->next;
            cnt1++;
        }
        while(end && cnt2<=b){
            end=end->next;
            cnt2++; 
        }
        
        start->next=list2;
        while(list2->next){
            list2=list2->next;
        }
        list2->next=end;
        return list1;
    }
};