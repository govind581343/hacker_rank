struct ListNode* rotateRight(struct ListNode* head, int k) {
    if (!head || !head->next || k == 0) {
        return head;
    }
    struct ListNode *current = head;
    int length = 1;
    while (current->next) {
        current = current->next;
        length++;
    }
    current->next = head;
    k = k % length;
    struct ListNode *newTail = head;
    for (int i = 0; i < length - k - 1; i++) {
        newTail = newTail->next;
    }
    struct ListNode *newHead = newTail->next;
    newTail->next = NULL;
    
    return newHead;
}
void printList(struct ListNode* node) {
    while (node != NULL) {
        printf("%d ", node->val);
        node = node->next;
    }
    printf("\n");
}
