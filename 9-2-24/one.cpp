int fun(Node *root){
        if(root==NULL)
           return 0;
        if(root->left==NULL && root->right==NULL)
           return root->data;
        int l=fun(root->left);
        int r=fun(root->right);
        if(l+r==root->data)
           return root->data;
        return -1000;
    }
    int isSumProperty(Node *root)
    {
        // Add your code here
        if(root==NULL)
           return 1;
        return root->data==fun(root);
    }
