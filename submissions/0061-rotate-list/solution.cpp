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
 ListNode* reverseK(ListNode* head , int k) {
    ListNode* prev = NULL;
    ListNode* curr = head;

    while(k--) {
        ListNode* next = curr->next;

        curr->next = prev;

        prev = curr;
        curr = next;
    }
   head->next = curr;
    return prev;
}
    ListNode* rotateRight(ListNode* head, int k) {
         if(head == NULL || head->next == NULL || k == 0) {
            return head;
        }


        int n = 0;
        ListNode* temp = head;

        while(temp != NULL) {
            n++;
            temp = temp->next;
        }

        k = k % n;

        if(k == 0) {
            return head;
        }

      
        head = reverseK(head, n);

     
        head = reverseK(head, k);

      
        ListNode* second = head;

        for(int i = 1; i < k; i++) {
            second = second->next;
        }

        ListNode* remaining = second->next;

        second->next = NULL;

        remaining = reverseK(remaining, n-k);

        second->next = remaining;

        return head;
    }
};
