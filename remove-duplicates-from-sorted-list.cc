/*

http://oj.leetcode.com/problems/remove-duplicates-from-sorted-list/

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
    ListNode *deleteDuplicates(ListNode *head) {
        
        ListNode *p=head;
        ListNode *pCurr=head;
        if(p==NULL)
            return NULL;
        
        if(p->next == NULL)
            return p;
        
        //int val=p->val;
        p=p->next;
        while(p){
            
            if(p->val==pCurr->val){
                pCurr->next=p->next;
                p=p->next;
            }else{
                pCurr=p;
                p=p->next;
            }
            
            
        }
        
        return head;
        
    }
};