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
    
    ListNode*prev=NULL;
    while(head!=NULL){
        ListNode*front=head->next;
        head->next=prev;
        prev=head;
        head=front;
    }
    return prev;
}
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;
        ListNode*newHead=reverseLL(head);
        ListNode*temp=newHead;
        ListNode*prev=NULL;
       
        if(n==1){
            ListNode*temp=newHead;
            newHead=newHead->next;
             delete temp;
            return reverseLL(newHead);
        }
         int cnt = 1;
        while (temp != NULL) {
            if (cnt == n) {
                if (prev != NULL) {
                    prev->next = temp->next;
                    delete temp;
                }
                break;
            }
            prev = temp;
            temp = temp->next;
            cnt++;
        }

        return reverseLL(newHead);
    }
};