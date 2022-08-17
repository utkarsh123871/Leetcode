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
// class Pair{
// public:
//     ListNode* head;
//     ListNode* tail;
// };

// Pair reverse_LL_optimised(ListNode* head){
//     if(head == NULL || head->next == NULL){
//         Pair ans;
//         ans.head = head;
//         ans.tail = head;
//         return ans;
//     }
// Pair smallans = reverse_LL_optimised(head->next);
//     smallans.tail->next = head;
//     head->next = NULL;
    
// Pair ans;
//     ans.head = smallans.head;
//     ans.tail = head;
    
//     return ans;
// }

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//     return reverse_LL_optimised(head).head;
//     }
// };
        // this code has complexity O(n2)
        // base case
//         if(head == NULL || head->next == NULL){
//             return head;    
//         }
        
//         // recursive condition
//         ListNode* small_ans = reverseList(head->next);
        
//         // small calc
//         ListNode* temp = small_ans;
//         while(temp->next != NULL){
//             temp = temp->next;
//         }
//         temp->next = head;
//         head->next = NULL;
        
//         return small_ans;

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        } 
    
        ListNode* smallans = reverseList(head->next);
        ListNode* tail = head->next;
        tail->next = head;
        head->next = NULL;
        return smallans;
    }
};