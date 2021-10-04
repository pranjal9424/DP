#include <iostream>
using namespace std;
struct Node{
    int d;
    Node* n;
};
Node *h = NULL; ///global
Node *h2 = NULL; ///global
/////////mergesort in Linkedlist logic (slow and fast)

Node* MergeBoth(Node* first,Node* second){
    Node* answer=NULL;
    
    if(!first)
        return second;
    if(!second)
        return first;
        
    if(first->d <= second->d){
        answer=first;
        answer->n=MergeBoth(first->n,second);
    }
    else{
        answer=second;
        answer->n=MergeBoth(first,second->n);
    }
    return answer;
}
void findMiddle(Node* cur,Node** first,Node** second){
    Node* fast;
    Node* slow;
    
    slow=cur;
    fast=cur->n;
    
    while(fast!=NULL){
        fast=fast->n;
        if(fast!=NULL){
          fast=fast->n;
          slow=slow->n;
        }
    }
    
    *first=cur;
    *second=slow->n;
    slow->n=NULL;
}

void MergeSorting(Node** head){
    Node* cur=*head;
    Node* first;
    Node* second;
    
    if(!cur || !cur->n) return;
    
    findMiddle(cur,&first,&second);
    
    MergeSorting(&first);
    MergeSorting(&second);
    
    *head=MergeBoth(first,second);
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
    
    
 
    first->d = 5; 
    first->n = second;
 
    second->d = 4; 
    second->n = third;
 
    third->d = 2; 
    third->n = fr1;
    
    fr1->d = 3; 
    fr1->n = fv1;
    
    fv1->d = 1; 
    fv1->n = NULL;
    
    h=first;
    
    
    MergeSorting(&h); 
    printList(h);
    
  
    return 0;
}