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
        ListNode* head=NULL;
        ListNode* tail=NULL;
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val){
                if(head==NULL){
                    head=list1;
                    tail=list1;
                    list1=list1->next;
                }
                else{
                    tail->next=list1;
                    tail=tail->next;
                    list1=list1->next;
                }
            }
            else{
                if(head==NULL){
                    head=list2;
                    tail=head;
                    list2=list2->next;
                }
                else{
                    tail->next=list2;
                    tail=tail->next;
                    list2=list2->next;
                }
            }
        }
        while(list1!=NULL)
        {
            if(head==NULL){
                    head=list1;
                    tail=head;
                    list1=list1->next;
            }
            else{
                tail->next=list1;
                tail=tail->next;
                list1=list1->next;
            }
        }
        while(list2!=NULL)
        {
            if(head==NULL){
                    head=list2;
                    tail=head;
                    list2=list2->next;
            }
            else{
                tail->next=list2;
                tail=tail->next;
                list2=list2->next;
            }
        }
        if(tail!=NULL)
        {
            tail->next=NULL;
        }
        return head;
    }
};