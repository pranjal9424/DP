#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
/////////delete dublicate element from Loop in linkList
void detectDub(){
    Node *slow;
    slow=head;
    
    while(slow->next !=NULL){
        if(slow->data==slow->next->data){
            Node *temp;
            temp=slow->next;
            slow->next=temp->next;
            free(temp);
            continue;
        }
        slow=slow->next;
    }
}

void printList(Node* node){
    
    while(node != NULL){
        cout<<node->data<<" ";
        node = node-> next;
    }
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
 
    third->data = 2; 
    third->next = fourt;
    
    fourt->data = 2; 
    fourt->next = five;
    
    five->data = 5; 
    five->next = NULL;
    head=first;
    
    detectLoop();
    printList(head);
    
  
    return 0;
}
