


// int height(TreeNode<int>*root){
//     if(root==NULL)return 0;
//     int lh=height(root->left);
//     int rh=height(root->right);
//     if(lh==-1 || rh==-1)return -1;
//     if(abs(lh-rh)>1)return -1;
//     return 1+max(lh,rh);
// }


// bool isBalancedBT(TreeNode<int>* root){
//     return height(root)!=-1;
    
// }