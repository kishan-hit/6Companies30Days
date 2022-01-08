//Time Complexity: O(N)
    //Auxiliary Space: O(N)
    public:
    //Function to serialize a tree and return a list containing nodes of tree.
    void fun(Node* root,vector<int> &v){
        if(!root)
            return ;
        fun(root->left,v);
        v.push_back(root->data);
        fun(root->right,v);
    }
    vector<int> serialize(Node *root) 
    {
        //Your code here
        vector<int> v;
        fun(root,v);
        return v;
    }
    
    //Function to deserialize a list and construct the tree.
    Node * deSerialize(vector<int> &A)
    {
       //Your code here
       struct Node *newroot = new Node(-1);
       Node* temp = newroot;
       int n = A.size();
       for(int i=0;i<n;i++){
           temp->right = new Node(A[i]);
           temp = temp->right;
       }
       return newroot->right;
    }
