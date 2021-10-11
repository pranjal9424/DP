#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
};
Node* head=NULL;/// global head
///////sort 0 1 2 in given LinkedList
void sort012()
{
    int count[3]={0,0,0};
    
    Node* ptr=head;
    while(ptr != NULL){
        count[ptr->data]+=1;
        ptr=ptr->next;
    }
    
    ptr=head;
    int i=0;
    
    while(ptr != NULL){
        if(count[i]==0){
            i++;
        }
        
        ptr->data=i;
        --count[i];
        ptr=ptr->next;
    }
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
    
    
    push(&head,0);
    push(&head,1);
    push(&head,2);
    push(&head,1);
    push(&head,1);
    push(&head,0);
    push(&head,0);
    push(&head,2);
    cout<<"list before- ";
    printList(head);
    cout<<endl;
    cout<<"list after-  ";
    sort012();
    printList(head);

    return 0;
}