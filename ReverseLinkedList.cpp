class Solution {
    public:
    ListNode* reveseList(ListNode head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr -> next
        }
        return prev;
    }
}