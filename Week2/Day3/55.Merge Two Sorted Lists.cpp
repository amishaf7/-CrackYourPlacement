class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        while(list1!=nullptr && list2!=nullptr){
            if(list1->val>list2->val){
                ListNode* a=new ListNode(list2->val);
                list2=list2->next;
                a=a->next;
            }
            else if(list1->val<list2->val){
                ListNode* a=new ListNode(list1->val);
                list1=list1->next;
                a=a->next;
            }
            else{
               ListNode* a=new ListNode(list1->val); 
               a=a->next;
               ListNode* a=new ListNode(list2->val); 
               a=a->next;
               list1=list1->next;
               list2=list2->next;
            }
        }
        while(list1!=nullptr){
           ListNode* a=new ListNode(list1->val); 
               a=a->next; 
                list1=list1->next;
        }
        while()
    }
};
