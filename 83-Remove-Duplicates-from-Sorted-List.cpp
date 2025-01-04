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
        ListNode* prevNode=NULL;
        int prevVal=-101;
        ListNode* tmp=head;
        while(tmp!=NULL)
        {
            if(prevNode==NULL)
            {
                prevNode=tmp;
                prevVal=tmp->val;
                tmp=tmp->next;
            }
            else{
                if(tmp->val!=prevVal){
                    prevNode->next=tmp;
                    prevVal=tmp->val;
                    prevNode=tmp;
                }
                tmp=tmp->next;
            }
        }
        if(prevNode!=NULL){
            prevNode->next=NULL;
        }
        return head;
    }
};