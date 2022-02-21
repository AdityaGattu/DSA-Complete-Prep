Q13. Search in a sorted 2D matrix.....

https://leetcode.com/problems/search-a-2d-matrix/

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        if(matrix.size()==0)return false;
        
        
        int r = matrix.size();
        int c = matrix[0].size();
        
        int low=0;
        int high=r*c-1;
        
        while(low<=high)
        {
            int mid= low+((high-low))/2;   
            // rowno = mid/cols;
            // colno = mid % cols;
            
            if(matrix[mid/c][mid%c]==target){
                return true;
            }
            
            if(matrix[mid/c][mid%c]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return false;
    }
};

TC: O(N*M)  n - rows and m - colmns;
SC : O(1) - since no extra array is used.
  
