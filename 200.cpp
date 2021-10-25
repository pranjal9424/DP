int minValue(struct Node *root) {
    // your code here
    if(root->left) return minValue(root->left);
    else return root->data;
}