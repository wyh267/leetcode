/*

http://oj.leetcode.com/problems/remove-nth-node-from-end-of-list/

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
    ListNode *removeNthFromEnd(ListNode *head, int n) {
        ListNode *p=head;
        int length=0;
        int pos=0;
        while(p){
            length++;
            p=p->next;
        }
        if(length==1)
            return NULL;
            
        if (length == n){
            head=head->next;
            return head;
        }
        pos=length-n;
        p=head;
        while(pos>1){
            p=p->next;
            pos--;
        }
        
        if(p->next){
            p->next=p->next->next;
        }else{
            p=NULL;
        }
        
        return head;
        
        
    }
};