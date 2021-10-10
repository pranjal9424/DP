#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
};
 
////////////////////////// Triplet Sum in a Doubly Linked List 
void TripletSum(Node *head,int n)
{
    
    Node *l = head;
    Node *cur = head;
    
    while(l->next!=NULL)
        l=l->next;
        
        int found=0;
    
    while(cur!=NULL){
        
    Node *f = cur->next; 
    Node *s = l; 
    int x=n - cur->data;
    
    while(s!=f && s->next!=f){
        if((f->data + s->data)==x){
            found=1;
            cout<<cur->data<<","<<f->data<<","<<s->data<<endl;
            f=f->next;
            s=s->prev;
        }
        else{
            if((f->data+s->data)>x){
                s=s->prev;
            }else{
                f=f->next;
            }
        }
    }
    cur=cur->next;
    }
    
    if(found==0)    
        cout<<"Not Found";
     
    return;
}
 

void push(Node** head_ref, int new_data)
{
    Node* new_node = new Node();
 
    new_node->data = new_data;
    
    new_node->prev = NULL;
 
    new_node->next = (*head_ref);    
 

    if((*head_ref) != NULL)
    (*head_ref)->prev = new_node ;
 
    (*head_ref) = new_node;
}

void printList(Node *node)
{
    while(node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}
 
int main()
{
    Node* head = NULL;
     

    
    push(&head, 9);
    push(&head, 8);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 2);
    push(&head, 1);
     
    cout << "Triplet Sum in DLL" << endl;
    
    TripletSum(head,17);
     
           
     
    return 0;
}
