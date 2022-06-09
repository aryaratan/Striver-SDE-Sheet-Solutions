https://leetcode.com/problems/two-sum/


vector<int> twoSum(vector<int>& nums, int target) {
        // brute force O(n^2)
        /*vector<int> s;
        for(int i=0;i<nums.size();i++){
            int a=nums[i];
            for(int j=i+1;j<nums.size();j++){
                int b=nums[j];
                if(a+b == target){
                    s.push_back(i);
                    s.push_back(j);
                    break;
                }
            }    
        }*/
        
        vector<int> s;
        unordered_map<int,int> map;
        int n = nums.size();
        for(int i=0;i<n;i++){
            
            if(map.count(target-nums[i]) > 0){
                s.push_back(min(i,map[target-nums[i]]));
                s.push_back(max(i,map[target-nums[i]]));
                return s;
            }
            
            map[nums[i]] = i;
        }
         return s;
    }