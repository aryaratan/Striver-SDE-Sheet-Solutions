
https://leetcode.com/problems/search-a-2d-matr

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();
        int m = matrix[0].size();
        
        if(matrix[n-1][m-1] < target){
            return false;
        }
        for(int i=0;i<n;i++){
           if(target< matrix[i][0]){
               return false;
           }
            if(target>matrix[i][m-1]){
                continue;
            }
            int s=0,e=m-1;
            int mid = (s+e)/2;
            while(s<=e){
                mid = (s+e)/2;
                if(matrix[i][mid] == target){
                    return true;
                }
                else if(target> matrix[i][mid]){
                    s = mid+1;
                }
                else{
                    e = mid-1;
                }
            }
            
        }
        return false;
    }