void printSpiral(Node *root)
{
    //Your code here
    if(root==NULL)
    return;
    stack<Node*>curr;
    stack<Node*>next;
    curr.push(root);
    bool ltr=true;
    while(!curr.empty())
    {
        Node* temp=curr.top();
        curr.pop();
        if(temp)
        {
            cout<<temp->data<<" ";
            if(ltr)
            {
                if(temp->right)
                next.push(temp->right);
                if(temp->left)
                next.push(temp->left);
            }
            else
            {
                
                if(temp->left)
                next.push(temp->left);
                if(temp->right)
                next.push(temp->right);
            }
        }
        if(curr.empty())
        
        {
            ltr=!ltr;
            swap(curr,next);
        }
    }
    
}
