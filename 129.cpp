#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
/////////detect Loop in linkList
void detectLoop(){
    Node *slow,*fast;
    slow=head;
    fast=head;
    
    while(fast!=NULL && fast->next != NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(slow==fast){
            cout<<"detected Loop";
            return;
        }
    }
    cout<<"No Loop";
}



int main()
{
    Node* first=NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* fourt = NULL;
    Node* five = NULL;
 
    first = new Node();
    second = new Node();
    third = new Node();
    fourt = new Node();
    five = new Node();
 
    first->data = 1; 
    first->next = second;
 
    second->data = 2; 
    second->next = third;
 
    third->data = 3; 
    third->next = fourt;
    
    fourt->data = 4; 
    fourt->next = five;
    
    five->data = 3; 
    five->next = third;;
    head=first;
    
    detectLoop();
  
    return 0;
}
