https://leetcode.com/problems/merge-intervals/


vector<vector<int>> merge(vector<vector<int>>& intervals) {
      
        int n = intervals.size();
        if(n == 1){
            return intervals;
        }
        sort(intervals.begin(),intervals.end());
        vector<vector<int>> sol;
        vector<int> temp =  intervals[0]; 
        for(int i=1;i<n;i++){
            if(temp[1] >= intervals[i][0]){
                temp[1] = max(intervals[i][1], temp[1]);
                continue;
            }
            sol.push_back(temp);
            temp = intervals[i];
        }
        sol.push_back(temp);
        return sol;
    }