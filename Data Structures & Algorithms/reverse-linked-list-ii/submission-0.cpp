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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;
        ListNode* beforeLeft=dummy;

        for(int i=1;i<left;i++){
            beforeLeft= beforeLeft->next;
        }
        ListNode* curr=beforeLeft->next;
        ListNode* next;
        ListNode* prev=NULL;
        ListNode* temp=curr;

        for(int i=0;i<=right-left;i++){
            next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=next;
        }
        beforeLeft->next=prev;
        temp->next=curr;

        return dummy->next;

    }
};