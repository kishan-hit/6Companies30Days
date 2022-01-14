vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        //Time Complexity: O(r*c)
        //Auxiliary Space: O(r*c)
        
        // code here 
        vector<int> a;
        int top=0;
        int down=r-1;
        int left=0;
        int right=c-1;
        int choice=0;
        while(top<=down && left<=right){
           if(choice==0){
               for(int i=left;i<=right;i++){
                   a.push_back(matrix[top][i]);
               }
                top++;
           }
           else if(choice==1){
               for(int i=top;i<=down;i++){
                    a.push_back(matrix[i][right]);
               }
                right--;
           }
           else if(choice==2){
               for(int i=right;i>=left;i--){
                    a.push_back(matrix[down][i]);
               }
                down--;
           }
           else if(choice==3){
               for(int i=down;i>=top;i--){
                    a.push_back(matrix[i][left]);
               }
                left++;
           }
           choice = (choice+1)%4;
        }
        return a;
    }
