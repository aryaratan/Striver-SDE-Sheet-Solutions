https://leetcode.com/problems/4sum/


vector<vector<int>> fourSum(vector<int>& num, int target) {
       /* vector<vector<int>> sol;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            int target2 = target - nums[i];
            for(int j = i+1;j<n;j++){
                int left = j+1;
                int right = n-1;
                
                int target3 = target2 - nums[j];
                
                while(left < right){
                    
                    if(nums[left] + nums[right] < target3){  
                        cout << "if" << endl;
                        left++;                 
                    }
                    else if(nums[left] + nums[right] > target3){   
                         right--;
                        cout << "else if" << endl;
                    }
                    else{
                        cout << "else" << endl;
                        vector<int> temp;
                        temp.push_back(i);
                        temp.push_back(j);
                        temp.push_back(left);
                        temp.push_back(right);
                    // sort(temp.begin(),temp.end());
                        sol.push_back(temp);
                        
                        while(left < right && nums[left] ==temp[2] );
                        left++;
                        while(right > left && nums[right] == temp[3]);
                        right--;
                    }              
                }
                
                while(j < n-1 && nums[j] == nums[j+1])
                        ++j;
                
            }
            while(i< n-1 && nums[i] == nums[i+1]);
                        ++i;
        }
        return sol;*/
        vector<vector<int> > res;
        
        if (num.empty())
            return res;
        int n = num.size(); 
        sort(num.begin(),num.end());
    
        for (int i = 0; i < n; i++) {
        
            int target_3 = target - num[i];
        
            for (int j = i + 1; j < n; j++) {
            
                int target_2 = target_3 - num[j];
            
                int front = j + 1;
                int back = n - 1;
            
                while(front < back) {
                
                    int two_sum = num[front] + num[back];
                
                    if (two_sum < target_2) front++;
                
                    else if (two_sum > target_2) back--;
                
                    else {
                    
                        vector<int> quadruplet(4, 0);
                        quadruplet[0] = num[i];
                        quadruplet[1] = num[j];
                        quadruplet[2] = num[front];
                        quadruplet[3] = num[back];
                        res.push_back(quadruplet);
                    
                        // Processing the duplicates of number 3
                        while (front < back && num[front] == quadruplet[2]) ++front;
                    
                        // Processing the duplicates of number 4
                        while (front < back && num[back] == quadruplet[3]) --back;
                
                    }
                }
                
                // Processing the duplicates of number 2
                while(j + 1 < n && num[j + 1] == num[j]) ++j;
            }
        
            // Processing the duplicates of number 1
            while (i + 1 < n && num[i + 1] == num[i]) ++i;
        
        }
    
        return res;
        
    }