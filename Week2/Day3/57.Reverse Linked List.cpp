class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // vector<int> data;
        // ListNode* cur=head;
        // while(cur!=nullptr){
        //     data.push_back(cur->val);
        //     cur=cur->next;
        // }
        //  ListNode* cur1=head;
        // while(cur1!=nullptr){
        //     cur1->val=data.back();
        //     data.pop_back();
        //     cur1=cur1->next;
        // }
        // return head;
        ListNode* prev=NULL;
        ListNode* cur=head;
        while(cur!=nullptr){
            ListNode* temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
            
        }
        return prev;
    }
};
