#include<iostream>
using namespace std;
void swapping(int &a, int &b) {     //swap the content of a and b
   int temp;
   temp = a;
   a = b;
   b = temp;
}
void display(int *array, int size) {
   for(int i = 0; i<size; i++)
      cout << array[i] << " ";
   cout << endl;
}
void merge(int *a, int l, int m, int r) {
   
   int i=l;
   int j=m+1;
   int k=l;
   int array_b[100];
   while(i<=m && j<=r){
       if(a[i]<a[j]){
           array_b[k]=a[i];
           i++;
       }else{
           array_b[k]=a[j];
           j++;
       }
       k++;
   }
       while(j<=r){
           array_b[k]=a[j];
           j++;k++;
       }
  
       while(i<=m){
           array_b[k]=a[i];
           i++;k++;
       }
   for(int p=l;p<=r;p++){
       a[p]=array_b[p];
   }
   
}
void mergeSort(int *array, int l, int r) {
   //Practise Yourself : Write your code Here
   if(l<r){
       int mid=(l+r)/2;
       mergeSort(array,l,mid);
       mergeSort(array,mid+1,r);
       merge(array,l,mid,r);
   }
   
}
int main() {
   int arr[] ={8,4,3,12,25,6,13,10};
   mergeSort(arr, 0, 7);     //(n-1) for last index
   cout << "Array after Sorting: ";
   display(arr, 8);
}
