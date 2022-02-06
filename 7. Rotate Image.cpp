Problem 7 :
https://leetcode.com/problems/rotate-image/

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        
        // 1. transpose the matrix;
        //2. reverse each row in the matrix to get rotated matrix img by 90
        
        for(int i=0;i<matrix.size();i++)
        {
            for(int j=0;j<i;j++)    //go until j<i for each row since i=j need not be swapped
            {
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        //reverse the each row 
        
        for(int i=0;i<matrix.size();i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
