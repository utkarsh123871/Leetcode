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
    ListNode* reverseList(ListNode* head) {
        // base case
        if(head == NULL || head->next == NULL){
            return head;    
        }
        
        // recursive condition
        ListNode* small_ans = reverseList(head->next);
        
        // small calc
        ListNode* temp = small_ans;
        while(temp->next != NULL){
            temp = temp->next;
        }
        temp->next = head;
        head->next = NULL;
        
        return small_ans;
    }
};