int minJumps(int arr[], int n){
        // Your code here
    int a=arr[0];
    int b=arr[0];
    int jump=1;
    //when n is the destination
    if(n<=1){
        return 0;
    }
    //first number is zero so cannot go ahead
    if(arr[0]==0){
       return -1; 
    }    
    for(int i=1;i<n;i++){
        if(i==n-1){
            return jump;
        }
        a--;b--;
        if(arr[i]>b){
            b=arr[i];
        }
        if(a==0){
            a=b;
            //steps(a) become 0 , cannot move forward
            if(a==0){
                return -1;
            }
            jump++;
        }
      }
    return jump;
 }