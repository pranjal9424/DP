#include<bits/stdc++.h>
using namespace std;
struct  Node{
    int data;
    struct Node* next;
    Node (int data){
        this-> data = data;
        next=NULL;
    }
};
struct Linkedlist{
    Node* head;
    Linkedlist() {head=NULL;}
    
    void reverse()
    {
        Node* current=head;
        Node *prev=NULL,*next=NULL;
        
        
        while(current != NULL){
            next = current -> next;
            current -> next = prev;
            prev=current;
            current=next;
        }
        head=prev;
    }
    
    void push(int data){
        Node* temp=new Node(data);
        temp->next=head;
        head=temp;
    }
    
    void print()
    {
        struct Node* temp = head;
        while (temp != NULL) {
            cout << temp->data << " ";
            temp = temp->next;
        }
    }
};
int main()
{
    Linkedlist lin;
    lin.push(20);
    lin.push(4);
    lin.push(15);
    lin.push(85);

    lin.print();
    cout<<endl;
    lin.reverse();
    lin.print();
    return 0;
}
