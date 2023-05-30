/*
 *Definition for singly-linked list.
 *struct ListNode {
 *   int val;
 *   ListNode * next;
 *   ListNode() : val(0), next(nullptr) {}
 *   ListNode(int x) : val(x), next(nullptr) {}
 *   ListNode(int x, ListNode *next) : val(x), next(next) {}
 *};
 */
class Solution
{
    public:
        ListNode* swapNodes(ListNode *head, int k)
        {
           	//         int temp=head;
           	//         int *curr =temp;
           	//         while(curr!=NULL){
           	//             curr=curr->next;
           	//         }
           	//         for(int i=0;i < k;i++){

           	//         }
            ListNode *curr = head;
            int count = 0;
            while (curr != NULL)
            {
                curr = curr->next;
                count++;
            }

            ListNode *x = head;
            ListNode *y = head;
            for (int i = 0; i < k - 1; i++)
            {
                x = x->next;
            }
            for (int i = 0; i < count - k; i++)
            {
                y = y->next;
            }
            int temp = x->val;
            x->val = y->val;
            y->val = temp;
            return head;
        }
};