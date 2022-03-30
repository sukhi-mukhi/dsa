int maxIndexDiff(int arr[], int n) {
        // code here
        int i,j;
        int maxDiff;
        
        int* MinArr = new int[n];
        int* MaxArr = new int[n];
        
        MinArr[0]=arr[0];
        for(i=1;i<n;++i) MinArr[i]=min(arr[i],MinArr[i-1]);
        
        MaxArr[n-1]=arr[n-1];
        for(int j=n-2;j>=0;--j) MaxArr[j]=max(arr[j],MaxArr[j+1]);
        
        i=0,j=0,maxDiff=-1;
        while(j<n && i<n){
            if(MaxArr[j]>=MinArr[i]){
                maxDiff=max(maxDiff, j-i);
                j+=1;
            }else{
                i+=1;
            }
        }
        return maxDiff;
    }
