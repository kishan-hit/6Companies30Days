//Time Complexity: O(n)
//Auxiliary Space: O(1)

class Solution{
  public:
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long long int i=0,j=0,res=0,prod=1;
        while(j<a.size()){
            prod *= a[j];
            if(prod>=k){
                while(prod>=k)
                    prod /= a[i++];
            }
            if(prod<k)
                res += (j-i+1);
            ++j;
        }
        return res;
    }
};
