
https://leetcode.com/problems/next-permutation/


void nextPermutation(vector<int>& nums) {
        if(nums.size()== 1){
            return;
        }
        int n = nums.size();
        int i =n-2;
        while(i>=0 && nums[i] >= nums[i+1]){
            i--;
        }
        if(i < 0){
            reverse(nums.begin(),nums.end());
            return;
        }
        int j = n-1;
        while(j>i && nums[j] <= nums[i]){
            j--;
        }
        cout << i << " " << j << endl;
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        
       reverse(nums.begin() + i + 1,nums.end());
        return;
    }