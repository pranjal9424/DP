#include <iostream>
using namespace std;
struct Node{
    int d;
    Node* n;
};
Node *h = NULL; ///global
Node *h2 = NULL; ///global
/////////intersection in Linkedlist

Node *IntersectData(Node *h,Node *h2) {
    Node *ptr1=h;
    Node *ptr2=h2;
    Node *head=NULL;
    Node *cur=NULL;
    
    while(ptr1 && ptr2){
        if(ptr1->d == ptr2->d){
            if(head==NULL){
                Node* t=new Node();
                t->d=ptr1->d;
                t->n=NULL;
                cur=t;
                head=t;
            }else{
                Node* t=new Node();
                t->d=ptr1->d;
                t->n=NULL;
                cur->n=t;
                cur=cur->n;
            }
            ptr1=ptr1->n;
            ptr2=ptr2->n;
        }else{
            if(ptr1->d < ptr2->d)
                ptr1=ptr1->n;
            else
                ptr2=ptr2->n;
        }
    }
    return head;
}


void printList(Node* node){
    
    while(node != NULL){
        cout<<node->d<<" ";
        node = node-> n;
    }
}

int main()
{
    Node* first=new Node();
    Node* second = new Node();
    Node* third = new Node();
    Node* fr1 = new Node();
    Node* fv1 = new Node();
    
    Node* f2 = new Node();
    Node* s2 = new Node();
    Node* t2 = new Node();
 
    
 
    first->d = 1; 
    first->n = second;
 
    second->d = 2; 
    second->n = third;
 
    third->d = 3; 
    third->n = fr1;
    
    fr1->d = 4; 
    fr1->n = fv1;
    
    fv1->d = 6; 
    fv1->n = NULL;
    
    h=first;
    
    f2->d = 2; 
    f2->n = s2;
 
    s2->d = 4; 
    s2->n = t2;
 
    t2->d = 6; 
    t2->n = NULL;
    
    h2=f2;
    //; 
    printList(IntersectData(h,h2));
    
  
    return 0;
}