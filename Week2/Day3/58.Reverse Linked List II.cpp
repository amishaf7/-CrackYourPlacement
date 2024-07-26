class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      if(head==NULL || head->next==NULL)
      return head;
      ListNode* dummy=new ListNode(-1);
      dummy->next=head;
      ListNode* it=dummy;
      ListNode* previt=NULL;
      for(int i=0;i<left;i++){
          previt=it;
          it=it->next;
      }
      ListNode* itr=it;
      ListNode* previrr=previt;
      for(int i=left;i<=right;i++){
          ListNode* temp=itr->next;
          itr->next=previrr;
          previrr=itr;
          itr=temp;
      }
      previt->next=previrr;
      it->next=itr;

      return dummy->next;
    }
};

