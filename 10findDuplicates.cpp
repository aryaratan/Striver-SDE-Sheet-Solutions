
https://leetcode.com/problems/find-the-duplicate-number/



int findDuplicate(vector<int>& nums) {
        int n= nums.size();
        
//         vector<int> sol(n,0);
//         for(int i=0;i<n;i++){
            
//             sol[nums[i]]++;
//         }  
//         for(int j=0;j<n;j++){
//             if(sol[j] > 1){
//                 return j;
//             }
//         }

// using extra space
//         unordered_map<int,bool> map;
        
//         for(int i=0;i<n;i++){
//             if(map.count(nums[i]) > 0)
//                 return nums[i];
            
//             map[nums[i]] = true;
//         }

        // check for cycle;
        int slow = 0;
        int fast = 0;
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(fast!= slow);
        fast = 0;
        while(fast != slow){
            fast = nums[fast];
            slow = nums[slow];
        }
        return slow;
    }