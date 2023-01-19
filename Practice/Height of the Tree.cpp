//https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem

 int height(Node* root) { 
    int leftHeight=-1,rightHeight=-1;            //cause height is starting from 0
    if(root->left){
        leftHeight=height(root->left);
    }
    if(root->right){
        rightHeight=height(root->right);
    }
    return max(leftHeight,rightHeight)+1;
}
