//Time Complexity: O(NlogN)
    //Auxiliary Space: O(1)
    int partition(char arr[],int low,int high,char pivot) {
	    int i = low;
	    char temp1,temp2;
	    for (int j=low;j<high;j++){
	        if(arr[j]<pivot){
	            temp1 = arr[i];
	            arr[i] = arr[j];
	            arr[j] = temp1;
	            ++i;
	        } 
	        else if(arr[j]==pivot){
	            temp1 = arr[j];
	            arr[j] = arr[high];
	            arr[high] = temp1;
	            --j;
	        }
	    }
	    temp2 = arr[i];
	    arr[i] = arr[high];
	    arr[high] = temp2;
	    return i;
	}
	void match(char nuts[],char bolts[],int low,int high){
	    if (low<high){
	        int pivot = partition(nuts, low, high, bolts[high]);
	        partition(bolts,low,high,nuts[pivot]);
	        match(nuts,bolts,low,pivot-1);
	        match(nuts,bolts,pivot+1,high);
	    }
	}
	void matchPairs(char nuts[], char bolts[], int n) {
	    // code here
	    match(nuts,bolts,0,n-1);
	}
