Node* reverse(Node* root){
        Node* prev=NULL;
        Node* cur=root;
        
        while(cur){
            Node *next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        return prev;
    }
    Node *compute(Node *head)
    {
        // your code goes here
        head=reverse(head);
        Node* cur=head;
        Node* prev=head;
        int mx=head->data;
        head=head->next;
        while(head){
            if(head->data>=mx){
                mx=head->data;
                prev=head;
                head=head->next;
            }
            else
            {
                prev->next = head->next;
                head=prev->next;
            }
        }
        head=reverse(cur);
        return head;
        
    }