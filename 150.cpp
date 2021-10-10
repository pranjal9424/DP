#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
};
 
////////////////////////// Rotate DoublyLinked list by N nodes.
Node* RotateNthnodes(Node *head,int n)
{
    
    Node* cur=head;
    
    int c=1;
    
    while(c<n){
        cur=cur->next;
        c++;
    }
    Node* nth=cur;
    
    while(cur->next != NULL){
        cur=cur->next;
    }
    
    cur->next=head;
    head->prev=cur;
    head=nth->next;
    head->prev=NULL;
    nth->next=NULL;
     
    return head;
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
    push(&head, 7);
    push(&head, 6);
    push(&head, 5);
    push(&head, 4);
    push(&head, 3);
    push(&head, 2);
    push(&head, 1);
     
    cout << "Triplet Sum in DLL" << endl;
    
    ;
     
     
    printList(RotateNthnodes(head,5));
           
     
    return 0;
}
