Problem 5:
https://leetcode.com/problems/sort-colors/

class Solution {
public:
    void sortColors(vector<int>& nums) {
        
        //Dutch national flag algorithm 
        
        
        int low=0;
        int high=nums.size()-1;
        int mid=0;
        
        while(mid<=high){
            
            if(nums[mid]==0){                       //condition 1
                swap(nums[low],nums[mid]);
                low++;
                mid++;
                continue;
            }
            
            if(nums[mid]==1){                      //condition 2
                mid++;
                continue;
            }
            
            if(nums[mid]==2){
                swap(nums[mid],nums[high]);        //condition 3
                high--;
                continue;
            }
        }
    }
};
