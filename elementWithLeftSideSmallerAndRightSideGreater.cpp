#include <bits/stdc++.h> 
using namespace std; 
  
int findElement(int a[], int n) 
{ 
    int leftMax[n];
    int rightMin[n];
    
    leftMax[0]=a[0];
    rightMin[n-1]=a[n-1];
    
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1],a[i]);
    }
    for(int i=n-2;i>=0;i--){
        rightMin[i]=min(rightMin[i+1],a[i]);
    }
    
    for (int i = 1; i < n - 1; i++) {
        // Check if we found a required element
        if (leftMax[i-1] <= a[i] && rightMin[i + 1] >= a[i]) return i;
    }
    return -1;
} 
  

int main() 
{ 
    int arr[] = {5, 1, 3, 2, 4 , 8, 9 , 11}; 
    int n = sizeof arr / sizeof arr[0]; 
    cout << "Index of the element is " << findElement(arr, n); 
    return 0; 
} 

/* Try more Inputs

findElement(array, length_of_array)


case1: 
actual = findElement([5, 1, 4, 3, 6, 8, 10, 7, 9],9)
expected = 4

case2: 
actual = findElement([6, 2, 5, 4, 7, 9, 11, 8, 10],9)
expected = 4

case3:
actual = findElement([5, 1, 4, 4],4)
expected = -1

*/
