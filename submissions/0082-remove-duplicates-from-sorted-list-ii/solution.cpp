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
    ListNode* deleteDuplicates(ListNode* head) {
        // Create a dummy node to seamlessly handle changes to the head pointer
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;
        ListNode* curr = head;
        
        while (curr != nullptr) {
            // Check if curr is the start of a duplicate sequence
            while (curr->next != nullptr && curr->val == curr->next->val) {
                curr = curr->next;
            }
            
            // If prev->next is still curr, no duplicates were skipped
            if (prev->next == curr) {
                prev = prev->next;
            } else {
                // Duplicates were found, cut them all out by linking to the node after curr
                prev->next = curr->next;
            }
            
            // Move curr to the next potential distinct node
            curr = curr->next;
        }
        
        return dummy.next;
    }
};

