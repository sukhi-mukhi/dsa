
#include <bits/stdc++.h> 
using namespace std; 
  
int findMax(int arr[], int low, int high)
{

	
	if (high == low)
		return arr[low];

	// Find mid
	int mid = low + (high - low) / 2;
     // Check if mid reaches 0 ,it is greater than next element or not
	if(mid==0 && arr[mid]>arr[mid+1])
	{
			return arr[mid];
	}
	if (mid < high && arr[mid + 1] < arr[mid] && mid>0 && arr[mid]>arr[mid-1]) {
		return arr[mid];
	}
	if (arr[low] > arr[mid]) {
		return findMax(arr, low, mid - 1);
	}
	else {
		return findMax(arr, mid + 1, high);
	}
}
  
int main()  
{  
    int array1[] = {1,2,3,4,5,6,5,4,3};  
    int n = sizeof(array1)/sizeof(array1[0]);  
    cout << "The maximum Value  is " << findMax(array1, 0, n-1);  
    return 0;  
} 