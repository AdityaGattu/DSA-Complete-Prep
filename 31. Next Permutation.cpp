Day 1 : Problem 3 ....
https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        int i = -1;
        for(i=nums.size()-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
             break;          // this the break point - ind1 =i
            }
        }
        
        if(i<0){
            reverse(nums.begin(),nums.end());  // if no breakpoint just rev array
        }
        
        else{
        //find ind2 which has next greater ele to nums[ind1]
            int j;
        for(j=nums.size()-1;j>=0;j--){
            if(nums[j]>nums[i])
            {
                swap(nums[j],nums[i]);
                break;
            }
         }
            reverse(nums.begin()+i+1,nums.end());  //reverse to get the ascending order of last  increasing elements from end; 
        }
    }
};
