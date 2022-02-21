https://leetcode.com/problems/majority-element/

Day3 : 
Find the Majority Element that occurs more than N/2 times

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //moore's voting theorem : 
        
        int cnt=0;
        int maj_ele;
        
        for(int i=0;i<nums.size();i++){
            
            if(cnt==0){
                maj_ele = nums[i]; 
            }
            if(nums[i]==maj_ele){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        
        return maj_ele;
        
        //TC : O(N)
        //SC : O(1)
    }
};
