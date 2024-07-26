class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode *cur=head;
       while(head!=NULL && head->next!=NULL){
          if(head->val==head->next->val){
            ListNode *a=head->next;
            head->next=head->next->next;
          delete a;
          }
          else
          head=head->next;
       } 
       return cur;
    }
};
