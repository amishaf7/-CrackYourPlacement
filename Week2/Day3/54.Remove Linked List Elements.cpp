class Solution {
public:
    
    ListNode* removeElements(ListNode* head, int val) {
    ListNode* dummy = new ListNode(0); // Create a dummy node
    dummy->next = head;
    ListNode* cur = dummy;

    while (cur->next != nullptr) { // Iterate using cur pointer
        if (cur->next->val == val) { // If the next node's value is the target value
            ListNode* temp = cur->next; // Store the node to be deleted
            cur->next = cur->next->next; // Skip the node to be deleted
            delete temp; // Delete the node
        } else {
            cur = cur->next; // Move to the next node
        }
    }

    ListNode* newHead = dummy->next; // Get the new head of the list
    delete dummy; // Delete the dummy node
    return newHead; // Return the new head
    }

};
