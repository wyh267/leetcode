/*

http://oj.leetcode.com/problems/swap-nodes-in-pairs/

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
    ListNode *swapPairs(ListNode *head) {
        
        ListNode *p1=head;
        if(p1==NULL)
            return NULL;
            
        ListNode *p2=head->next;
        
        if(p2==NULL)
            return head;
            
        ListNode *res=p2;
        ListNode *last=p1;
        while(p2){
            ListNode *pt1=p2->next;
            p1->next=p2->next;
            p2->next=p1;
            if(pt1==NULL)
                break;
            p2=pt1->next;
            p1=pt1;
            if(p2)
                last->next=p2;
            else
                last->next=p1;
            last=p1;
        }
        
        return res;
        
        
    }
};