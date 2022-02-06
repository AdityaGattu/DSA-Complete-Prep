Day1 - problem2
https://leetcode.com/problems/pascals-triangle/


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        
        vector<vector<int>>mat(numRows);
        
        for(int i=0;i<numRows;i++){
            mat[i].resize(i+1);
            mat[i][0]=mat[i][i]=1;   // 1st and last no is 1 //no of cols in a rows = rows no
            
            for(int j=1;j<i;j++){
                mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
            }
        }
        return mat;
    }
};

//tc :O(N*2);
//sc :O(n*2);
