//Time Complexity: O(1)
//Auxiliary Space: O(1)

class Solution {
  public:
    int findPosition(int N , int M , int K) {
        // code here
        if(N==1)
            return 1;
        int res = (M%N)+K-1;
        if(res==N)
            return res;
        return res%N;
    }
};
