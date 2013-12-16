/*

http://oj.leetcode.com/problems/linked-list-cycle-ii/

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
    ListNode *detectCycle(ListNode *head) {
        if(head == NULL || head->next==NULL)
            return NULL;
        
        ListNode *pOne=head;
        ListNode *pTwo=head;
        
         do{  
            if(pTwo!=NULL)  
                pTwo=pTwo->next;  
            if(pTwo!=NULL)  
                pTwo=pTwo->next;  
            if(pTwo==NULL)  
                return NULL; 
                
            pOne = pOne->next; 
            
        }while(pTwo != pOne);  
        
        ListNode *pTarget=head;
        while(1){
                
            if(pOne==pTarget)
                return pTarget;
            pOne=pOne->next;
            if(pOne==pTwo)
                pTarget=pTarget->next;
        }
    
    
    }
};