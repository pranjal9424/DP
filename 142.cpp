#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
/////////LinkedList  Circular Or Not.
void CircularOrNot(){
    Node *temp=head;
    head=head->next;
    while(head!=NULL){
        if(head==temp){
            cout<<"Circular";
            return;
        }
        head=head->next;
    }
    cout<<"Not Circular";
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
    seven->next = first;
    
    head=first;
    CircularOrNot();
    
    ///for non Circular
    cout<<endl;
    seven->next = NULL;
    CircularOrNot();

    
  
    return 0;
}
