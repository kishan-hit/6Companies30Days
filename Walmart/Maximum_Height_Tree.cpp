int height(int N){
        // code here
        //Time Comlpexity: O(1)
        //Auxiliary Space: O(1)
        int temp = sqrt(2*N);
        if(N<(temp*(temp+1))/2)
            --temp;
        return temp;
    }
