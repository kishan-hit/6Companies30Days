int countSubtreesWithSumX(Node* root, int X)
{
    //Time Complexity: O(N)
    //Auxiliary Space: O(Height of the Tree)
    
	// Code here
	int cnt=0;
	if(root->right!=NULL){
	    cnt += countSubtreesWithSumX(root->right,X);
	    root->data += root->right->data;
	}
	if(root->left!=NULL){
	    cnt += countSubtreesWithSumX(root->left,X);
	    root->data += root->left->data;
	}
	if(root->data == X)
	    cnt++;
	 return cnt;
}
