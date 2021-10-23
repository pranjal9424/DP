#include<iostream>
#include <unordered_map>
using namespace std;
class Node
{
public:
	int data;
	Node* left, *right;
	Node(int data)
	{
		this->data = data;
		left = NULL;
		right = NULL;
	}
};
/////////////////////logic start
unordered_map <Node*,int> dp;
int maxSum(Node *root)
{
	if(!root) return 0;
  if(dp[root]) return dp[root];
  int inc=root->data;
  
  if(root->left){
   	inc += maxSum(root->left->left);
    inc += maxSum(root->left->right);
  }
  
  if(root->right)
  {
    inc +=maxSum(root->right->right);
    inc +=maxSum(root->right->left);
  }
  
  int exc=maxSum(root->left)+maxSum(root->right);
  
  dp[root]=max(inc,exc);
  
	return dp[root];
}

//////////////////////////////////////////////////////////
int main()
{
	Node *root= new Node(10);
	root->left= new Node(1);
	root->left->left= new Node(2);
	root->left->left->left= new Node(1);
	root->left->right= new Node(3);
	root->left->right->left= new Node(4);
	root->left->right->right= new Node(5);
	cout << maxSum(root);
	return 0;
}
