#include <iostream>
using namespace std;
struct Node{
    int d;
    Node* n;
};
Node *h = NULL; ///global
Node *h2 = NULL; ///global

Node *newNode(int d){
    Node* ex=NULL;
    ex = new Node();
    ex->d = d; 
    ex->n = NULL;
    return ex;
}
/////////add two list number
Node *reverse(Node *h) {
   Node * p = NULL;
   Node * c = h;
   Node * n;
   while (c != NULL) {
      n = c->n;
      c->n = p;
      p = c;
      c = n;
   }
   return p;
}
Node *addOneUtil(Node *h,Node *h2) {
   Node* res = h;
   Node *temp, *p = NULL;
   int carry=0, sum;
   while (h != NULL) {
      sum = carry + h->d + h2->d;
      carry = (sum >= 10)? 1 : 0;
      sum = sum % 10;
      h->d = sum;
      temp = h;
      h = h->n;
      h2= h2->n;
   }
   
   if (carry > 0)
   {
    temp->n = newNode(carry);
   }
   
   return res;
}
void addOne(Node *h,Node *h2) {
   h = reverse(h);
   h2= reverse(h2);
   h = addOneUtil(h,h2);
   reverse(h);
}

void printList(Node* node){
    
    while(node != NULL){
        cout<<node->d<<" ";
        node = node-> n;
    }
}

int main()
{
    Node* first=NULL;
    Node* second = NULL;
    Node* third = NULL;
    Node* f2 = NULL;
    Node* s2 = NULL;
    Node* t2 = NULL;
 
    first = new Node();
    second = new Node();
    third = new Node();
    f2 = new Node();
    s2 = new Node();
    t2 = new Node();
 
    first->d = 5; 
    first->n = second;
 
    second->d = 6; 
    second->n = third;
 
    third->d = 3; 
    third->n = NULL;
    
    h=first;
    
    f2->d = 8; 
    f2->n = s2;
 
    s2->d = 4; 
    s2->n = t2;
 
    t2->d = 2; 
    t2->n = NULL;
    
    h2=f2;
    addOne(h,h2); 
    printList(h);
    
  
    return 0;
}