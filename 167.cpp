#include <iostream>
using namespace std;

typedef struct treenode {
	int val;
	struct treenode* left;
	struct treenode* right;
} node;

node* createNode(int val)
{
	node* newNode = (node*)malloc(sizeof(node));
	newNode->val = val;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

void inorder(node* root)
{
	if (root == NULL)
		return;
	inorder(root->left);
	printf("%d ", root->val);
	inorder(root->right);
}

treenode* mirrorTree(node* root)
{
	if(root==NULL) return root;
	
	treenode* n= root->left;
	root->left=root->right;
	root->right=n;
	
	if(root->left) mirrorTree(root->left);
	if(root->right)mirrorTree(root->right);
	
	return root;
}

int main()
{

	node* tree = createNode(5);
	tree->left = createNode(3);
	tree->right = createNode(6);
	tree->left->left = createNode(2);
	tree->left->right = createNode(4);
	printf("Inorder of original tree: ");
	inorder(tree);

	mirrorTree(tree);

	printf("\nInorder of Mirror tree: ");
	inorder(tree);
	return 0;
}
