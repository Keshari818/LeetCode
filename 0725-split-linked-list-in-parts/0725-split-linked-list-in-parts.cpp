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
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        ListNode *cur = head;
        vector<ListNode*> answer(k) ;
        int ptr = 0, listLength = 0;
        
        while (cur != nullptr) {
            listLength++;
            cur = cur->next;
        }
        
        int extra = listLength % k;
        
        int partLength = listLength / k;
        cur = head;

        while (cur != nullptr) {
            answer[ptr++] = cur;
            int currentLength = partLength - 1 + ((extra-- > 0) ? 1 : 0);
            
            for (int i = 0; i < currentLength; i++)
                cur = cur->next;
            
            ListNode *temp = cur->next;
            cur->next = nullptr;
            cur = temp;
        }
        return answer;
    }
};