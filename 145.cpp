#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
Node *head2 = NULL; ///global
/////////  delete Node from Circular LinkedList
void deleteNodefromCircularLinkedList(int del){
    Node *cur=head;
    Node *prev=head;
    
    if(cur->data==del){
        
        Node* temp=cur->next;
        while(cur->next!=head){
            cur=cur->next;
        }
        head=temp;
        temp=cur->next;
        cur->next=head;
        
        free(temp);
        return;
    }
    while(1){
        if(cur->data==del){
            prev->next=cur->next;
            free(cur);
            return;
        }
        prev=cur;
        cur=cur->next;
    }
}

void printList(Node* node){
    
    while(1){
        cout<<node->data<<" ";
        if(node->next == head) return;
        node = node->next;
    }
}

int main()
{
 
   Node* first = new Node();
   Node*  second = new Node();
   Node*  third = new Node();
   Node* fourt = new Node();
   Node*  five = new Node();
   Node*  six = new Node();
   Node*  seven = new Node();
   Node*  eight = new Node();
   
 
    first->data = 1; 
    first->next = second;
 
    second->data = 2; 
    second->next = third;
 
    third->data = 3; 
    third->next = fourt;
    
    fourt->data = 4; 
    fourt->next = five;
    
    five->data = 5; 
    five->next = six;
    
    six->data = 6; 
    six->next = seven;
    
    seven->data = 7; 
    seven->next = first;
    
    head=first;
    deleteNodefromCircularLinkedList(1);
    
    printList(head);
  
    return 0;
}
