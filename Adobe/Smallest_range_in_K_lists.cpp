pair<int,int> findSmallestRange(int KSortedArray[][N], int n, int k)
    {
          //code here
          //Time Complexity : O(n * k *log k)
          //Auxilliary Space  : O(k)
          int mn=INT_MAX,mx=INT_MIN,range=INT_MAX;
         
         priority_queue<element,vector<element>,compare> q;
         
         int low,high;
         
         for(int i=0;i<k;i++)
         {
             q.push(element(KSortedArray[i][0],0,i));
             mn=min(mn,KSortedArray[i][0]);
             mx=max(mx,KSortedArray[i][0]);
         }
         
         while(!q.empty())
         {
             element temp=q.top();
             q.pop();
             
             int maybemin=temp.value;
             if(range>(mx-maybemin))
             {
                 mn=maybemin;
                 range=mx-mn;
                 low=mn;
                 high=mx;
             }
             if((temp.index)==n-1)
               break;
             
             temp.index=temp.index+1;
             q.push(element(KSortedArray[temp.row][temp.index],temp.index,temp.row));
             mx=max(mx,KSortedArray[temp.row][temp.index]);
             
         }
         return {low,high};
    }
