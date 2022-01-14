int minSteps(int D){
        //Time Complexity: O(D)
        //Auxiliary Space: O(1)
        
        // code here
        int cnt=0,sum=0;
        while(sum<D){
            sum += cnt;
            ++cnt;
        }
        while((sum-D)%2){
            sum += cnt;
            ++cnt;
        }
        return cnt-1;
    }
