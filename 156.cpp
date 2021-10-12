Node *copyList(Node *head)
    {
        Node* cur=head;
        Node* temp;
        
        while(cur){
            temp=cur->next;
            cur->next=new Node(cur->data);
            cur->next->next=temp;
            cur=temp;
        }
        cur=head;
        
        while(cur){
            cur->next->arb=cur->arb?cur->arb->next:cur->arb;
            cur=cur->next->next;
        }
        
        Node* original=head;
        Node* copy=head->next;
        temp=copy;
        while(original and copy){
            original->next=original->next->next;
            
            copy->next=copy->next?copy->next->next:copy->next;
            original=original->next;
            copy=copy->next;
        }
        return temp;
    }