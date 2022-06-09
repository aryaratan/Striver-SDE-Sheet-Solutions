https://leetcode.com/problems/reverse-pairs/


// merge sort
int merge(vector<int> &nums, int si, int midI, int ei){
    
    int count=0;
    int i = si;
    int j = midI+1 ;
    int k = si;
    //int midI = si - (si - ei) / 2;
    //int *temp = new int[si - ei +1];
        
    while(i<=midI){
        while(j<=ei && nums[i] > 2* (long)nums[j]){         
             
            j++;
            continue;
        }
        count += j - (midI + 1);
        i++;
    }
     i = si;
        j = midI+1;
    
        
        
        // merging
    vector<int> temp;
    while (i <= midI and j <= ei)
    {
        if (nums[i] <= nums[j])
            temp.push_back(nums[i++]);
            //temp[k++] = nums[i++];

        else{
            temp.push_back(nums[j++]);
            //temp[k++] = nums[j++];
            
        }
        
    }
    
    while (i <= midI)
    {
        temp.push_back(nums[i++]);
        //temp[k++] = nums[i++];
    }

    while (j <= ei)
    {
        temp.push_back(nums[j++]);
        //temp[k++] = nums[j++];
    }
    
    for (int i = si; i <= ei; i++)
    {
        nums[i] = temp[i-si];
    }
    //delete [] temp;
    return count;
}

    int inversion(vector<int> &nums, int s, int e){
    // int count = 0;
    if(s>=e){
        return 0;
    }
    int mid = s - (s-e)/2;
        //cout << mid << " ";
   int count = inversion(nums,s,mid);
    count += inversion(nums,mid+1,e);
    
    count += merge(nums, s,mid,e);
    
    return count;
}
    
    int reversePairs(vector<int>& nums) {
    
        return inversion(nums,0,nums.size()-1);
    }