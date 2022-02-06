Problem 8:
https://leetcode.com/problems/merge-intervals/submissions/

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        
        vector<vector<int>> ans;
        
        if(intervals.size()==0)return ans; // incase invertal size is 0 return empty vector
        
        sort(intervals.begin(),intervals.end()); //sort all given intervals
        
        vector<int>temp=intervals[0];    // take intial interval as temp
        
        for(int i=0;i<intervals.size()-1;i++){        // iterate until last but interval
            if(temp[1]>=intervals[i+1][0]){            // if temp[1] >= next starting interval
                temp[1]=max(intervals[i+1][1],temp[1]); // update max of temp[1] and nxt intv[1]                                                                 //merging is done
            }
            else{
                ans.push_back(temp);                // else if no merge push interval directly
                temp=intervals[i+1];                //take next interval as temp 
            }
        }
        ans.push_back(temp);                        // finally enter the last interval left 
        return ans;
        
    }
};
