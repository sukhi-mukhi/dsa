#include<bits/stdc++.h>
using namespace std;
 
// Function to find counts of all elements present in array
void findfrequency(int arr[],int n)
{
     //Practise Yourself : Write your code Here
      map<int, int> res;  
      for(int i=0;i<n;i++){
          res[arr[i]]++;
      }
     
     for( map<int,int>::iterator it=res.begin(); it!=res.end(); ++it)  
   {  
       cout << it->first << ": " << it->second << endl;  
   }  
}
 

int main()
{
    int arr[] = {2, 3, 3, 2, 5, 5, 8, 8 ,8,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    findfrequency(arr,n);
    return 0;
}
