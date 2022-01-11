#include <iostream>
 
// Function to return majority element present in given array
int majorityElement(int arr[], int n)
{
    //Write your code here
    int majority=arr[0];
    int count=1;
    
    for(int i=1;i<n;i++){
        
        if(arr[i]==majority)
         count++;
        else
         count--;
         
        if(count==0){
            majority=arr[i];
            count=1;
        }
        
    }
    return majority;
}
 
int main(void)
{
    // Assumtion - valid input (majority element is present)
    int arr[] = {9,1,9,3,9,4,9,5,6,9,5,9,6,9 };
    int n = sizeof(arr)/sizeof(arr[0]);
 
    printf("Majority element is %d", majorityElement(arr, n));
 
    return 0;
}
