//logic

bool knows(vector<vector<int> >& M, int a, int b){
        return (M[a][b]);
    }
    int celebrity(vector<vector<int> >& M, int n) 
    {
        // code here 
        int x=0;
        int y=n-1;
        
        while(x<y){
            if(M[x][y]==1){
                x++;
            }else{
                y--;
            }
        }
        
        for(int i=0;i<n;i++){
            if((x!=i) && (knows(M, x,i) || !knows(M, i,x)))return -1;
        }

        return x;
    }
