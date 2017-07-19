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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* l=new ListNode(0);
        ListNode* l3=l;
        int flag=0;
        while(l1!=NULL&&l2!=NULL){
            
            l3 ->next = new ListNode((l1->val+l2->val+flag)%10);
            flag=(l1->val+l2->val+flag)/10;
            l1=l1->next;
            l2=l2->next;
            l3=l3->next;
            
        }
        while(l1!=NULL){
            l3 ->next = new ListNode((l1->val+flag)%10);
            flag=(l1->val+flag)/10;
            l1=l1->next;
            l3=l3->next;
        }
        while(l2!=NULL){
            l3 ->next = new ListNode((l2->val+flag)%10);
            flag=(l2->val+flag)/10;
            l2=l2->next;
            l3=l3->next;   
        }
        if(flag==1){
            l3->next=new ListNode(1);
            l3=l3->next;
        }
        l3->next=NULL;
        
        return l->next;
    }
};
