#include <iostream>
#include <vector>
using namespace std;
#define N 4
void printAllDgl(vector<vector<int>>&mat)
 {
    
         int row=mat.size();
         int column=mat.size();
         
         for(int k=0;k<mat.size();k++){
             int i=k;
             int j=0;
             
             while(i>=0){
               cout<<mat[i][j]<<" ";
               i=i-1;
               j=j+1;
             }
         }
         for(int k=1;k<mat.size();k++){
             int i=mat.size()-1;
             int j=k;
             while(j<=mat.size()-1){
               cout<<mat[i][j]<<" ";
               i=i-1;
               j=j+1;
             }
         }
}
int main(void){
   vector<vector<int>> mat ={
 { 1, 2, 3 },
 { 4, 5, 6 },
 { 7, 8, 9 }
};
    printAllDgl(mat);
}

/*
Input:
[
 [ 1, 2, 3 ],
 [ 4, 5, 6 ],
 [ 7, 8, 9 ]
]
Output:  [1,4,2,7,5,3,6,8,9]
*/

