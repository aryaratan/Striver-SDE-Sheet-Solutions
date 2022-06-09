
https://leetcode.com/problems/majority-element/


int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n==1){
            return nums[0];
        }
        //int maxCount=0 , ele =0;

        // brute force O(n^2) & O(1)
       // sort(nums.begin(),nums.end());
       /* for(int i=0;i<=n/2;i++){
            int temp = nums[i];
            if( temp == ele){
                continue;
            }
            int count =1;
            for(int j=i+1;j<n;j++){
                if(nums[j] == temp){
                    count++;
                }
                if(count > n/2){
                    return temp;
                }
            }
             
            if(count > maxCount){
                maxCount = count;
                ele = temp;
            }
           
        }*/
        /*
        
        // O(nlogn) and O(n)
        unordered_map<int,int> map;
        for(int i=0;i<n;i++){
            map[nums[i]]++;
        }
        for(auto it=map.begin();it!= map.end();it++){
            if(it -> second > n/2)
                return it -> first;
            
        }*/
        
        // optimal solution
        // moore voting algo
        int cnt =0, ele = -1;
        for(int i =0;i<n;i++){
            if(nums[i] == ele){
                cnt++;
            }
            else if(cnt == 0){
                ele  = nums[i];
            }
            else{
                cnt--;
            }
        }
        
        
        return ele;
    }