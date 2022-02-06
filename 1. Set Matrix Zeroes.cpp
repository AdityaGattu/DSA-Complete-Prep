Day 1: Arrays - https://takeuforward.org/interviews/strivers-sde-sheet-top-coding-interview-problems/
https://leetcode.com/problems/set-matrix-zeroes/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        
        int col0 = 1;
        int rows = matrix.size();
        int cols = matrix[0].size();
        
    for(int i=0;i<rows;i++){
        if(matrix[i][0]==0) col0=0; //to check if any cell is 0 in first column;
        for(int j=1;j<cols;j++){
            if(matrix[i][j]==0){
                matrix[0][j]=0;
                matrix[i][0]=0;
            }
        }
    }
    
    //bactrace from end;
    
    for(int i=rows-1;i>=0;i--){
        for(int j=cols-1;j>=1;j--){
            if(matrix[i][0]==0 || matrix[0][j]==0){
                matrix[i][j]=0;
            }
        }
        if(col0==0) matrix[i][0]=0;    // update 0th column based on overlapping variable col0
    }
        
    }
};
