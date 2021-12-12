// Search an element in sorted and rotated
// array using single pass of Binary Search
#include <bits/stdc++.h>
using namespace std;

// Returns index of key in arr[l..h] if
// key is present, otherwise returns -1
int search(int arr[], int l, int h, int key)
{
	if(l>h){
	    return -1;
	}
	int mid=(l+h)/2;
	if(arr[mid]==key){
	    return mid;
	}
	if(key>=arr[l] && key<=arr[mid])
	    return search(arr,l,mid-1,key);
	 else   
	    return search(arr,mid+1,h,key);
	
	if(key>=arr[mid] && key<=arr[h])
	    return search(arr,mid+1,h,key);
	else
	    return search(arr,l,mid-1,key);
	
}

// Driver program
int main()
{
	int arr[] = { 4, 5, 6, 7, 8, 9, 1, 2, 3 };
	int n = sizeof(arr) / sizeof(arr[0]);
	int key = 1;
	int i = search(arr, 0, n - 1, key);

	if (i != -1)
		cout << "Index: " << i << endl;
	else
		cout << "Key not found";
}
