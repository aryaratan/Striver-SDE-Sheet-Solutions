https://leetcode.com/problems/longest-consecutive-sequence/



int longestConsecutive(vector<int>& nums) {
        unordered_map<int,bool> map;
        
        
        int n = nums.size();
        for(int i=0;i<n;i++){
            map[nums[i]] = false;
        }
        int maxLen = 0;
        for(int i=0;i<n;i++){
            if(map[nums[i]] == true){
                continue;
            }
            map[nums[i]] = true;
            int cl = 1,j=1;
            while(map.count(nums[i] - j) > 0){
                map[nums[i]-j] = true;
                cl++;
                j++;
            }
            j = 1;
            while(map.count(nums[i]+j) > 0){
                map[nums[i]+j] = true;
                j++;
                cl++;
            }
            maxLen = max(maxLen , cl);
        }
        return maxLen;
    }