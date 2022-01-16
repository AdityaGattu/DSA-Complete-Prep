Day 1: Arrays - https://takeuforward.org/interviews/strivers-sde-sheet-top-coding-interview-problems/
https://www.codingninjas.com/codestudio/problems/1089580?topList=striver-sde-sheet-problems&utm_source=striver&utm_medium=website&leftPanelTab=0

vector<vector<long long int>> printPascal(int n) 
{
  // Write your code here.
    vector<vector<long long int>>mat(n);
    
    for(int i=0;i<n;i++){
        mat[i].resize(i+1);
        mat[i][0]=mat[i][i]=1;   //now cols in a row = row no.
        for(int j=1;j<i;j++){
            mat[i][j]=mat[i-1][j-1]+mat[i-1][j];
        }
    }
    return mat;
}
