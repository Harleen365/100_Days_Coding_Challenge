class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        // Base case
        if (head == NULL) {
            return NULL;
        }
        //check if there are atleast k node remaining
        ListNode*check=head;
        for(int i=0;i<k;i++){
            if(check==NULL){
               return head;
            }
            check=check->next;
        }

        // Reverse the first k elements
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* forw = NULL;
        int count = 0;

        while (curr != NULL && count < k) {
            forw = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forw;
            count++;
        }

        // Recursive call for the next group
        if (forw != NULL) {
            head->next = reverseKGroup(forw, k);
        }

        // Return the new head of the reversed sublist
        return prev;
    }
};
