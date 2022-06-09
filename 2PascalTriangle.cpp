
https://leetcode.com/problems/pascals-triangle/

vector<vector<int>> generate(int n) {
        //int n; 
	/*int c = 1;
        vector<vector<int>> sol;
	for (int i = 0; i < n; i++){
		vector<int> temp;  
		for (int j = 0; j <= i; j++)
		{
			if (j != 0 && i != 0)
				c = c * (i - j + 1) / j;
			// cout << c << ' ';
            temp.push_back(c);
		}
        sol.push_back(temp);
		//cout << '\n';
	}*/
	
        
        vector<vector<int>> sol;    // final answer
        
        for(int i=0;i<n;i++){      // number of rows
            vector<int> row(i+1,1);   // row vector which have size row number and all elements as 1
            
            for(int j=1;j<=i-1;j++){
                // i,j element is sum of previous row,s element
                row[j] = sol[i-1][j-1] + sol[i-1][j];
            }
            sol.push_back(row);     // pushing each row into sol 
            
            
        }
        
		
	return sol;
    }