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
    ListNode* sortList(ListNode* head) {
        ListNode*temp=head;
        multiset<int> ms;
        while(temp!=NULL){
            ms.insert(temp->val);
            temp=temp->next;
        }
        temp=head;
        auto it=ms.begin();
        while(temp!=NULL && it!=ms.end()){
            temp->val=*it;
            temp=temp->next;
            it++;
        }
        return head;
    }
};