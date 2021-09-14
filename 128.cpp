#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};

Node* reverse(Node* head,int k)
{
    if(!head)
        return NULL;
        
    Node* current=head;
    Node* next=NULL;
    Node* prev=NULL;
    
    int count=0;
    
    while(current != NULL && count<k){
        next=current->next;
        current->next =prev;
        prev=current;
        current=next;
        count++;
    }
    if(next != NULL)
        head-> next=reverse(next,k);
        
    return prev;
}

void push(Node** head_ref,int new_data){
    Node* new_node=new Node();
    
    new_node-> data = new_data;
    new_node-> next=(*head_ref);
    (*head_ref)=new_node;
}

void printList(Node* node){
    
    while(node != NULL){
        cout<<node->data<<" ";
        node = node-> next;
    }
}
int main()
{
    Node* head=NULL;
    
    push(&head,9);
    push(&head,8);
    push(&head,7);
    push(&head,6);
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,2);
    cout<<"list before- ";
    printList(head);
    cout<<endl;
    cout<<"list after-  ";
    head=reverse(head,3);
    printList(head);

    return 0;
}
s