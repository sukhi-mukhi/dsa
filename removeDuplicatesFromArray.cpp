#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
   int removeDuplicates(vector<int>& nums) {
      //Write your code here
      vector<int> res;
     // res.push_back(nums[0]);
      for(int i=1;i<nums.size();i++){
          if(nums[i]!=nums[i+1]){
             res.push_back(nums[i]);
          }
      }
      for(int i=0;i<res.size();i++){
          cout<<"-->"<<res[i]<<endl;
      }
      return 0;
   }
};
int main(){
   Solution ob;
   vector<int> v = {0,0,0,1,1,1,1,2,3,3,9,9,17};
   cout << ob.removeDuplicates(v);
}
