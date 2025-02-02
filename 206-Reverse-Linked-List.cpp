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
    ListNode* reverseList(ListNode* head) {
        ListNode* tmp=head;
        ListNode* prev=NULL;
        ListNode* nextNode=NULL;
        while(tmp!=NULL){
            nextNode=tmp->next;
            tmp->next=prev;
            prev=tmp;
            tmp=nextNode;
        }
        return prev;
    }
};