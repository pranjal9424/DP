#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
/////////Middle element in LinkedList 
void MiddleLinkedList(){
    Node *slow=head;
    Node *fast=head;
    
    while(fast->next != NULL && fast != NULL){
        slow=slow->next;
        fast=fast->next->next;
    }
    
    cout<<slow->data;
    return;
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
    seven->next = NULL;
    
    head=first;
    MiddleLinkedList();
    
  
    return 0;
}
