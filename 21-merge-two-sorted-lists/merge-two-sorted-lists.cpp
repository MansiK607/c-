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
ListNode*convertArray2LL(vector<int> &arr){
    if (arr.empty()) return nullptr;

    ListNode*list=new ListNode(arr[0]);
    ListNode*mover=list;
    for(int i=1;i<arr.size();i++){
        ListNode*temp=new ListNode(arr[i]);
        mover->next=temp;
        mover=temp;
    }
    return list;
}
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        multiset<int> ms;
        while(temp1!=NULL){
             ms.insert(temp1->val);
             temp1=temp1->next;
        }
        while(temp2!=NULL){
            ms.insert(temp2->val);
            temp2=temp2->next;
        }
        vector<int> sortedArr(ms.begin(),ms.end());
        ListNode*mergedHead=convertArray2LL(sortedArr);
        return mergedHead;
    }
};