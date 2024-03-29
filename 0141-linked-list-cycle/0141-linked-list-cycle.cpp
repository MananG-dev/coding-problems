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
        if(head==NULL)  {return false;}
        ListNode* first = head;
        ListNode* sec = head;

        while(sec!=NULL && sec->next!=NULL && first!=NULL)  {
            sec = sec->next->next;
            first = first->next;
            if(sec==first)  {return true;}
            
        }
        return false;
    }
};