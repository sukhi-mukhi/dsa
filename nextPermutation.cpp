//solved on geeksforgeeks : Digit rearrangement method to find next greater number with same set of digits
class Solution{
public:
    vector<int> nextPermutation(int n, vector<int> arr){
        int i,j;
        //check if left hand side is smaller than right hand side element
        for(i=n-1 ; i>=0 ; i--){
            if(arr[i]>arr[i-1]){
                break;
            }
        }
        //reaches 0th index , all the elements are sorted in reverse 
        if(i==0){
            sort(arr.begin() , arr.end());
            return arr;
        }
        //search for immediate higher number than arr[i-1] and swap it. sort the rest numbers  
        if(i>0){
            int min=i;
            int element=arr[i-1];
            for(j=i+1;j<n;j++){
                if(arr[j]>element && arr[j]<arr[min]){
                    min=j;
                }
            }
            swap(arr[min],arr[i-1]);
            sort(arr.begin()+i,arr.end());
        }
        return arr;

    }
};
