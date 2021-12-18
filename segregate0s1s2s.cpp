#include<bits/stdc++.h> 
using namespace std; 
  
void swap(int *a, int *b); 
  
void sort012(int a[], int arr_size) 
{ 
     //Practise Yourself : Write your code Here
} 
  
void swap(int *a, int *b) 
{ 
    int temp = *a; 
    *a = *b; 
    *b = temp; 
} 

void segregateArray(int array1[], int arr_size) 
{ 
    int low=0;
    int mid=0;
    int high=arr_size-1;
    
    while(mid<=high){
            if(array1[mid]==0){
            swap(array1[mid],array1[low]);
            low++;mid++;
         }
         else if(array1[mid]==2){
             swap(array1[mid],array1[high]);
            high--;
         }
         else
         mid++;
    }
  for(int i=0;i<arr_size;i++){
      cout<<" "<<array1[i];
  }
} 

int main() 
{ 
    int array1[] = {2, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1}; 
    int arr_size = sizeof(array1)/sizeof(array1[0]); 
    int i; 
  
    sort012(array1, arr_size); 
  
    cout << "segregated array "; 
    segregateArray(array1, arr_size);  
    return 0; 
} 


/* Try more Inputs
case 1: 
actual = Sort012([0, 1, 2, 0, 1, 2],5)
expected = [0, 0, 1, 1, 2, 2]

case2: 
 actual = Sort012([0, 1, 1, 0, 1, 2, 1, 2, 0, 0, 0, 1],11)
 expected = [0,0,0,0,0,1,1,1,1,1,2,2]
 
case3: 
actual = Sort012([2,0,1}],3)
expected = [0,1,2]
*/