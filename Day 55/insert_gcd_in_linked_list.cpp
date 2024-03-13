class Solution {
public:

int GCD(int a, int b) {
  while (b) {
    int temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

ListNode* insertGreatestCommonDivisors(ListNode* head) {
    if (!head || !head->next) {
       return head;
    } else {
       ListNode *current = head;
       ListNode *previous;

    while (current->next) {
      previous = current;
      current = current->next;
      int gcdValue = GCD(previous->val, current->val);
      ListNode *newNode = new ListNode(gcdValue);
      previous->next = newNode;
      newNode->next = current;
    }
    return head;
    }

  }
};
