int height(Node *root)
{
    if(root==NULL)
    return 0;
    int h1=height(root->left);
    int h2=height(root->right);
    if(h1>h2)
    return 1+h1;
    else
    return 1+h2;
  
}
 
bool isBalanced(Node *root)
{
    //  Your Code here
    if(root==NULL)
    return true;
    if(root->left==NULL && root->right==NULL)
    return true;
    if(abs(height(root->left)-height(root->right))<=1 && isBalanced(root->left) && isBalanced(root->right))
    return true;
    return false;
}
