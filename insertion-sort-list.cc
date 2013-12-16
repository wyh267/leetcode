/*

http://oj.leetcode.com/problems/insertion-sort-list/

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
    ListNode *insertionSortList(ListNode *head) {
        if(head == NULL || head->next == NULL)
            return head;
            
         ListNode *p = head->next;
         ListNode *pstart = new ListNode(0);
         ListNode *pend = head;
         pstart->next = head; 
         while(p != NULL)
         {
             ListNode *tmp = pstart->next;
             ListNode *pre = pstart;
             while(tmp != p && p->val >= tmp->val)
                 {tmp = tmp->next; pre = pre->next;}
             if(tmp == p)pend = p;
             else
             {
                 pend->next = p->next;
                 p->next = tmp;
                 pre->next = p;
             }
             p = pend->next;
         }
         head = pstart->next;
         delete pstart;
         return head;
    }
    
};