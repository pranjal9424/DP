#include <iostream>
using namespace std;
struct Node{
    int d;
    Node* n;
};
Node *h = NULL; ///global
/////////delete dublicate element from Loop in linkList
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
Node *addOneUtil(Node *h) {
   Node* res = h;
   Node *temp, *p = NULL;
   int carry = 1, sum;
   while (h != NULL) {
      sum = carry + h->d;
      carry = (sum >= 10)? 1 : 0;
      sum = sum % 10;
      h->d = sum;
      temp = h;
      h = h->n;
   }
   
   return res;
}
Node* addOne(Node *h) {
   h = reverse(h);
   h = addOneUtil(h);
   return reverse(h);
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
    Node* fourt = NULL;
    Node* five = NULL;
 
    first = new Node();
    second = new Node();
    third = new Node();
    fourt = new Node();
    five = new Node();
 
    first->d = 1; 
    first->n = second;
 
    second->d = 9; 
    second->n = third;
 
    third->d = 9; 
    third->n = fourt;
    
    fourt->d = 9; 
    fourt->n = NULL;
    
    h=first;
    
    addOne(h); 
    printList(h);
    
  
    return 0;
}
