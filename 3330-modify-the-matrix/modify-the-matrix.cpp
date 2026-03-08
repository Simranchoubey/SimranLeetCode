class Solution {
public:
    vector<vector<int>> modifiedMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> colMax(n, 0);
        // Find max of each column
        for(int j=0;j<n;j++){
            int mx=0;
            for(int i=0;i<m;i++){
                mx = max(mx, matrix[i][j]);
            }
            colMax[j]=mx; 
        }
        // Replace -1
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == -1){
                    matrix[i][j] = colMax[j];
                }
            }
        }
        return matrix;
    }
};