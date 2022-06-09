
https://leetcode.com/problems/sort-colors/

void sortColors(vector<int>& nums) {
       /* int count1 = 0,count2=0,count3=0;
        
        int n = nums.size();
        int i=0;
        while(i<n){
            if(nums[i] == 0){
                count1++;
            }
            if(nums[i] == 1){
                count2++;
            }
            if(nums[i] == 2){
                count3++;
            }
            i++;
        }
        cout << count1 << count2 << count3;
        i=0;
        while(i<count1){
            nums[i] = 0;
            i++;
        }
        while(i<count1+count2){
            nums[i] = 1;
            i++;
        }
        while(i<count1+count2 +count3){
            nums[i] = 2;
            i++;
        }*/
        
        int n = nums.size();
        int i = 0 , j = n-1;
        int k = 0;
        while(k<=j){
            if(nums[k] == 1){
                k++;
                continue;
            }
            if(nums[k] == 0 ){
                int temp = nums[i];
                nums[i] = nums[k];
                nums[k] = temp;
                i++;
                k++;
                continue;
            }
            if(nums[k] == 2){
                int temp = nums[j];
                nums[j] = nums[k];
                nums[k] = temp;
                j--;
                continue;
            }
        }
        
    }