bool search(vector<vector<int> > matrix, int n, int m, int x) 
    {
        // code here 
        int i=n-1,j=0;
        
        while(i>=0 && j<m){
            if(matrix[i][j]==x)return 1;
            
            if(matrix[i][j]>x){
                i--;
            }else{
                j++;
            }
        }
        return 0;
    }
