/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,int>m;
        ListNode* tmp=headA;
        while(tmp!=NULL)
        {
            m[tmp]++;
            tmp=tmp->next;
        }
        tmp=headB;
        while(tmp!=NULL)
        {
            if(m[tmp]!=0) return tmp;
            tmp=tmp->next;
        }
        return NULL;
    }
};