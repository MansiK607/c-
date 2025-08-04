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
ListNode*convertArr2LL(vector<int> &arr){
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        multiset<int> ms;
        for(int i=0;i<lists.size();i++){
            ListNode*temp=lists[i];
            while(temp!=NULL){
                ms.insert(temp->val);
                temp=temp->next;    
            }
        }
        vector<int> sortedArr(ms.begin(),ms.end());
        ListNode*mergedHead=convertArr2LL(sortedArr);
        return mergedHead;
    }
};