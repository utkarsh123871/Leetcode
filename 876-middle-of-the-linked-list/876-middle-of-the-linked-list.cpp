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
int length_of_LL(ListNode* head){
    ListNode* temp = head;
    int length = 0;
    while(temp!=NULL){
        length++;
        temp = temp->next;
    }
    return length;
}
    
    ListNode* middleNode(ListNode* head) {
        int length = length_of_LL(head);
        ListNode* temp = head;
        if(length%2!=0){
            // odd
            int mid = length/2;
            while(mid<length-1){
                temp = temp->next;
                mid++;
            }
        }
        
        else{
            // even
            int mid = length/2;
            while(mid<length){
                temp = temp->next;
                mid++;
            }
        }
        return temp;
    }
};