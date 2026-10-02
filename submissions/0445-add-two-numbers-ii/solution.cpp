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

    
   #include <stack>

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        std::stack<int> s1, s2;
        
        // Push all digits of l1 onto stack 1
        while (l1 != nullptr) {
            s1.push(l1->val);
            l1 = l1->next;
        }
        // Push all digits of l2 onto stack 2
        while (l2 != nullptr) {
            s2.push(l2->val);
            l2 = l2->next;
        }
        
        ListNode* head = nullptr;
        int carry = 0;
        
        // Your core loop logic adapted for stacks
        while (!s1.empty() || !s2.empty() || carry) {
            int sum = carry;
            if (!s1.empty()) {
                sum += s1.top();
                s1.pop();
            }
            if (!s2.empty()) {
                sum += s2.top();
                s2.pop();
            }
            
            carry = sum / 10;
            
            // Insert the new node at the HEAD of the list instead of the tail
            ListNode* rem = new ListNode(sum % 10);
            rem->next = head;
            head = rem;
        }
        
        return head;
    }
};

