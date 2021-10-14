/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int val)
    {
        data=val;
        left=NULL;
        right=NULL;
    }
};

void Inorder(Node* root){
    if(root ==NULL){
        return;
    }
    Inorder(root->left);
    cout<<root->data;
    Inorder(root->right);
}

int main()
{
    struct Node* root=new Node(1);
    
    root->left=new Node(2);
    root->right=new Node(3);
    
    root->left->left=new Node(4);
    root->left->right=new Node(5);
    
    root->right->left=new Node(6);
    root->right->right=new Node(7);
    
    Inorder(root);
    return 0;
}
