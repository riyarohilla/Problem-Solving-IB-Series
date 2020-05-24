int height(Node* node)
{
   
   if(node==NULL)  
        return 0;  
    else
    { 
        int h1=height(node->left);  
        int h2=height(node->right);  
        if(h1>h2)  
            return(h1+ 1);  
        else return(h2 + 1);  
    }  
}
