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
ListNode*reverseLL(ListNode*head){
    ListNode*current=head;
    ListNode*prev=NULL;
    while(current!=NULL){
    ListNode*front=current->next;
    current->next=prev;
    prev=current;
    current=front;
    }
    return prev;
}
    bool isPalindrome(ListNode* head) {
        ListNode*slow=head;
        ListNode*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode*newHead=reverseLL(slow->next);
        ListNode*first=head;
        ListNode*second=newHead;
        while(second!=NULL){
        if(first->val!=second->val){
            reverseLL(newHead);
            return false;
        }
        first=first->next;
        second=second->next;
    }
        reverseLL(newHead);
        return true;
    }
};