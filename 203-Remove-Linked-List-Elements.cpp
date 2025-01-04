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
    ListNode* removeElements(ListNode* head, int val) {
        vector<int>v;
        ListNode* tmp=head;
        while(tmp!=NULL)
        {
            if(tmp->val!=val) v.push_back(tmp->val);
            tmp=tmp->next;
        }
        tmp=head;
        for(int i=0;i<v.size();i++)
        {
            tmp->val=v[i];
            if(i==v.size()-1){
                tmp->next=NULL;
            }
            else tmp=tmp->next;
        }
        if(v.size()==0) return NULL;
        return head;
    }
};