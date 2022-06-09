
https://leetcode.com/problems/majority-element-ii/


vector<int> majorityElement(vector<int>& nums) {
      
       
        // using extra space
        /*
        unordered_map<int,int> mp;
        int n = nums.size();
        vector<int> v;
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it = mp.begin();it != mp.end();it++){
            if(it -> second > n/3){
                v.push_back(it -> first);
            }
        }*/
        
        // optimal solution
        // extended version of voting algo
        int ele1 = -1, ele2 = -1, cnt1 = 0, cnt2 = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] == ele1){
                cnt1++;
            }
            else if( nums[i] == ele2) {
                cnt2++;
            }
            else if(cnt1 == 0){
                ele1 = nums[i];
                cnt1 = 1;
            }
            else if(cnt2 == 0){
                ele2 = nums[i];
                cnt2 = 1;
            }
            else{
                cnt1--;
                cnt2--;
            }    
        }
        cout << ele1 << " " << cnt1 << " " << ele2 << " " << cnt2<<endl;
        vector<int> sol;
        cnt1 = 0;
        cnt2 = 0;
        for(int i=0;i<n;i++){
            if(nums[i] == ele1){
                cnt1++;
            }
            else if(nums[i] == ele2){
                cnt2++;
            }
        }
        
        if(cnt1 > n/3){
            sol.push_back(ele1);
        }
        if(cnt2 >n/3){
            sol.push_back(ele2);
        }
        return sol;
    }