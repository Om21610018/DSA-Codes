// int maxi=-100000;

// int maxPath(BinaryTreeNode<int>* root){
//     if(root==NULL)return 0;
//     int lh=max(maxPath(root->left),0);
//     int rh=max(maxPath(root->right),0);
//     maxi=max({maxi,lh+rh+root->data});
    
//     return root->data+max(lh,rh);
// }

// int maxPathSum(BinaryTreeNode<int> *root)
// {
//      maxPath(root);
//      return maxi;
// }