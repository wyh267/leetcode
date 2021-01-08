/*
//Edit
http://oj.leetcode.com/problems/add-two-numbers/

*/

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
    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
        
        ListNode *p1=l1;
        ListNode *p2=l2;
        ListNode *head=new ListNode(0);
        ListNode *p=head;
        int flag=0;
        while(p1){
            
            ListNode *node=new ListNode(0);
            if(p2){
                node->val=(p1->val+p2->val+flag)%10;
                flag=(p1->val+p2->val+flag)/10;
                p2=p2->next;
            }
            else{
                node->val=(p1->val+flag)%10;
                flag=(p1->val+flag)/10;
            }
                
            p->next=node;
            p=p->next;
            p1=p1->next;
        }
        
        while(p2){
            ListNode *node=new ListNode((p2->val+flag)%10);
            flag=(p2->val+flag)/10;
            p->next=node;
            p=p->next;
            p2=p2->next;
        }
        
        if(flag>0){
            ListNode *node=new ListNode(flag);
            p->next=node;
        }
        
        return head->next;
        
        
    }
};
