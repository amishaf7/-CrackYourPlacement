  Node *compute(Node *head)
    {
        // your code goes here
        
         Node *dummy = new Node(0);
        dummy->next = head;
        Node *prev = dummy;
        Node *cur = head;

        while (cur != nullptr && cur->next != nullptr) {
            if (cur->data < cur->next->data) {
                // Delete current node and adjust pointers
                Node *temp = cur;
                prev->next = cur->next;
                cur = cur->next;
                delete temp;
            } else {
                prev = cur;
                cur = cur->next;
            }
        }

        Node *newHead = dummy->next;
        delete dummy;
        return newHead;
    }
