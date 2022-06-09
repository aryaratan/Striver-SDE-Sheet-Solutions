https://leetcode.com/problems/powx-n/




double myPow(double x, int n) {
        if(n==0){
            return 1;
        }
        if(n == 1)
            return x;
        
        long tempn = n;
        if(tempn < 0){
            tempn = (-1)*tempn;
        }
        double ans = 1.0;
        for(int i=0;tempn > 0;i++){
            if(tempn % 2 == 0){
                x *= x;
                tempn /= 2;
            }
            else{
                ans *= x;
                tempn -= 1;
            }
        }
        
        //ans *= x;
        if(n < 0){
            return (double)(1.0)/(double)ans;
        }
        return ans;
    }