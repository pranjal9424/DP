#include <iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node *head = NULL; ///global
/////////delete Node in linkList
void deleteNode(Node *ptr){
    
    Node *temp;
    temp=ptr->next;
    ptr->data=temp->data;
    ptr->next=temp->next;
    free(temp);
}
void printList(Node* n)
{
    while (n != NULL) {
        cout << n->data << " ";
        n = n->next;
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
 
    third->data = 3; 
    third->next = fourt;
    
    fourt->data = 4; 
    fourt->next = five;
    
    five->data = 5; 
    five->next = NULL;;
    head=first;
    
    deleteNode(third);
    printList(head);
    return 0;
}
