//Time Complexity: O(N)
    //Auxiliary Space: O(height of tree)
    pair<int,int> fun(Node *root,int target,int &maxi,Node * &t){
        if(!root) 
            return {0,0};
        if(root->data == target){
            t=root;
            return {target,1};
        } 
        pair<int,int> l,r;
        l = fun(root->left,target,maxi,t);
        r = fun(root->right,target,maxi,t);
        if(l.first){
            maxi = max(maxi,l.second+r.second);
            return {l.first,l.second+1};
        }
        else if(r.first){
            maxi = max(maxi,r.second+l.second);
            return {r.first,r.second+1};
        }
        return {0,max(l.second,r.second)+1};
    }
    
    int height(Node *root){
        if(!root) 
            return 0;
        return max(height(root->left),height(root->right))+1;
    }
    int minTime(Node* root, int target) 
    {
        // Your code goes here
        int maxi = INT_MIN;
        Node *t = NULL;
        fun(root,target,maxi,t);
        int m = height(t)-1;
        return max(maxi,m);
    }
