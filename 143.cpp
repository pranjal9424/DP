#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
Node *head2 = NULL; ///global
/////////  split circular LinkedList Into Two Halves.
void splitIntoTwoHalves(){
    Node *slow=head;
    Node *fast=head;
    
    while(fast->next!=head && fast->next!=head){
        fast=fast->next;
        if(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }
    head2=slow->next;
    slow->next=NULL;
    fast->next=NULL;
    return;
}

void printList(Node* node){
    
    while(node != NULL){
        cout<<node->data<<" ";
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
    splitIntoTwoHalves();
    
    ///first LinkedList
    printList(head);
    
    cout<<endl;
    
    ///Second LinkedList
    printList(head2);
  
    return 0;
}
