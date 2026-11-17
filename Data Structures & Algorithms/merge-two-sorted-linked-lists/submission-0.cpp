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
        ListNode* dummy = new ListNode(0);
        ListNode* h = dummy;
        ListNode* curr = list1;
        ListNode* curr1 = list2;
        while(curr!=NULL && curr1!=NULL){
            if(curr->val<curr1->val){
                h->next = curr;
                curr=curr->next;
                h=h->next;
                h->next=NULL;
            }
            else if(curr->val>curr1->val){
                h->next = curr1;
                curr1=curr1->next;
                h=h->next;
                h->next=NULL;
            }else{
                h->next=curr;
                h=h->next;
                curr=curr->next;
                h->next=curr1;
                h=h->next;
                curr1=curr1->next;
                h->next=NULL;
            }
        }
        while(curr!=NULL){
            h->next=curr;
            curr=curr->next;
            h=h->next;
            h->next=NULL;
            
        }
        while(curr1!=NULL){
            h->next=curr1;
            curr1=curr1->next;
            h=h->next;
            h->next=NULL;
        }
        return dummy->next;
    }
};
