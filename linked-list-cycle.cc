/*

http://oj.leetcode.com/problems/linked-list-cycle/

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
    bool hasCycle(ListNode *head) {
        
        if(head == NULL || head->next==NULL)
            return false;
        
        ListNode *pOne=head;
        ListNode *pTwo=head;
        
         do{  
            if(pTwo!=NULL)  
                pTwo=pTwo->next;  
            if(pTwo!=NULL)  
                pTwo=pTwo->next;  
            if(pTwo==NULL)  
                return false; 
                
            pOne = pOne->next; 
            
        }while(pTwo != pOne);  
        return true;
        
    }
};