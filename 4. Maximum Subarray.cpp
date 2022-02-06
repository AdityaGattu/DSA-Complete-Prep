https://leetcode.com/problems/maximum-subarray/

//Problem-4

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum = 0 ;
        int max_ele = nums[0];
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            max_ele = max(max_ele,sum);       //if currrsum > max_sum we update
            if(sum<0){              //if currsum<0 no need add or carry forword
                sum=0;
            }
        }
        return max_ele;
        
    }
};
