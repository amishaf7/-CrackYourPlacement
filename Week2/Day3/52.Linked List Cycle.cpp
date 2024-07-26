class Solution {
public:
    bool hasCycle(ListNode *head) {
    //     if(head==nullptr ||head->next==nullptr)
    //     return false;
    //  ListNode *slow=head;
    //  ListNode *fast=head->next;
    //  while(slow!=fast){
    //     if(fast->next==nullptr || fast->next->next==nullptr)
    //      return false;
    //      slow=slow->next;
    //      fast=fast->next->next;
    //  }   
     
    //  return true;
    if (head == nullptr || head->next == nullptr) {
            return false;
        }
        
        ListNode *slow = head;
        ListNode *fast = head;

        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                return true;
            }
        }
        
        return false;
    }
};
