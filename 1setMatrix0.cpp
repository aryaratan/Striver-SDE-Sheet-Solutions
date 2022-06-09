    
    https://leetcode.com/problems/set-matrix-zeroes/
    
    void setZeroes(vector<vector<int>>& matrix) {
        vector<pair<int,int>> zero;
        int m = matrix.size();
        int n = matrix[0].size();
        int count = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j] == 0){
                    pair<int,int> p{i,j};
                    zero.push_back(p);
                    count++;
                }
            }
            
            
        }
        
        for(int i = 0;i<zero.size();i++){
            pair<int,int> p = zero[i];
            
            for(int j=0;j<n;j++){
                matrix[p.first][j] = 0;
            }
            for(int j=0;j<m;j++){
                matrix[j][p.second] = 0;
            }
        }
    }