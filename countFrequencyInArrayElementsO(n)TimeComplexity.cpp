#include<bits/stdc++.h>
using namespace std;
 
// Function to find counts of all elements present in
// arr[0..n-1]. The array elements must be range from
// 1 to n
void findfrequency(int arr[],int n)
{
    for(int i=0;i<n;i++){
        arr[i]=arr[i]-1;
    }
    for(int i=0;i<n;i++){
        arr[arr[i]%n]=n+arr[arr[i]%n];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]/n<<" ";
    }
}
 

int main()
{
    int arr[] = {2, 3, 3, 2, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<"size of n-->"<<n<<endl;
    findfrequency(arr,n);
    return 0;
}


/* Try more Inputs
case 1: 
actual = countfrequenciesEfficient([1, 2, 2, 1, 1, 2, 3, 2])
expected = [[1 3],[2 4],[3  1]]

case2: 
 actual = countfrequenciesEfficient([1, 2, 2])
 expected = [[1 1],[2 2]]
 
case3: 
actual = countfrequenciesEfficient([4, 4, 4, 4}])
expected = [[4 4]]
*/
