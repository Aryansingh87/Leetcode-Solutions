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
    ListNode* merging(ListNode* list1 , ListNode* list2){
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        while(list1!= NULL && list2!= NULL)
{
    if(list1->val < list2->val){
        temp->next = list1;
        temp = temp->next;
        list1 = list1->next;
    }
    else{
        temp->next = list2;
        temp = temp->next;
        list2 = list2->next;
    }
}
      if(list1 == NULL){
        temp->next = list2;
        return dummy->next;
      }
      temp->next = list1;
      return dummy->next;
        
    }
     ListNode* mergeLists(vector<ListNode*>& lists  , int st , int end){
        if(st == end){
            return lists[st];
        }
        int mid = st + (end - st)/2;
        ListNode* list1 = mergeLists(lists , st , mid);
        ListNode* list2 = mergeLists(lists , mid+1  , end);
        return merging(list1 , list2);
     }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.size()==0){
            return NULL;
        }
        return mergeLists(lists, 0 ,lists.size()-1);
        
    }
};
