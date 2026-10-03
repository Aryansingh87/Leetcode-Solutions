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
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(x) : val(x), next(nullptr) {}
 *     ListNode(x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
private:
    bool isCritical(ListNode* prev, ListNode* cur, ListNode* nxt) {
        return (prev->val > cur->val && cur->val < nxt->val) || 
               (prev->val < cur->val && cur->val > nxt->val);
    }

public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next) {
            return {-1, -1};
        }

        ListNode* prev = head;
        ListNode* cur = head->next;
        ListNode* nxt = cur->next;

        int minDist = INT_MAX;
        int maxDist = -1;
        
        int prevCritIdx = 0;
        int firstCritIdx = 0;
        int i = 1; 

        while (nxt != nullptr) {
            if (isCritical(prev, cur, nxt)) {
                if (firstCritIdx != 0) {
                    maxDist = i - firstCritIdx;
                    minDist = min(minDist, i - prevCritIdx);
                } else {
                    firstCritIdx = i;
                }
                prevCritIdx = i;
            }
            
            prev = cur;
            cur = nxt;
            nxt = nxt->next;
            i++;
        }

        
        if (minDist == INT_MAX) {
            return {-1, -1};
        }

        return {minDist, maxDist};
    }
};

