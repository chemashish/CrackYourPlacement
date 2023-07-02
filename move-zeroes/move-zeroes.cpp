class Solution {
public:
    void moveZeroes(vector<int>& nums) {
       int i=0;
       int j=0;
       int n=nums.size();
       while(i<n &&j<n){
          while(i<n && nums[i]!=0){
              i++;
          }
          while(j<n){
              if(i<n && i<j && nums[j]!=0){
                  swap(nums[i],nums[j]);
                  i++;
              }
              j++;
          }
       } 
    }
};