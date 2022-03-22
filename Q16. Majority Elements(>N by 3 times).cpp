https://leetcode.com/problems/majority-element-ii/

Day3 :



class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        
        //Extended Boyer's moore voting algorithm...
        vector<int>ans;
        
        int maj1=INT_MIN;
        int maj2=INT_MIN;
        int cnt1=0;
        int cnt2=0;
        
        for(int ele:nums){
        
            if(ele==maj1){            // compare maj1 and maj2 ele if exits and same inc cnt
                cnt1++;
            }
            else if(ele==maj2){
                cnt2++;
            }
            
            else if(cnt1==0){          // else initalize the maj ele here
                maj1=ele;
                cnt1=1;
            }
            else if(cnt2==0){
                maj2=ele;
                cnt2=1;
            }
            else{                   // if both maj ele are present and new ele occurs dec cnt
                cnt1--; 
                cnt2--;
            }
            
        }
        
        int c1=0;
        int c2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==maj1)c1++;
            if(nums[i]==maj2)c2++;
        }
        
        if(c1>(nums.size()/3))ans.push_back(maj1);
        if(c2>(nums.size()/3))ans.push_back(maj2);  // or maj1!=maj2 can up                                                                          //handled up
         
        return ans;
        
    }
};

TC : O(N) + O(N)
SC : O(1)
