https://practice.geeksforgeeks.org/problems/largest-subarray-with-0-sum/1

int maxLen(vector<int>&A, int n)
    {   
        // Your code here
        unordered_map<int,int> map;
    map[0] = -1;
    int ml = 0;
    int sum = 0;
    for(int i=0;i<A.size();i++){
        sum += A[i];
        if(map.count(sum)>0){
            int cl = i - map[sum];
            ml = max(ml,cl);
        }
        else{
            map[sum] = i;
        }
    }
    return ml;
    }