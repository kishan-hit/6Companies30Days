//Time Complexity: O(N)
    //Auxiliary Space: O(height of tree)
    int sum(Node* node){
        if(node == NULL)
            return 0;
        return sum(node->left)+sum(node->right)+node->data;
    }
    void toSumTree(Node *node)
    {
        // Your code here
        if(node == NULL)
            return;
        int s = sum(node)-node->data;
        node->data = s;
        toSumTree(node->left);
        toSumTree(node->right);
    }
