https://leetcode.com/problems/merge-sorted-array/


void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        
        if(nums2.size() == 0){
            return ;
        }
        
        vector<int> sorted;
        int i=0,j=0,k=0;
        while(i<m && j<n){
            if(nums1[i] < nums2[j]){
                sorted.push_back(nums1[i]);
                i++;
                
            }else{
                sorted.push_back(nums2[j]);
                j++;
        
            }
        }
        
        while(i<m){
            sorted.push_back(nums1[i]);
            i++;
        }
        while(j<n){
            sorted.push_back(nums2[j]);
            j++;
        }
        
        while(k<n+m){
            nums1[k] = sorted[k];
            k++;
        }
        
        
       
        return ;
    }