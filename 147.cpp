#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
};
 
////////////////////////// Pair Sume in a Doubly Linked List 
void PairSum(Node *head,int x)
{
    Node *f = head;
    Node *s = head;
    
    
    while(s->next!=NULL)
        s=s->next;
        
        int found=0;
        
    while(s!=f && s->next!=f){
        if((f->data + s->data)==x){
            found=1;
            cout<<f->data<<","<<s->data<<endl;
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
    
    if(found==0)    
        cout<<"Not Found";
     
    return;
}
 
 
 
/* UTILITY FUNCTIONS */
/* Function to insert a node at the
beginning of the Doubly Linked List */
void push(Node** head_ref, int new_data)
{
    /* allocate node */
    Node* new_node = new Node();
 
    /* put in the data */
    new_node->data = new_data;
     
    /* since we are adding at the beginning,
    prev is always NULL */
    new_node->prev = NULL;
 
    /* link the old list off the new node */
    new_node->next = (*head_ref);    
 
    /* change prev of head node to new node */
    if((*head_ref) != NULL)
    (*head_ref)->prev = new_node ;
 
    /* move the head to point to the new node */
    (*head_ref) = new_node;
}
 
/* Function to print nodes in a given doubly linked list
This function is same as printList() of singly linked list */
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
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
     
    cout << "Pair Sum in DLL" << endl;
    
    PairSum(head,7);
     
           
     
    return 0;
}
