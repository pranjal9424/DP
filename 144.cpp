#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
Node *head2 = NULL; ///global
/////////  check LinkedList is palindrome.
void palindrome(){
    Node *slow=head;
    Node *fast=head;
    
    ///slpit LinkedList into two part
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next;
        if(fast->next!=NULL){
            slow=slow->next;
            fast=fast->next;
        }
    }
    head2=slow->next;
    slow->next=NULL;
    
    //// reverse second LinkedList
    Node* current=head2;
        Node *prev=NULL,*next=NULL;
        while(current != NULL){
            next = current -> next;
            current -> next = prev;
            prev=current;
            current=next;
        }
        head2=prev;
        
        
        
    ///check for palindrome
    while(head != NULL && head2 !=NULL){
        if(head2->data != head->data){
            cout<<"not palindrome";
            return;
        }
        head=head->next;
        head2=head2->next;
    }
        
     cout<<"palindrome";   
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
    
    five->data = 3; 
    five->next = six;
    
    six->data = 2; 
    six->next = seven;
    
    seven->data = 1; 
    seven->next = NULL;
    
    head=first;
    
    palindrome();
    
    return 0;
}
